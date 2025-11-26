// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_ChargingKi.h"
#include "../Enemies/MyEnemyBase.h"
#include "../Components/CharacterKiComponent.h"
#include "AIController.h"

UBTTask_ChargingKi::UBTTask_ChargingKi()
{
	NodeName = "Charging Ki Task";
	bNotifyTick = true; //Permet de recevoir le DeltaSeconds chaque frame
}

EBTNodeResult::Type UBTTask_ChargingKi::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AAIController* AIController = OwnerComp.GetAIOwner();
	AMyEnemyBase* Enemy = AIController ? Cast<AMyEnemyBase>(AIController->GetPawn()) : nullptr;

	if (!AIController || !Enemy || !Enemy->KiComponent)
	{
		UE_LOG(LogTemp, Error, TEXT("UBTTask_FireBeam::ExecuteTask --> paramètres invalides"));
		return EBTNodeResult::Failed;
	}

	if (!Enemy)
	{
		return EBTNodeResult::Failed;
	}

	Enemy->KiComponent->StartChargingKi();
	UE_LOG(LogTemp, Warning, TEXT("L'ennemi commence à charger son Ki"));

	return EBTNodeResult::InProgress;

}

void UBTTask_ChargingKi::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	AAIController* AIController = OwnerComp.GetAIOwner();
	AMyEnemyBase* Enemy = AIController ? Cast<AMyEnemyBase>(AIController->GetPawn()) : nullptr;
	if (!AIController || !Enemy || !Enemy->KiComponent)
	{
		UE_LOG(LogTemp, Error, TEXT("UBTTask_FireBeam::ExecuteTask --> paramètres invalides"));
		FinishLatentTask(OwnerComp, EBTNodeResult::Failed);
		
	}
	//UE_LOG(LogTemp, Warning, TEXT("Enemy Current Ki : %f\nEnemy Max Ki : %f"), Enemy->StatsComponent->CurrentKi, Enemy->StatsComponent->MaxKi);
	//if(!Enemy->AbilitiesComponent->bIsChargingBeam || )
	Enemy->KiComponent->LoadKiAI(DeltaSeconds);

	if (Enemy->StatsComponent->CurrentKi >= (Enemy->StatsComponent->CharacterStats.MaxKi * 0.7))
	{
		Enemy->StatsComponent->CurrentKi = Enemy->StatsComponent->CharacterStats.MaxKi;
		Enemy->KiComponent->StopChargingKi();
		UE_LOG(LogTemp, Warning, TEXT("Ennemi a terminé de charger son Ki"));
		FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
		
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("EnemiKi : %f\nEnemiMaxKi :%f\n"), Enemy->StatsComponent->CurrentKi, Enemy->StatsComponent->CharacterStats.MaxKi);
	}


}


