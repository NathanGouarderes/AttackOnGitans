#include "CharacterAnimationComponent.h"
#include "../Characters/MyCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "PaperFlipbookComponent.h"

UCharacterAnimationComponent::UCharacterAnimationComponent()
{
    PrimaryComponentTick.bCanEverTick = true;
    PrimaryComponentTick.bStartWithTickEnabled = true;
    SetComponentTickEnabled(true);
}

void UCharacterAnimationComponent::BeginPlay()
{
    Super::BeginPlay();

    OwnerCharacter = Cast<ACharacter>(GetOwner());
    CombatComponent = OwnerCharacter->FindComponentByClass<UCharacterCombatComponent>();
    FlipbookComponent = OwnerCharacter->FindComponentByClass<UPaperFlipbookComponent>();
    IFlipbookProviderInterface* FlipbookProvider = Cast<IFlipbookProviderInterface>(OwnerCharacter);

    if (!OwnerCharacter)
    {
        UE_LOG(LogTemp, Error, TEXT("❌ UCharacterAnimationComponent : Impossible de récupérer OwnerCharacter !"));
        return;
    }

    if (!CombatComponent)
    {
        UE_LOG(LogTemp, Error, TEXT("❌ UCharacterAnimationComponent : CombatComponent non trouvé !"));
    }

    if (!FlipbookComponent)
    {
        UE_LOG(LogTemp, Error, TEXT("❌ UCharacterAnimationComponent : FlipbookComponent non trouvé !"));
    }

    if (OwnerCharacter->GetClass()->ImplementsInterface(UFlipbookProviderInterface::StaticClass()))
    {
        FlipbookComponent = FlipbookProvider->GetCharacterFlipbook();
    }

    

    PrimaryComponentTick.SetTickFunctionEnable(true);
}

void UCharacterAnimationComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    if (!OwnerCharacter || !FlipbookComponent)
    {
        UE_LOG(LogTemp, Error, TEXT("❌ TickComponent : OwnerCharacter ou FlipbookComponent manquant"));
        return;
    }

    //UE_LOG(LogTemp, Warning, TEXT("Role : %s"), *UEnum::GetValueAsString(CharacterRole));

    UpdateAnimation();
}

void UCharacterAnimationComponent::UpdateAnimation()
{
    if (!OwnerCharacter || !FlipbookComponent) return;

    float VelocityX = OwnerCharacter->GetVelocity().X;
    bool bIsWalking = FMath::Abs(VelocityX) > KINDA_SMALL_NUMBER;
    bool bIsFalling = OwnerCharacter->GetCharacterMovement()->IsFalling(); 

    // 🎬 État prioritaire : Attaque
    if (CombatComponent && CombatComponent->IsAttacking())
        return;

    // 👟 Marche
    if (bIsWalking)
    {
        PlayWalkAnimation(CharacterRole);
        return;
    }

    // 🪂 Saut
    if (bIsFalling)
    {
        PlayAnimation(JumpAnimation);
        return;
    }

    // 😴 Idle
    SetDefaultAnimation();
}

void UCharacterAnimationComponent::PlayAnimation(UPaperFlipbook* Animation)
{
    if (FlipbookComponent && Animation)
    {
        FlipbookComponent->SetFlipbook(Animation);
    }
}

void UCharacterAnimationComponent::PlayAttackAnimation(const FAttackData& AttackData, ERole Role)
{
    if (!CombatComponent)
    {
        UE_LOG(LogTemp, Error, TEXT("❌ PlayAttackAnimation : CombatComponent est NULL !"));
        return;
    }

    
    UPaperFlipbook* SelectedFlipbook = nullptr;

    switch (Role)
    {
    case ERole::Player:
        SelectedFlipbook = AttackData.PlayerAnimation.LoadSynchronous();
        break;
    case ERole::Enemy:
        SelectedFlipbook = AttackData.EnemyAnimation.LoadSynchronous();
        break;
    default:
        UE_LOG(LogTemp, Error, TEXT("❌ PlayAttackAnimation : Rôle non géré (%d) !"), static_cast<int>(Role));
        return;
    }

    if (!SelectedFlipbook)
    {
        UE_LOG(LogTemp, Error, TEXT("❌ PlayAttackAnimation : Aucun Flipbook trouvé !"));
        return;
    }

    float Direction = bIsFacingRight ? 2.0f : -2.0f;
    FVector CurrentScale = FlipbookComponent->GetRelativeScale3D();
    FlipbookComponent->SetRelativeScale3D(FVector(Direction, CurrentScale.Y, CurrentScale.Z));
    CombatComponent->DoWeaponTrace(AttackData);

    FlipbookComponent->SetFlipbook(SelectedFlipbook);
    CombatComponent->bIsAttacking = true;

    float AnimationDuration = FlipbookComponent->GetFlipbookLength();
    GetWorld()->GetTimerManager().SetTimer(
        AttackEndTimer,
        this,
        &UCharacterAnimationComponent::EndAttackAnimation,
        AnimationDuration,
        false
    );
}

void UCharacterAnimationComponent::EndAttackAnimation()
{
    if (CombatComponent)
    {
        CombatComponent->bIsAttacking = false;
        CombatComponent->ResetCombo();
    }

    SetDefaultAnimation();
}

void UCharacterAnimationComponent::ResetCombo()
{
    if (CombatComponent)
    {
        CombatComponent->ResetCombo();
    }
}

void UCharacterAnimationComponent::SetDefaultAnimation()
{
    PlayIdleAnimation(CharacterRole);
}

void UCharacterAnimationComponent::SetFacingDirection(float VelocityX)
{
    if (!FlipbookComponent)
    {
        UE_LOG(LogTemp, Error, TEXT("UCharacterAnimationComponent::SetFacingDirection --> Pas de FlipbookComponent"));
        return;
    }

    bool bWasFacingRight = bIsFacingRight;

    if (VelocityX > 0.1f)
    {
        FlipbookComponent->SetRelativeScale3D(FVector(2.0f, 1.0f, 1.0f));
        bIsFacingRight = true;
    }
    else if (VelocityX < -0.1f)
    {
        FlipbookComponent->SetRelativeScale3D(FVector(-2.0f, 1.0f, 1.0f));
        bIsFacingRight = false;
    }

    if (bWasFacingRight != bIsFacingRight)
    {
        float Direction = bIsFacingRight ? -2.0f : 2.0f;
        FVector NewScale = FlipbookComponent->GetRelativeScale3D();
        NewScale.X = Direction;
        FlipbookComponent->SetRelativeScale3D(NewScale);
    }
}


bool UCharacterAnimationComponent::IsFacingRight() const
{
    return bIsFacingRight;
}


void UCharacterAnimationComponent::PlayIdleAnimation(ERole Role)
{
    
    const UDataTable* AnimationData = AnimationDataTableAsset.LoadSynchronous();

    CurrentAnimationData = AnimationData->FindRow<FAnimationData>(FName("Idle"), TEXT(""));
        
    switch (Role)
    {
    case ERole::Player:
        FlipbookComponent->SetFlipbook(CurrentAnimationData->PlayerAnimation.LoadSynchronous());
        //UE_LOG(LogTemp, Warning, TEXT("IdleAnimation du Player"));
        break;
    case ERole::Enemy:
        FlipbookComponent->SetFlipbook(CurrentAnimationData->EnemyAnimation.LoadSynchronous());
        //UE_LOG(LogTemp, Warning, TEXT("IdleAnimation de l'ennemi"));
        break;
    case ERole::Boss:
        break;
    case ERole::NPC:
        break;
    default:
        break;
    }
}

void UCharacterAnimationComponent::PlayWalkAnimation(ERole Role)
{
    const UDataTable* AnimationData = AnimationDataTableAsset.LoadSynchronous();

    CurrentAnimationData = AnimationData->FindRow<FAnimationData>(FName("Walk"), TEXT(""));

    switch (Role)
    {
    case ERole::Player:
        FlipbookComponent->SetFlipbook(CurrentAnimationData->PlayerAnimation.LoadSynchronous());
       //UE_LOG(LogTemp, Warning, TEXT("WalkAnimation du joueur"));
        break;
    case ERole::Enemy:
        FlipbookComponent->SetFlipbook(CurrentAnimationData->EnemyAnimation.LoadSynchronous());
        //UE_LOG(LogTemp, Warning, TEXT("WalkAnimation de l'ennemi"));
        break;
    case ERole::Boss:
        break;
    case ERole::NPC:
        break;
    default:
        break;
    }
}
