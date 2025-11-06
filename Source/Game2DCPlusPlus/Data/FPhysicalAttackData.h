// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FAttackData.h"
#include "FPhysicalAttackData.generated.h"


UENUM()
enum class EPhysicalDamageType : uint8
{
    Tranchant,
    Contondant,
    Perforant
};


USTRUCT(BlueprintType)
struct FPhysicalAttackData : public FAttackData
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EPhysicalDamageType PhysicalDamageType;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float KnockbackForce = 0.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float StaminaCost = 1.0f;
};