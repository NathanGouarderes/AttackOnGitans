#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FAttackData.generated.h"

UENUM(BlueprintType)
enum class EDamageTypeEnum : uint8
{
    Physical UMETA(DisplayName = "Physical"),
    Fire     UMETA(DisplayName = "Fire"),
    Ice      UMETA(DisplayName = "Ice"),
    Magic    UMETA(DisplayName = "Magic")
};

USTRUCT(BlueprintType)
struct FAttackData : public FTableRowBase
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    FName AttackName;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    float Damage;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    float Range;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    float StartupTime;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    float ActiveTime;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    float RecoveryTime;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    TSoftObjectPtr<class UPaperFlipbook> Animation;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    EDamageTypeEnum DamageType;

    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UPaperFlipbook> PlayerAnimation;

    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UPaperFlipbook> EnemyAnimation;

    UPROPERTY(EditAnywhere)
    TArray<FName> TraceSockets;
};
