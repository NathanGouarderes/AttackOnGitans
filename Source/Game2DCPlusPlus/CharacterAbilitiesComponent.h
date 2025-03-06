#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PaperFlipbook.h"
#include "CharacterAbilitiesComponent.generated.h"

class AMyCharacter;
class AMyProjectileBase;
class UCharacterKiComponent;
class UCharacterCombatComponent;

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class GAME2DCPLUSPLUS_API UCharacterAbilitiesComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UCharacterAbilitiesComponent();

protected:
	virtual void BeginPlay() override;

public:
	/** Attaque légère (combo possible) */
	void LightAttack();

	/** Termine l'attaque */
	void EndLightAttack();

	/** Lancer un projectile */
	void CastProjectile();

	/** Effectuer un dash/esquive */
	void Dodge();

	/** Réinitialiser le dash */
	void ResetDash();


	UPROPERTY(EditAnywhere, Category = "Movement")
	float DashDistance;

	UPROPERTY(EditAnywhere, Category = "Movement")
	float DashCooldown;

	UPROPERTY(EditAnywhere, Category = "Movement")
	float DashDuration;

	UPROPERTY(EditAnywhere, Category = "Combat")
	float AttackDamage;

	UPROPERTY(EditAnywhere, Category = "Combat")
	float KiCostForAttack;

	UPROPERTY(EditAnywhere, Category = "Combat")
	float SwordDamages;

	UPROPERTY(EditAnywhere, Category = "Combat")
	float Strength; 

	UPROPERTY(EditAnywhere, Category = "Combat")
	float MaxKi;

	AMyCharacter* OwnerCharacter;

private:
	UPROPERTY()
	UCharacterCombatComponent* CombatComponent;
	UPROPERTY(EditAnywhere, Category = "Combat")
	TSubclassOf<AMyProjectileBase> ProjectileClass;





private:
	UPROPERTY(EditAnywhere, Category = "Animations")
	UPaperFlipbook* Swing1SwordFlipbook;

	UPROPERTY(EditAnywhere, Category = "Animations")
	UPaperFlipbook* Swing2SwordFlipbook;

	UPROPERTY(EditAnywhere, Category = "Animations")
	UPaperFlipbook* Swing3SwordFlipbook;



	bool bCanDash;
	bool bIsAttacking;
	FTimerHandle DashTimerHandle;
	FTimerHandle AttackTimerHandle;
};
