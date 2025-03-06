// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h" 
#include "BehaviorTree/BlackboardComponent.h"
#include "MyBTTask_SetPatrolLocation.generated.h"

UCLASS()
class GAME2DCPLUSPLUS_API UMyBTTask_SetPatrolLocation : public UBTTaskNode
{
	GENERATED_BODY()

public:
	UMyBTTask_SetPatrolLocation();

protected:
	
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
};
