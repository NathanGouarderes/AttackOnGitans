#include "MyBTTask_OnPlayerseen.h"
#include "AIController.h"
#include "AMyEnemyAIController.h"
#include "BehaviorTree/BlackboardComponent.h"

UMyBTTask_OnPlayerseen::UMyBTTask_OnPlayerseen()
{
    NodeName = "On Player Seen";
}

EBTNodeResult::Type UMyBTTask_OnPlayerseen::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
    //UE_LOG(LogTemp, Warning, TEXT("BTTask_OnPlayerSeen started"));

    // Obtenez le contrôleur IA
    AAMyEnemyAIController* AIController = Cast<AAMyEnemyAIController>(OwnerComp.GetAIOwner());
    if (!AIController)
    {
        UE_LOG(LogTemp, Error, TEXT("AIController not found"));
        return EBTNodeResult::Failed;
    }

    // Vérifiez si le joueur est visible dans le Blackboard
    bool bIsPlayerVisible = OwnerComp.GetBlackboardComponent()->GetValueAsBool("IsPlayerVisible");

    if (bIsPlayerVisible)
    {
        //UE_LOG(LogTemp, Warning, TEXT("Player is visible!"));
        FPlatformProcess::Sleep(0.1f);
        return EBTNodeResult::Succeeded;
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Player is not visible"));
        return EBTNodeResult::Failed;
    }
}
