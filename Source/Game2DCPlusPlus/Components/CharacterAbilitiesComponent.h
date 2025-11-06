#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CharacterAnimationComponent.h"
#include "PaperFlipbookComponent.h"
#include "../Abilities/MyKiAttack.h"
#include "../Data/FProjectileData.h"
#include "StandComponent.h"
#include "./UCharacterStateComponent.h"
#include "../Data/FBeamAttackData.h"
#include "../Abilities/Beams/BeamBase.h"
#include "../Data/Enums/EState.h"
#include "../Abilities/Beams/ChargingBeamSphere.h"
#include "../Abilities/MyStandBase.h"
#include "StatsComponent.h"
#include "CharacterKiComponent.h"
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
	/** Lancer un projectile */
	void CastProjectile(EProjectileType Type);
	UFUNCTION()
	void StartChargingBeam();

	UFUNCTION()
	void ConsumeKiWhileChargingBeam();

	UFUNCTION()
	void ReleaseBeam();

	/** Effectuer un dash/esquive */
	void Dodge();

	/** Reinitialiser le dash */
	void ResetDash();

	void InitializeKiComponent(UCharacterKiComponent* KiComponent);
	void InitializeAllComponents(UCharacterKiComponent* InKi, UStatsComponent* InStast);

	void SetCurrentBeam(TSubclassOf<ABeamBase> CurrentBeam);

	void UpdateChargingBeamVisual();


	TSubclassOf<ABeamBase> GetCurrentBeam();


	bool GetIsChargingBeam();
	bool GetIsFacingRight();

	void SummonStand();

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

	UPROPERTY(EditDefaultsOnly, Category = "Projectiles")
	TSubclassOf<AActor> BP_KiBallClass;

	UPROPERTY(EditDefaultsOnly, Category = "Projectiles")
	TSubclassOf<AActor> BP_Kamehameha;

	UPROPERTY(EditDefaultsOnly, Category = "Projectiles")
	TSoftClassPtr<AChargingBeamSphere> BP_ChargingBeamSphere;

	UPROPERTY(EditDefaultsOnly, Category = "Projectiles")

	TSubclassOf<ABeamBase> BeamClass;

	UPROPERTY(EditAnywhere, Category = "Stand")
	TSubclassOf<AMyStandBase> StandClass;

	UPROPERTY(EditAnywhere, Category = "Combat")
	TSubclassOf<ABeamBase> CurrentBeamSelected;

	UPROPERTY(EditAnywhere, Category = "Combat")
	UCharacterKiComponent* KiComponent;

	UPROPERTY(EditAnywhere, Category = "Combat")
	UStatsComponent* StatsComponent;

	UPROPERTY()
	ABeamBase* CurrentBeam;

	ACharacter* OwnerCharacter;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Data")
	FName CurrentBeamName;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Data")
	FBeamAttackData KamehamehaData;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Data")
	UDataTable* ProjectileDataTable;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Data")
	UDataTable* BeamDataTable;


	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Data")
	UDataTable* PhysicalAttackDataTable;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Component")
	UCharacterStateComponent* StateComponent;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Component")
	UStandComponent* StandComponent;

	AChargingBeamSphere* ChargingBeamSphere;


	bool bCanDash;
	bool bIsAttacking;
	bool bIsChargingBeam;
	bool bIsStandOut;

private:
	UPROPERTY(EditAnywhere, Category = "Combat")
	TSubclassOf<AMyProjectileBase> ProjectileClass;
	
	FTimerHandle ComboResetTimerHandle;

	UCharacterAnimationComponent* AnimationComponent;

	AMyKiAttack* MyKiAttack;

	




private:
	//UPROPERTY(EditAnywhere, Category = "Animations")
	//UPaperFlipbook* Swing1SwordFlipbook;

	//UPROPERTY(EditAnywhere, Category = "Animations")
	//UPaperFlipbook* Swing2SwordFlipbook;

	//UPROPERTY(EditAnywhere, Category = "Animations")
	//UPaperFlipbook* Swing3SwordFlipbook;



	
	FTimerHandle DashTimerHandle;
	FTimerHandle AttackTimerHandle;
	FTimerHandle BeamChargeTimer;
	FTimerHandle BeamVisualTimer;
};
