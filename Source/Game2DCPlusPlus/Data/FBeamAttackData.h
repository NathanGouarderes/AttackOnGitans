// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "./FAttackData.h"
#include "FBeamAttackData.generated.h"

class ABeamBase;

USTRUCT(BlueprintType)
struct FBeamAttackData : public FAttackData
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float KiCostPerSecond = 10.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float GrowthRate = 200.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float MaxLength = 2000.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float DamageTickInterval = 0.2f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float DamageCooldown = 0.3f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bStopIfMoving = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSoftObjectPtr<UPaperFlipbook> PlayerCharginBeamAnimation;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSoftObjectPtr<UPaperFlipbook> EnemyCharginBeamAnimation;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSoftObjectPtr<UPaperFlipbook> ChargingSphereAnimation;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSoftClassPtr<ABeamBase> BeamClass;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName ChargeSockets = "ChargeSocket";
};
