// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "KiProjectile.h"
#include "NiagaraSystem.h"
#include "NiagaraComponent.h"
#include "KiBall.generated.h"

/**
 * 
 */
UCLASS()
class GAME2DCPLUSPLUS_API AKiBall : public AKiProjectile
{
	GENERATED_BODY()
	
public:
	AKiBall();

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FX")
	UNiagaraComponent* NiagaraComponent;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "FX")
	UNiagaraSystem* NiagaraEffect;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Visual")
	UPaperFlipbook* FlipbookAsset;



};
