#include "CharacterInputComponent.h"
#include "MyCharacter.h"
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

    /** Attaques **/
    if (OwnerCharacter->AbilitiesComponent)
    {
        PlayerInputComponent->BindAction("LightAttack", IE_Pressed, OwnerCharacter->AbilitiesComponent, &UCharacterAbilitiesComponent::LightAttack);
        UE_LOG(LogTemp, Warning, TEXT("BindInputs: LightAttack lie"));
        PlayerInputComponent->BindAction("Dodge", IE_Pressed, OwnerCharacter->AbilitiesComponent, &UCharacterAbilitiesComponent::Dodge);
        UE_LOG(LogTemp, Warning, TEXT("BindInputs: Dodge lie"));
        PlayerInputComponent->BindAction("FireProjectile", IE_Pressed, OwnerCharacter->AbilitiesComponent, &UCharacterAbilitiesComponent::CastProjectile);
        UE_LOG(LogTemp, Warning, TEXT("BindInputs: FireProjectile lie"));
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

