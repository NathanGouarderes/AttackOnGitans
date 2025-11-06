// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/DamageType.h"
#include "NiagaraComponent.h"
#include "../../Components/HitboxComponent.h"
#include "../../Components/CharacterKiComponent.h"
#include "../../Components/StatsComponent.h"
#include "PaperFlipbookComponent.h"
#include "../../Data/FBeamAttackData.h"
#include "MyKiAttack.h"
#include "BeamBase.generated.h"


UCLASS()
class GAME2DCPLUSPLUS_API ABeamBase : public AMyKiAttack
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABeamBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void StartFiringBeam();
	virtual void StopFiringBeam();
	virtual void UpdateBeam(float NewLength);

	void InitializeBeam(const FBeamAttackData& InBeamData,float InChargeLevel, AActor* InOwner);
	
	UFUNCTION(BlueprintCallable, Category = "Beam")
	void StartChargingBeam();
	UFUNCTION(BlueprintCallable, Category = "Beam")
	void ReleaseBeam();
	UFUNCTION(BlueprintCallable, Category = "Beam")
	void StopBeam();
	UFUNCTION(BlueprintCallable, Category = "Beam")
	void PerformBeamTraceAndDamage();

	UFUNCTION(BlueprintCallable, Category = "Beam")
	void OnBeamOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION(BlueprintCallable, Category = "Beam")
	void ApplyBeamDamage(AActor* Target);
	

	UPROPERTY(VisibleAnywhere, Category = "Components")
	USceneComponent* Root;
	UPROPERTY(VisibleAnywhere, Category = "Components")
	UNiagaraComponent* NiagaraComponent;
	UPROPERTY(VisibleAnywhere, Category = "Components")
	UHitboxComponent* HitboxComponent;
	UPROPERTY(VisibleAnywhere, Category = "Components")
	UStatsComponent* StatsComponent;
	UPROPERTY(VisibleAnywhere, Category = "Components")
	UPaperFlipbookComponent* FlipbookComponent;


	UPROPERTY(EditAnywhere, Category = "Beam|Damage")
	float DamageTickInterval;

	UPROPERTY(EditAnywhere, Category = "Beam|Damage")
	float DamageCooldown;

	UPROPERTY(EditAnywhere, Category = "Beam|Data")
	FBeamAttackData BeamData;

	UPROPERTY()
	TSet<AActor*> RecentlyDamagedActors;

	FTimerHandle DamageTickTimer;
	FTimerHandle ClearDamagedActorsTimer;

	int beamDirectionMultiplier = 1;
	float CurrentLenght;
	float MaxLength;
	float GrowthRate = 500.0f;
	float BaseDamage = 10.0f;
	float ChargeLevel;
	float KiCostPerSecondForCharging = 5.0f;
	float KiCostPerSeconForFiring = 70.6f;
	bool bIsCharging = false;
	bool bIsFiring = false;


};