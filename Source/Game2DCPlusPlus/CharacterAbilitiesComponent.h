#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PaperFlipbook.h"
#include "CharacterAbilitiesComponent.generated.h"

class AMyCharacter;
class AMyProjectileBase;
class UCharacterKiComponent;
class UCharacterCombatComponent;

UENUM(BlueprintType)
enum class EProjectileType : uint8
{
    Kamehameha UMETA(DisplayName = "Kamehameha"),
    Fireball UMETA(DisplayName = "Fireball")
};

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class GAME2DCPLUSPLUS_API UCharacterAbilitiesComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UCharacterAbilitiesComponent();

protected:
	virtual void BeginPlay() override;

public:
	/** Lancer un projectile */
	void CastProjectile(EProjectileType ProjectileType);

	/** Effectuer un dash/esquive */
	void Dodge();

	/** Reinitialiser le dash */
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

	UPROPERTY(EditAnywhere, Category = "Combat")
	TSubclassOf<AMyProjectileBase> KamehamehaClass;

	UPROPERTY(EditAnywhere, Category = "Combat")
	TSubclassOf<AMyProjectileBase> FireballClass;


	AMyCharacter* OwnerCharacter;

private:
	UPROPERTY(EditAnywhere, Category = "Combat")
	TSubclassOf<AMyProjectileBase> ProjectileClass;
	
	FTimerHandle ComboResetTimerHandle;





private:
	//UPROPERTY(EditAnywhere, Category = "Animations")
	//UPaperFlipbook* Swing1SwordFlipbook;

	//UPROPERTY(EditAnywhere, Category = "Animations")
	//UPaperFlipbook* Swing2SwordFlipbook;

	//UPROPERTY(EditAnywhere, Category = "Animations")
	//UPaperFlipbook* Swing3SwordFlipbook;



	bool bCanDash;
	bool bIsAttacking;
	FTimerHandle DashTimerHandle;
	FTimerHandle AttackTimerHandle;
};
