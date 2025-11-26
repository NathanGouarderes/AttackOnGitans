// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CharacterStats.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FCharacterStats : public FTableRowBase
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxHealth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxKi;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float KiLoadSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxMana;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ManaLoadSpeed;
};