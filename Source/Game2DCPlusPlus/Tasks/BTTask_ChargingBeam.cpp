// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_ChargingBeam.h"
#include "../Enemies/MyEnemyBase.h"
#include "../Components/CharacterAbilitiesComponent.h"
#include "AIController.h"

UBTTask_ChargingBeam::UBTTask_ChargingBeam()
{
	NodeName = "Charging Beam";
}

EBTNodeResult::Type UBTTask_ChargingBeam::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AAIController* AIController = OwnerComp.GetAIOwner();
	AMyEnemyBase* Enemy = AIController ? Cast<AMyEnemyBase>(AIController->GetPawn()) : nullptr;
	if (Enemy->AbilitiesComponent)
	{
		float DistanceFromPlayer = FVector::DistSquared2D(Enemy->GetActorLocation(), OwnerComp.GetBlackboardComponent()->GetValueAsVector(BBKeys::CurrentPlayerLocation));
		UE_LOG(LogTemp, Warning, TEXT("UBTTask_ChargingBeam::ExecuteTask --> Distance to player :  %f"), DistanceFromPlayer);

		//UE_LOG(LogTemp, Warning, TEXT("UBTTask_ChargingBeam::ExecuteTask --> CurrentPlayerLocation : X : %f, Y : %f, Z : %f"), OwnerComp.GetBlackboardComponent()->GetValueAsVector("CurrentPlayerLocation").X, OwnerComp.GetBlackboardComponent()->GetValueAsVector("CurrentPlayerLocation").Y, OwnerComp.GetBlackboardComponent()->GetValueAsVector("CurrentPlayerLocation").Z);
		//OwnerComp.GetBlackboardComponent()->SetValueAsFloat("DistanceFromClosestEnemy", );
		//float ClosestEnemyDistance = OwnerComp.GetBlackboardComponent()->GetValueAsFloat("DistanceFromClosestEnemy");
		
		Enemy->AbilitiesComponent->StartChargingBeam();
		return EBTNodeResult::Succeeded;
	}
	else
	{
		return EBTNodeResult::Failed;
	}

}
