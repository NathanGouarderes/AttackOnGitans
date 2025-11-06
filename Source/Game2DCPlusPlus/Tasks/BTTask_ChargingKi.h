// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_ChargingKi.generated.h"

/**
 * 
 */
UCLASS()
class GAME2DCPLUSPLUS_API UBTTask_ChargingKi : public UBTTaskNode
{
	GENERATED_BODY()
	
	UBTTask_ChargingKi();

	EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	virtual void TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
};
