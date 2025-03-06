// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BTTaskNode.h"
#include "MyBTTask_OnPlayerseen.generated.h"

/**
 * 
 */
UCLASS()
class GAME2DCPLUSPLUS_API UMyBTTask_OnPlayerseen : public UBTTaskNode
{
	GENERATED_BODY()
	
public:
	UMyBTTask_OnPlayerseen();

protected:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

};
