// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "../Data/Enums/ECreatureSegmentType.h"
#include "../Components/CreatureSegmentComponent.h"
#include "CreatureBase.generated.h"

UCLASS()
class GAME2DCPLUSPLUS_API ACreatureBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACreatureBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Creature")
	UCreatureSegmentComponent* RootSegment;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Creature")
	TArray<UCreatureSegmentComponent*> Segments;

	UFUNCTION(BlueprintCallable, Category = "Creature")
	void GenerateCreature(int32 NumSegments = 4);

	//UFUNCTION(BlueprintCallable, Category = "Creature")
	//void MutateCreature();

};
