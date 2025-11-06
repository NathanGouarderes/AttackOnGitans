// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "./FAttackData.h"
//#include "../Abilities/MyStandBase.h"
#include "FStandData.generated.h"

class AMyStandBase;

USTRUCT(BlueprintType)
struct FStandData
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FAttackData Base;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stand|Data")
    TSoftObjectPtr<UDataTable> StandAttackSet;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float FollowingDistance = 250.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float FollowingSpeed = 10.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float DamageTickInterval = 0.2f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float DamageCooldown = 0.3f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSoftObjectPtr<UPaperFlipbook> StandIdleAnimation;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSoftObjectPtr<UPaperFlipbook> StandAttackAnimation;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSoftObjectPtr<UPaperFlipbook> StandBlockAnimation;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSoftObjectPtr<UPaperFlipbook> PlayerStandOutAnimation;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSoftObjectPtr<UPaperFlipbook> EnemyStandOutAnimation;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSoftClassPtr<AMyStandBase> StandClass;
};
