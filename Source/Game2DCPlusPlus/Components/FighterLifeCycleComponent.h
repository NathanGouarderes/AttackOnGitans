// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/ActorComponent.h"
#include "../Data/FCharacterData.h"
#include "FighterLifeCycleComponent.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class GAME2DCPLUSPLUS_API UFighterLifeCycleComponent : public UActorComponent
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	//UFighterLifeCycleComponent();

protected:
	// Called when the game starts or when spawned
	//virtual void BeginPlay() override;

public:	

	void StartLifeCycle(); //Appelé par le Character

	void PreInit();
	void LoadData();
	void WireCore();
	void WireCombat();
	void WireAbilities();
	void StandPhase();
	void PostInit();
	void Finish();

	AActor* OwnerActor = nullptr;
	FCharacterData CharacterData;
	class UCharacterCombatComponent* Combat = nullptr;
	class UCharacterKiComponent* Ki = nullptr;
	class UCharacterStateComponent* State = nullptr;
	class UStatsComponent* Stats = nullptr;
	class UCharacterAbilitiesComponent* Abilities = nullptr;
	class UStandComponent* StandComp = nullptr;
	class UCharacterAnimationComponent* Anim = nullptr;
};
