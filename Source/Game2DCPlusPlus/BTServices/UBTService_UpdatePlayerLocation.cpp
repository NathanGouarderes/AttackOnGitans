// Fill out your copyright notice in the Description page of Project Settings.


#include "UBTService_UpdatePlayerLocation.h"
#include "AIController.h"
#include "../Enemies/MyEnemyBase.h"
#include "../Characters/MyCharacter.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Kismet/GameplayStatics.h"

UUBTService_UpdatePlayerLocation::UUBTService_UpdatePlayerLocation()
{
	NodeName = "Update player location";
	Interval = 0.3f; //fréquence de rafraichissement (temps de réaction moyen d'un humain)
	RandomDeviation = 0.1f; // Léger jitter pour éviter la synchro entre IA
}

void UUBTService_UpdatePlayerLocation::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	AAIController* AIController = OwnerComp.GetAIOwner();
	AMyEnemyBase* Enemy = AIController ? Cast<AMyEnemyBase>(AIController->GetPawn()) : nullptr;
	APawn* Player = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

	if (!AIController || !Enemy || !Player)
	{
		UE_LOG(LogTemp, Error, TEXT("UUBTService_UpdatePlayerLocation::TickNode --> AIController ou Enemy ou Player NULL"));
		return;
	}
	OwnerComp.GetBlackboardComponent()->SetValueAsVector("CurrentPlayerLocation", Player->GetActorLocation());
	float DistanceFromPlayer = FVector::DistSquared2D(Enemy->GetActorLocation(), OwnerComp.GetBlackboardComponent()->GetValueAsVector(BBKeys::CurrentPlayerLocation));
	//UE_LOG(LogTemp, Warning, TEXT("UBTTask_ChargingBeam::ExecuteTask --> Distance to player :  %f"), DistanceFromPlayer);
	OwnerComp.GetBlackboardComponent()->SetValueAsFloat(BBKeys::DistanceFromClosestEnemy, DistanceFromPlayer);
	//UE_LOG(LogTemp, Warning, TEXT("UUBTService_UpdatePlayerLocation::TickNode --> PlayerLocation : X: %f, Y: %f, Z: %f"), Player->GetActorLocation().X, Player->GetActorLocation().Y, Player->GetActorLocation().Z);


 }
