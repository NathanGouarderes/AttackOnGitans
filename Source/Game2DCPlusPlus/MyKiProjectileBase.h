// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyProjectileBase.h"
#include "CharacterKiComponent.h"
#include "MyKiProjectileBase.generated.h"

/**
 * 
 */
UCLASS()
class GAME2DCPLUSPLUS_API AMyKiProjectileBase : public AMyProjectileBase
{
	GENERATED_BODY()

public:
	AMyKiProjectileBase();

	virtual void Initialize(FVector FireDirection) override;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ki")
	float KiCost;  // Coût en Ki pour lancer ce projectile

	UPROPERTY()
	UCharacterKiComponent* KiComponent; // Composant Ki du lanceur

	bool ConsumeKi();
};
