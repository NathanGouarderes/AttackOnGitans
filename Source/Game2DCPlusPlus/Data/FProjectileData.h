// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FProjectileData.generated.h"

UENUM(BlueprintType)
enum class EProjectilCategory : uint8
{
	Ki     UMETA(DisplayName = "Ki"),
	Magic  UMETA(DisplayName = "Magic"),
	Physic UMETA(DisplayName = "Physic")
};

UENUM(BlueprintType)
enum class EProjectileType : uint8
{
	Kamehameha,
	Kiball,
	Kienzan,
	None
};



USTRUCT(BlueprintType)
struct FProjectileData : public FAttackData
{
	GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSubclassOf<class AMyProjectileBase> ProjectileClass;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EProjectilCategory ProjectileCategory;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Speed = 800.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float LifeSpan = 3.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float GravityScale = 0.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Cost = 0.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bCanPierce = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bExplodesOnImpact = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float ExplosionRadius = 0.f;

};