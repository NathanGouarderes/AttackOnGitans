// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BeamBase.h"
#include "Kamehameha.generated.h"

/**
 * 
 */
UCLASS()
class GAME2DCPLUSPLUS_API AKamehameha : public ABeamBase
{
	GENERATED_BODY()
	
public:
	AKamehameha();

	//virtual void Tick(float DeltaTime) override;
	void StartBeam();
	//void StopBeam();

protected:
	virtual void BeginPlay() override;
	virtual void StartFiringBeam() override;
	virtual void StopFiringBeam() override;

};
