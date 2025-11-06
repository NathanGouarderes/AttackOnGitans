// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Containers/Queue.h"
#include "PaperFlipbook.h"
#include "../MyWeaponBase.h"
#include "../Data/FAttackData.h"
#include "./UCharacterStateComponent.h"
#include "Components/ActorComponent.h"
#include "CharacterCombatComponent.generated.h"
class UCharacterAnimationComponent;
class UCharacterAbilitiesComponent;


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GAME2DCPLUSPLUS_API UCharacterCombatComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCharacterCombatComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void LightAttack();
	void ExecuteLightAttack();
	void EndLightAttack();
	void ResetCombo();
	void PlayComboAnimation();
	void DealDamageToActor(AActor* Target, float DamageAmount);

	UFUNCTION()
	void OnSwordOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	
	//UFUNCTION(BlueprintCallable, Category = "Combat")
	//void EquipWeapon(AMyWeaponBase* NewWeapon);

	UFUNCTION(BlueprintCallable, Category = "Combat")
	void UpdateHitboxFromSockets();

	UFUNCTION(BlueprintCallable, Category = "Combat")
	void DoWeaponTrace(const FAttackData& AttackData);

	UFUNCTION(BlueprintCallable, Category = "Combat")
	bool IsAttacking();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Combat")
	int CurrentComboStep;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Component")
	UCharacterAbilitiesComponent* AbilitiesComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Component")
	UCharacterAnimationComponent* AnimationComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Component")
	UCharacterStateComponent* StateComponent;

	UPROPERTY()
	TObjectPtr<UPaperFlipbook> CurrentAttackFlipbook = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Combat")
	bool bIsAttacking;
	bool bIsTracing = false;

	

	//UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Combat")
	//AMyWeaponBase* CurrentWeapon;

	UPROPERTY(EditDefaultsOnly, Category = "Combat")
	TSoftObjectPtr<UDataTable> AttackDataTableAsset;

	UPROPERTY()
	FAttackData CurrentAttackData;




	int32 ComboStep;
	int32 AttackQueueSize = 0;

	FTimerHandle ComboResetTimerHandle;

private:
	

	TQueue<int32> AttackQueue;
	
	ACharacter* OwnerCharacter;
	

};
