// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CreatureData.generated.h"

/**
 * 
 */
UCLASS()
class GAME2DCPLUSPLUS_API UCreatureData : public UPrimaryDataAsset
{
	GENERATED_BODY()
	

public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Stats")
    FText CreatureName;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Stats")
    float MaxHealth = 100;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Stats")
    float MoveSpeed = 300;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Combat")
    float AttackDamage = 10;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Combat")
    float AttackSpeed = 1;

    //UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AI")
    //UBehaviorTree* BehaviorTree;
};
