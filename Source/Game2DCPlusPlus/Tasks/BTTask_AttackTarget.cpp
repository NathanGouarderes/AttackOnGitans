// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_AttackTarget.h"
#include "AIController.h"
#include "../Enemies/MyEnemyBase.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTTask_AttackTarget::UBTTask_AttackTarget()
{
	NodeName = "Attack Target";
}

EBTNodeResult::Type UBTTask_AttackTarget::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AAIController* AIController = OwnerComp.GetAIOwner();
	if (!AIController)
	{
		return EBTNodeResult::Failed;
	}

	AMyEnemyBase* Enemy = Cast<AMyEnemyBase>(AIController->GetPawn());

	if (!Enemy)
	{
		return EBTNodeResult::Failed;
	}

	if (Enemy->CombatComponent && !Enemy->CombatComponent->IsAttacking())
	{
		Enemy->CombatComponent->ExecuteLightAttack();
		UE_LOG(LogTemp, Warning, TEXT("Lennemi vient d'executer ExecuteLightAttack depuis la tache AttackTarget"));

	}

	return EBTNodeResult::Succeeded;
}