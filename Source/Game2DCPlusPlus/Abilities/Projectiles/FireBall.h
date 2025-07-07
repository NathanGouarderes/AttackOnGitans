// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyKiProjectileBase.h"
#include "FireBall.generated.h"

/**
 * 
 */
UCLASS()
class GAME2DCPLUSPLUS_API AFireBall : public AMyKiProjectileBase
{
	GENERATED_BODY()
	
public:
	AFireBall();
	virtual void Initialize(FVector NexDirection) override;
};
