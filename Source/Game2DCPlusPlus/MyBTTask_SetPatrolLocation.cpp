// Fill out your copyright notice in the Description page of Project Settings.

#include "MyBTTask_SetPatrolLocation.h"
#include "AIController.h"
#include "AMyEnemyAIController.h"
#include "BehaviorTree/BlackboardComponent.h"

UMyBTTask_SetPatrolLocation::UMyBTTask_SetPatrolLocation()
{
    NodeName = "Set Patrol Location";
}

EBTNodeResult::Type UMyBTTask_SetPatrolLocation::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	//UE_LOG(LogTemp, Warning, TEXT("Tâche SetPatrolLocation executee"));
    AAMyEnemyAIController* AIController = Cast<AAMyEnemyAIController>(OwnerComp.GetAIOwner());

	if (AIController)
	{
		AIController->SetNewPatrolLocation();
		return EBTNodeResult::Succeeded;
	}
	return EBTNodeResult::Failed;

}

