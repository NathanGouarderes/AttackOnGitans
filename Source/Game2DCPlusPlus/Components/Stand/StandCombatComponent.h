// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "../../Data/FStandAttackData.h"
#include "StandCombatComponent.generated.h"

class AMyStandBase;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GAME2DCPLUSPLUS_API UStandCombatComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UStandCombatComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	AMyStandBase* StandOwner;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "StandAttack", meta = (AllowPrivateAccess = "true"))
	TSoftObjectPtr<UDataTable> StandAttackDataTable;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "StandAttack", meta = (AllowPrivateAccess = "true"))
	FStandAttackData StandAttackData;

		
};
