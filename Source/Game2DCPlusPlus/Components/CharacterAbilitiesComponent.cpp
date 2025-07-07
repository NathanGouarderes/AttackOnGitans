#include "CharacterAbilitiesComponent.h"
#include "CharacterCombatComponent.h"
#include "../Abilities/Projectiles/MyKiProjectileBase.h"
#include "CharacterAnimationComponent.h"
#include "../Characters/MyCharacter.h"
#include "../Abilities/Projectiles/MyProjectileBase.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"

#define ECC_TRACEHITBOX ECC_GameTraceChannel1

UCharacterAbilitiesComponent::UCharacterAbilitiesComponent()
{
	PrimaryComponentTick.bCanEverTick = false;


	// Initialisation des valeurs par défaut
	KiCostForAttack = 0.f;
	MaxKi = 100.f;
	Strength = 10.f;
	SwordDamages = 15.f;

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
		UE_LOG(LogTemp, Error, TEXT("UCharacterAbilitiesComponent : Impossible de recuperer OwnerCharacter !"));
		return;  // On quitte pour eviter un crash
	}

	AnimationComponent = OwnerCharacter->FindComponentByClass<UCharacterAnimationComponent>();
	if (!AnimationComponent)
	{
		UE_LOG(LogTemp, Error, TEXT("UCharacterAbilitiesComponent : Impossible de recuperer AnimationComponent !"));
		return;  // On quitte pour eviter un crash
	}

	//UE_LOG(LogTemp, Warning, TEXT("UCharacterAbilitiesComponent : Initialisation terminee"));
}


void UCharacterAbilitiesComponent::CastProjectile(EProjectileType ProjectileType)
{
	if (!OwnerCharacter) return;

	TSubclassOf<AMyProjectileBase> SelectedProjectile;

	switch (ProjectileType)
	{
	case EProjectileType::Kamehameha:
		SelectedProjectile = KamehamehaClass;
		break;
	case EProjectileType::Fireball:
		SelectedProjectile = FireballClass;
		break;
	default:
		return;
	}

	if (!SelectedProjectile) return;

	FVector FireDirection = OwnerCharacter->GetActorForwardVector();
	FVector SpawnLocation = OwnerCharacter->GetActorLocation() + FireDirection * 100;
	FRotator SpawnRotation = FireDirection.Rotation();

	AMyProjectileBase* Projectile = GetWorld()->SpawnActor<AMyProjectileBase>(SelectedProjectile, SpawnLocation, SpawnRotation);

	if (Projectile)
	{
		//UE_LOG(LogTemp, Warning, TEXT("Projectile lance"));

		Projectile->SetOwner(OwnerCharacter); // Definit le proprietaire du projectile

		AMyKiProjectileBase* KiProjectile = Cast<AMyKiProjectileBase>(Projectile);
		if (KiProjectile)
		{
			//UE_LOG(LogTemp, Warning, TEXT("C'est un projectile à Ki, appel de Initialize()"));
			KiProjectile->Initialize(FireDirection);
		}
		else
		{
			//UE_LOG(LogTemp, Warning, TEXT("C'est un projectile normal"));
			Projectile->Initialize(FireDirection);
		}
	}
}

void UCharacterAbilitiesComponent::Dodge()
{
	if (!bCanDash || !OwnerCharacter) return;
	if (!AnimationComponent || !AnimationComponent->FlipbookComponent) return;

	OwnerCharacter->SetCollisionEnabled(false);

	bool bFacingRight = (AnimationComponent->FlipbookComponent->GetRelativeRotation().Yaw == 180.0f);
	FVector DashDirection = FVector::ZeroVector;
	FVector Velocity = OwnerCharacter->GetVelocity();
	bool bIsMoving = FMath::Abs(Velocity.X) > 10.0f;

	if (bIsMoving)
	{
		// Si le personnage est en mouvement, dash dans la direction du mouvement
		DashDirection = (Velocity.X > 0) ? FVector(1, 0, 0) : FVector(-1, 0, 0);
	}
	else
	{
		// Si le personnage est immobile, dash en arrière
		DashDirection = bFacingRight ? FVector(-1, 0, 0) : FVector(1, 0, 0);
	}
	FVector DashVelocity = DashDirection * DashDistance / DashDuration;

	OwnerCharacter->LaunchCharacter(DashVelocity, true, true);
	bCanDash = false;

	//UE_LOG(LogTemp, Warning, TEXT("Dash effectue"));

	GetWorld()->GetTimerManager().SetTimer(DashTimerHandle, this, &UCharacterAbilitiesComponent::ResetDash, DashCooldown, false);
}

void UCharacterAbilitiesComponent::ResetDash()
{
	bCanDash = true;
	OwnerCharacter->SetCollisionEnabled(true);
	//UE_LOG(LogTemp, Warning, TEXT("Dash reinitialise"));
}