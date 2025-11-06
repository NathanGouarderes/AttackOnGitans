// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "UBTService_UpdatePlayerLocation.generated.h"

/**
 * 
 */
UCLASS()
class GAME2DCPLUSPLUS_API UUBTService_UpdatePlayerLocation : public UBTService
{
	GENERATED_BODY()

public:
	UUBTService_UpdatePlayerLocation();

protected:
	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
	
};
