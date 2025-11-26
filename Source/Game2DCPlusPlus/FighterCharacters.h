// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PaperCharacter.h"
#include "../Data/FCharacterData.h"
#include "../Components/UCharacterStateComponent.h"
#include "../Components/StatsComponent.h"
#include "../Components/StandComponent.h"
#include "../Components/FighterLifeCycleComponent.h"
#include "../Components/CharacterAnimationComponent.h"
#include "./Components/CharacterAbilitiesComponent.h"
#include "../Data/FCharacterData.h"
#include "FighterCharacters.generated.h"

UCLASS()
class GAME2DCPLUSPLUS_API AFighterCharacters : public APaperCharacter
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFighterCharacters();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void GetDatasFromCharacterDataTable();
	virtual void SetDatasFromCharacterDataTable(FName Name);
	FName GetCharacterName();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Character|Data")
	TSoftObjectPtr<UDataTable> CharacterDataTable;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Character|Data")
	FCharacterData CharacterData;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Character|Data")
	FName CharacterName;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UCharacterCombatComponent* CombatComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UFighterLifeCycleComponent* LifeCycleComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UCharacterKiComponent* KiComponent;

	//UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	//UCharacterAnimationComponent* MyAnimationComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UCharacterAbilitiesComponent* AbilitiesComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UStatsComponent* StatsComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UCharacterStateComponent* StateComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UStandComponent* StandComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Component", meta = (AllowPrivateAccess = "true"))
	UCharacterAnimationComponent* AnimationComponent;



	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Character|Data")
	UDataTable* AttackDataTable;

};
