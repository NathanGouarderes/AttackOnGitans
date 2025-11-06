// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "AIController.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Sight.h"
#include "BehaviorTree/BehaviorTree.h"
#include "AMyEnemyAIController.generated.h"

/**
 * 
 */

namespace BBKeys {
    inline const FName Player(TEXT("Player"));
    inline const FName IsPlayerVisible(TEXT("IsPlayerVisible"));
    inline const FName LastKnownPlayerLocation(TEXT("LastKnownPlayerLocation"));
    inline const FName PatrolLocation(TEXT("PatrolLocation"));
    inline const FName CurrentPlayerLocation(TEXT("CurrentPlayerLocation"));
    inline const FName DistanceFromClosestEnemy(TEXT("DistanceFromClosestEnemy"));


}

UCLASS()
class GAME2DCPLUSPLUS_API AAMyEnemyAIController : public AAIController
{
	GENERATED_BODY()
   
public:
    AAMyEnemyAIController();
    void SetNewPatrolLocation();
    UFUNCTION()
    void OnTargetDetected(AActor* Actor, FAIStimulus Stimulus);

    UPROPERTY(VisibleAnywhere, Category = "AI")
    UBlackboardComponent* BlackboardComponent;

    UPROPERTY(VisibleAnywhere, Category = "AI")
    UBehaviorTreeComponent* BehaviorTreeComponent;

    UPROPERTY(EditAnywhere, Category = "AI")
    class UBehaviorTree* BehaviorTree;

    UPROPERTY(EditAnywhere, Category = "AI")
    UBlackboardData* BlackboardData;

    UAIPerceptionComponent* PerceptionComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AI", meta = (AllowPrivateAccess = "true"))
    UAISenseConfig_Sight* SightConfig;

    FTimerHandle PatrolTimerHandle;



protected: 
	virtual void BeginPlay();
    virtual void Tick(float Deltatime) override;

    

private:
    FVector OldLocation = FVector::ZeroVector;

    
	
};
