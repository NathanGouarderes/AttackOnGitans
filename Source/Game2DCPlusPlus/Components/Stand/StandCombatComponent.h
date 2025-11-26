// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "../../Data/FStandAttackData.h"
#include "../../Data/FCharacterData.h"
#include "StandCombatComponent.generated.h"

class AMyStandBase;
class UStandComponent;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GAME2DCPLUSPLUS_API UStandCombatComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UStandCombatComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	void InitializeAfterOwnerSet();

	AMyStandBase* StandOwner;
	UStandComponent* HandlerStandComponent;

	AActor* StandHandler;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stand", meta = (AllowPrivateAccess = "true"))
	FCharacterData HandlerData;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "StandAttack", meta = (AllowPrivateAccess = "true"))
	TSoftObjectPtr<UDataTable> StandAttackDataTable;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "StandAttack", meta = (AllowPrivateAccess = "true"))
	FStandAttackData StandAttackData;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "StandAttack")
	TArray<FStandAttackData> CachedStandAttacks;

		
};
