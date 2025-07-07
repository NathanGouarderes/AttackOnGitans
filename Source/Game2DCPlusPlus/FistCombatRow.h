#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PaperFlipbook.h"
#include "FistCombatRow.generated.h"

USTRUCT(BlueprintType)
struct FFistCombatRow : public FTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UPaperFlipbook* PunchAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Damage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Range;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float StartupTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RecoveryTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 StartFrame;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 EndFrame;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName StartSocketName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName EndSocketName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HitboxThickness;
};
