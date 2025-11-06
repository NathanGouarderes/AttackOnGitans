// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StandAbilitiesComponent.generated.h"

class AMyStandBase;


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GAME2DCPLUSPLUS_API UStandAbilitiesComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UStandAbilitiesComponent();
	

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	AMyStandBase* StandOwner;
		
};
