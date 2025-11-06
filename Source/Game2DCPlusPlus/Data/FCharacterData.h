#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FCharacterData.generated.h"

USTRUCT(BlueprintType)
struct FCharacterData : public FTableRowBase
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    FName CharacterName;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    bool bIsKiUser = false;


    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    bool bIsStandUser = false;


    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    bool bIsDevilFruitUser = false;


    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    bool bIsManaUser = false;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    TSoftClassPtr<class AMyStandBase> StandClass;

    //Des données supplémentaires
    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    FName StandName;  //correspond à la ligne dans DT_StandData ou DT_StandAttackData
};
