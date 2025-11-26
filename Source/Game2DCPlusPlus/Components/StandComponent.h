// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "../Abilities/MyStandBase.h"
#include "StandComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GAME2DCPLUSPLUS_API UStandComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UStandComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;


public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	void SummonStand();
	void UnsumonStand();

	UPROPERTY(EditAnywhere, Category = "Stand")
	TSubclassOf<AMyStandBase> StandClass;

	AActor* OwnerCharacter;

	AMyStandBase* Stand;

	bool bIsStandOut;
	bool bIsStandComingBack = false;

		
};
