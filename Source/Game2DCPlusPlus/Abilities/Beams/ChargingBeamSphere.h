// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PaperFlipbookComponent.h"
#include "PaperFlipbook.h"
#include "ChargingBeamSphere.generated.h"

UCLASS()
class GAME2DCPLUSPLUS_API AChargingBeamSphere : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AChargingBeamSphere();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void SetChargingBeamSphereFlipook(UPaperFlipbook* ChargingSphereFlipbook);

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UPaperFlipbookComponent* FlipbookComponent;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Animation")
	UPaperFlipbook* ChargingFlipbook;

};
