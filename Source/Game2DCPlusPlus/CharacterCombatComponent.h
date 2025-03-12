// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Containers/Queue.h"
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

	UFUNCTION()
	void OnSwordOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	
	bool bIsAttacking;

	int32 ComboStep;

	FTimerHandle ComboResetTimerHandle;

private:
	UCharacterAbilitiesComponent* AbilitiesComponent;
	UCharacterAnimationComponent* AnimationComponent;
	TQueue<int32> AttackQueue;
	class AMyCharacter* OwnerCharacter;

};
