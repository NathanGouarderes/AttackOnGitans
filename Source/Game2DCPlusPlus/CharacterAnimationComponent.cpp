#include "CharacterAnimationComponent.h"
#include "MyCharacter.h"
#include "CharacterCombatComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "PaperFlipbookComponent.h"


UCharacterAnimationComponent::UCharacterAnimationComponent()
{
    PrimaryComponentTick.bCanEverTick = true;
    PrimaryComponentTick.bStartWithTickEnabled = true;
    SetComponentTickEnabled(true);
	bIsAttacking = false;
}

void UCharacterAnimationComponent::BeginPlay()
{
	Super::BeginPlay();
	OwnerCharacter = Cast<AMyCharacter>(GetOwner());

    if (IsRegistered())
    {
        UE_LOG(LogTemp, Warning, TEXT("✅ UCharacterAnimationComponent est bien enregistré."));
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("❌ UCharacterAnimationComponent n'est pas enregistré !"));
    }

	if (OwnerCharacter)
	{
		CombatComponent = OwnerCharacter->FindComponentByClass<UCharacterCombatComponent>();
		FlipbookComponent = OwnerCharacter->FindComponentByClass<UPaperFlipbookComponent>();
		if (!FlipbookComponent)
		{
			UE_LOG(LogTemp, Error, TEXT("UCharacterAnimationComponent : FlipbookComponent non trouve !"));
		}
		if (!CombatComponent)
		{
			UE_LOG(LogTemp, Error, TEXT("UCharacterAnimationComponent : CombatComponent non trouve !"));
		}
        PrimaryComponentTick.SetTickFunctionEnable(true);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("UCharacterAnimationComponent : Impossible de recuperer OwnerCharacter !"));
	}
    UE_LOG(LogTemp, Warning, TEXT("Tick active ? %s"), PrimaryComponentTick.IsTickFunctionEnabled() ? TEXT("Oui") : TEXT("Non"));
}

void UCharacterAnimationComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
    //UpdateAnimation();
}

void UCharacterAnimationComponent::UpdateAnimation()
{
    //UE_LOG(LogTemp, Warning, TEXT("UpadateAnimation execute !"));
    if (!FlipbookComponent || !OwnerCharacter) return;

    if (OwnerCharacter->GetCharacterMovement()->IsFalling())
    {
        FlipbookComponent->SetFlipbook(JumpAnimation);
    }
    if (CombatComponent->bIsAttacking)
    {
        PlayAttackAnimation();
    }
}





void UCharacterAnimationComponent::PlayAttackAnimation()
{
    UE_LOG(LogTemp, Warning, TEXT("▶️ PlayAttackAnimation() appelé"));

    if (!CombatComponent)
    {
        UE_LOG(LogTemp, Error, TEXT("❌ PlayAttackAnimation : CombatComponent est NULL !"));
        return;
    }



    CombatComponent->bIsAttacking = true;

    UE_LOG(LogTemp, Warning, TEXT("🎭 ComboStep actuel : %d"), CombatComponent->ComboStep);

    UPaperFlipbook* SelectedFlipbook = nullptr;

    switch (CombatComponent->ComboStep)
    {
    case 1:
        SelectedFlipbook = Swing1SwordFlipbook;
        break;
    case 2:
        SelectedFlipbook = Swing2SwordFlipbook;
        break;
    case 3:
        SelectedFlipbook = Swing3SwordFlipbook;
        break;
    default:
        UE_LOG(LogTemp, Error, TEXT("❌ Aucune animation d'attaque sélectionnée !"));
        return;
    }

    if (SelectedFlipbook)
    {
        FlipbookComponent->SetFlipbook(SelectedFlipbook);
        UE_LOG(LogTemp, Warning, TEXT("✅ Animation d'attaque jouée"));

        // 🔥 Programme la fin de l'attaque pour réinitialiser l'animation
        float AnimationDuration = FlipbookComponent->GetFlipbookLength();
        GetWorld()->GetTimerManager().SetTimer(AttackEndTimer, this, &UCharacterAnimationComponent::EndAttackAnimation, AnimationDuration, false);
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("❌ PlayAttackAnimation : Aucun Flipbook trouvé !"));
    }
}

void UCharacterAnimationComponent::EndAttackAnimation()
{
    UE_LOG(LogTemp, Warning, TEXT("✅ Fin de l'animation d'attaque, retour à Idle"));

    if (CombatComponent)
    {
        CombatComponent->bIsAttacking = false;  // 🔥 Autoriser UpdateAnimation() à fonctionner à nouveau
        CombatComponent->ResetCombo();  // 🔥 Reset le combo si nécessaire
    }

    SetDefaultAnimation();
}






void UCharacterAnimationComponent::ResetCombo()
{
	if (!CombatComponent) return;

	UE_LOG(LogTemp, Warning, TEXT("ResetCombo appele, ComboStep avant reset: %d"), CombatComponent->ComboStep);

	bIsAttacking = false;
	//SetDefaultAnimation();

	UE_LOG(LogTemp, Warning, TEXT("ResetCombo termine, ComboStep apres reset: %d"), CombatComponent->ComboStep);
}


void UCharacterAnimationComponent::SetDefaultAnimation()
{
	if (!FlipbookComponent) return;
	FlipbookComponent->SetFlipbook(IdleAnimation);
}
