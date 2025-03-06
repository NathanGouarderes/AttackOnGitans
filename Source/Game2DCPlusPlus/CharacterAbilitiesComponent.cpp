#include "CharacterAbilitiesComponent.h"
#include "CharacterCombatComponent.h"
#include "MyCharacter.h"
#include "MyProjectileBase.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"

UCharacterAbilitiesComponent::UCharacterAbilitiesComponent()
{
	PrimaryComponentTick.bCanEverTick = false;

	DashDistance = 1000.0f;
	DashCooldown = 0.3f;
	DashDuration = 0.5f;
	AttackDamage = 10.0f;
	bCanDash = true;
	bIsAttacking = false;
}

void UCharacterAbilitiesComponent::BeginPlay()
{
	Super::BeginPlay();
	OwnerCharacter = Cast<AMyCharacter>(GetOwner());

	if (!OwnerCharacter)
	{
		UE_LOG(LogTemp, Error, TEXT("UCharacterAbilitiesComponent : Impossible de récupérer OwnerCharacter !"));
	}
	CombatComponent = OwnerCharacter->FindComponentByClass<UCharacterCombatComponent>();

	if (!CombatComponent)
	{
		UE_LOG(LogTemp, Error, TEXT("UCharacterAbilitiesComponent : CombatComponent non trouvé !"));
	}
}

void UCharacterAbilitiesComponent::LightAttack()
{
	if (bIsAttacking) return;
	bIsAttacking = true;

	FTimerHandle TimerHandle;
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UCharacterAbilitiesComponent::EndLightAttack, 0.5f, false);
}

void UCharacterAbilitiesComponent::EndLightAttack()
{
	bIsAttacking = false;
	UE_LOG(LogTemp, Warning, TEXT("Fin de l'attaque"));
}

void UCharacterAbilitiesComponent::CastProjectile()
{
	if (!ProjectileClass || !OwnerCharacter) return;

	FVector FireDirection = (OwnerCharacter->GetActorForwardVector());
	FVector SpawnLocation = OwnerCharacter->GetActorLocation() + FireDirection * 100;
	FRotator SpawnRotation = FireDirection.Rotation();

	AMyProjectileBase* Projectile = GetWorld()->SpawnActor<AMyProjectileBase>(ProjectileClass, SpawnLocation, SpawnRotation);

	if (Projectile)
	{
		UE_LOG(LogTemp, Warning, TEXT("Projectile lance"));
	}
}

void UCharacterAbilitiesComponent::Dodge()
{
	if (!bCanDash || !OwnerCharacter) return;

	FVector DashDirection = OwnerCharacter->GetActorForwardVector();
	FVector DashVelocity = DashDirection * DashDistance / DashDuration;

	OwnerCharacter->LaunchCharacter(DashVelocity, true, true);
	bCanDash = false;

	UE_LOG(LogTemp, Warning, TEXT("Dash effectue"));

	GetWorld()->GetTimerManager().SetTimer(DashTimerHandle, this, &UCharacterAbilitiesComponent::ResetDash, DashCooldown, false);
}

void UCharacterAbilitiesComponent::ResetDash()
{
	bCanDash = true;
	UE_LOG(LogTemp, Warning, TEXT("Dash réinitialise"));
}
