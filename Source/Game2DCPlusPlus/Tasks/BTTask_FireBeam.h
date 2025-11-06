// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_FireBeam.generated.h"

/**
 * 
 */
UCLASS()
class GAME2DCPLUSPLUS_API UBTTask_FireBeam : public UBTTaskNode
{
	GENERATED_BODY()

	UBTTask_FireBeam();
	
	EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
};
