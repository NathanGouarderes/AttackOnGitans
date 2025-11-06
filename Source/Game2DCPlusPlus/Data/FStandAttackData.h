#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "../Data/FAttackData.h"
#include "FStandAttackData.generated.h"

USTRUCT(BlueprintType)
struct FStandAttackData : public FTableRowBase
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    FName AttackName;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    float Damage;

    //UPROPERTY(EditAnywhere, BlueprintReadOnly)
    //float RecoveryTime;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    TSoftObjectPtr<class UPaperFlipbook> Animation;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    EDamageTypeEnum DamageType;

    UPROPERTY(EditAnywhere)
    TArray<FName> TraceSockets;
};
