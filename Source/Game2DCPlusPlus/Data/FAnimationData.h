// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperFlipbook.h"
#include "Engine/DataTable.h"
#include "FAnimationData.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FAnimationData : public FTableRowBase
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    FName AnimationName;

    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UPaperFlipbook> PlayerAnimation;

    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UPaperFlipbook> EnemyAnimation;

    UPROPERTY(EditAnywhere)
    TArray<FName> TraceSockets;
};
