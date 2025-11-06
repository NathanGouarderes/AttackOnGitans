// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "../Data/FStandData.h"
#include "PaperFlipbookComponent.h"
#include "PaperFlipbook.h"
#include "StandAnimationComponent.generated.h"

class AMyStandBase;


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GAME2DCPLUSPLUS_API UStandAnimationComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UStandAnimationComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void PlayStandIdleAnimation(UPaperFlipbook* Flipbook);
	void UpdateStandAnimation();

	AMyStandBase* StandOwner;
	UPaperFlipbookComponent* FlipbookComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stand", meta = (AllowPrivateAccess = "true"))
	UDataTable* StandDataTable;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stand", meta = (AllowPrivateAccess = "true"))
	FStandData StandData;

		
};
