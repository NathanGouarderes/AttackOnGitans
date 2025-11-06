// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_FireBeam.h"
#include "../Enemies/MyEnemyBase.h"
#include "../Components/CharacterAbilitiesComponent.h"
#include "AIController.h"

UBTTask_FireBeam::UBTTask_FireBeam()
{
	NodeName = "Fire Beam Attack";
}

EBTNodeResult::Type UBTTask_FireBeam::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AAIController* AIController = OwnerComp.GetAIOwner();
	AMyEnemyBase* Enemy = AIController ? Cast<AMyEnemyBase>(AIController->GetPawn()) : nullptr;
	if (!AIController)
	{
		UE_LOG(LogTemp, Error, TEXT("UBTTask_FireBeam::ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8* NodeMemory) --> AIController NULL"));
		return EBTNodeResult::Failed;
	}

	if (!Enemy)
	{
		return EBTNodeResult::Failed;
	}
	if (!Enemy->StatsComponent)
	{
		UE_LOG(LogTemp, Error, TEXT("UBTTask_FireBeam::ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8* NodeMemory) --> StatsComponent NULL"));
		return EBTNodeResult::Failed;
	}

	Enemy->AbilitiesComponent->StartChargingBeam();

	// Laisse le node "vivant" pendant la charge
	FTimerDelegate ReleaseDelegate;
	ReleaseDelegate.BindLambda([this, &OwnerComp, Enemy]()
		{
			if (Enemy && Enemy->AbilitiesComponent)
			{
				UE_LOG(LogTemp, Warning, TEXT("L'ennemi libère le Kamehameha !"));
				Enemy->AbilitiesComponent->ReleaseBeam();
			}

			FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
		});

	Enemy->GetWorld()->GetTimerManager().SetTimerForNextTick(ReleaseDelegate);

	return EBTNodeResult::InProgress;

}
