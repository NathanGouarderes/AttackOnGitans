// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "../Data/Enums/ECreatureSegmentType.h"
#include "CreatureSegmentComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GAME2DCPLUSPLUS_API UCreatureSegmentComponent : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCreatureSegmentComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Segment")
	ECreatureSegmentType SegmentType = ECreatureSegmentType::Core;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Segment")
	float Length = 50.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Segment")
	float Thickness = 10.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Segment")
	int32 GenerationIndex = 0; //Pour traquer les mutations

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Segment")
	bool bCanMutate = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Segment")
	UStaticMeshComponent* MeshComponent;

	UStaticMesh* CubeMesh;

	void InitializeSegment(ECreatureSegmentType Type, FVector SegmentRelativePosition);

	void OnRegister() override;

	void MutateSegment();








		
};
