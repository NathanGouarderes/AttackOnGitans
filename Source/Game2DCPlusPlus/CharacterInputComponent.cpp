#include "CharacterInputComponent.h"
#include "MyCharacter.h"
#include "CharacterCombatComponent.h"
#include "CharacterAbilitiesComponent.h"
#include "CharacterKiComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

UCharacterInputComponent::UCharacterInputComponent()
{
    PrimaryComponentTick.bCanEverTick = false;
}

void UCharacterInputComponent::BeginPlay()
{
    Super::BeginPlay();

    AActor* OwnerActor = GetOwner();
    if (!OwnerActor)
    {
        UE_LOG(LogTemp, Error, TEXT("UCharacterInputComponent: GetOwner() est NULL !"));
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("UCharacterInputComponent: GetOwner() = %s (Type: %s)"),
            *OwnerActor->GetName(),
            *OwnerActor->GetClass()->GetName());
    }

    OwnerCharacter = Cast<AMyCharacter>(GetOwner());

    if (!OwnerCharacter)
    {
        UE_LOG(LogTemp, Error, TEXT("UCharacterInputComponent: Impossible de caster GetOwner() en AMyCharacter !"));
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("UCharacterInputComponent: OwnerCharacter trouve : %s"), *OwnerCharacter->GetName());
    }
}

void UCharacterInputComponent::BindInputs(UInputComponent* PlayerInputComponent)
{
    if (!OwnerCharacter)
    {
        UE_LOG(LogTemp, Error, TEXT("BindInputs: OwnerCharacter est NULL !"));
    }
    if (!PlayerInputComponent)
    {
        UE_LOG(LogTemp, Error, TEXT("BindInputs: PlayerInputComponent est NULL !"));
    }
    if (!OwnerCharacter || !PlayerInputComponent)
    {
        UE_LOG(LogTemp, Error, TEXT("BindInputs: Impossible de lier les entrees, OwnerCharacter ou PlayerInputComponent est NULL !"));
        return;
    }

    UE_LOG(LogTemp, Warning, TEXT("BindInputs: Liaison de MoveRight à %s"), *OwnerCharacter->GetName());
    PlayerInputComponent->BindAxis("MoveRight", OwnerCharacter, &AMyCharacter::MoveRight);
    UE_LOG(LogTemp, Warning, TEXT("BindInputs: MoveRight lie avec succes"));

    if (OwnerCharacter->CombatComponent)
    {
        PlayerInputComponent->BindAction("LightAttack", IE_Pressed, OwnerCharacter->CombatComponent, &UCharacterCombatComponent::LightAttack);
        UE_LOG(LogTemp, Warning, TEXT("BindInputs: LightAttack lie à CharacterCombatComponent"));
    }
    /** Attaques **/
    if (OwnerCharacter->AbilitiesComponent)
    {
        PlayerInputComponent->BindAction("Dodge", IE_Pressed, OwnerCharacter->AbilitiesComponent, &UCharacterAbilitiesComponent::Dodge);
        UE_LOG(LogTemp, Warning, TEXT("BindInputs: Dodge lie"));

        PlayerInputComponent->BindAction("FireKamehameha", IE_Pressed, this, &UCharacterInputComponent::FireKamehameha);
        UE_LOG(LogTemp, Warning, TEXT("BindInputs: FireKamehameha lie"));

        PlayerInputComponent->BindAction("FireFireball", IE_Pressed, this, &UCharacterInputComponent::FireFireball);
        UE_LOG(LogTemp, Warning, TEXT("BindInputs: FireFireball lie"));


        UE_LOG(LogTemp, Warning, TEXT("BindInputs: FireKamehameha et FireFireball lies avec succes"));
    }

    /** Gestion du Ki **/
    if (OwnerCharacter->KiComponent)
    {
        PlayerInputComponent->BindAxis("LoadKi", OwnerCharacter->KiComponent, &UCharacterKiComponent::LoadKi);
        UE_LOG(LogTemp, Warning, TEXT("BindInputs: LoadKi lie"));
        PlayerInputComponent->BindAction("StartLoadKi", IE_Pressed, OwnerCharacter->KiComponent, &UCharacterKiComponent::StartChargingKi);
        UE_LOG(LogTemp, Warning, TEXT("BindInputs: StartLoadKi Press lie"));
        PlayerInputComponent->BindAction("StartLoadKi", IE_Released, OwnerCharacter->KiComponent, &UCharacterKiComponent::StopChargingKi);
        UE_LOG(LogTemp, Warning, TEXT("BindInputs: StartLoadKi Released lie"));
    }

    /** Saut **/
    PlayerInputComponent->BindAction("Jump", IE_Pressed, OwnerCharacter, &AMyCharacter::Jump);
    UE_LOG(LogTemp, Warning, TEXT("BindInputs: Jump Press lie"));
    PlayerInputComponent->BindAction("Jump", IE_Released, OwnerCharacter, &AMyCharacter::StopJumping);
    UE_LOG(LogTemp, Warning, TEXT("BindInputs: Jump Released lie"));
}

void UCharacterInputComponent::FireKamehameha()
{
    if (OwnerCharacter && OwnerCharacter->AbilitiesComponent)
    {
        UE_LOG(LogTemp, Warning, TEXT("FireKamehameha active"));
        OwnerCharacter->AbilitiesComponent->CastProjectile(EProjectileType::Kamehameha);
    }
}

void UCharacterInputComponent::FireFireball()
{
    if (OwnerCharacter && OwnerCharacter->AbilitiesComponent)
    {
        UE_LOG(LogTemp, Warning, TEXT("FireFireball active"));
        OwnerCharacter->AbilitiesComponent->CastProjectile(EProjectileType::Fireball);
    }
}
