// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PaperFlipbookComponent.h"
#include "Components/ActorComponent.h"
#include "Particles/ParticleSystem.h"
#include "Particles/ParticleSystemComponent.h"
#include "KiAura.generated.h"

UCLASS()
class GAME2DCPLUSPLUS_API AKiAura : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AKiAura();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void StartAura();
	void StopAura();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aura", meta = (AllowPrivateAccess = "true"))
	UPaperFlipbookComponent* AuraFlipbook;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aura", meta = (AllowPrivateAccess = "true"))
	UPaperFlipbook* AuraFlipbookAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aura", meta = (AllowPrivateAccess = "true"))
	UParticleSystem* AuraEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sound")
	USoundBase* AuraChargingSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sound")
	UAudioComponent* AuraChargingAudioComponent;

	UPROPERTY()
	UParticleSystemComponent* AuraComponentInstance;

};
