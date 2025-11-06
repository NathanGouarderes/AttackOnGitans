// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_ChargingBeam.generated.h"

/**
 * 
 */
UCLASS()
class GAME2DCPLUSPLUS_API UBTTask_ChargingBeam : public UBTTaskNode
{
	GENERATED_BODY()
	
	UBTTask_ChargingBeam();

	EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
};
