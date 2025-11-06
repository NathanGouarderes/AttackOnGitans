// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../MyKiAttack.h"
#include "../../Components/HitboxComponent.h"
#include "PaperFlipbookComponent.h"
#include "Components/BoxComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "KiProjectile.generated.h"

/**
 * 
 */
UCLASS()
class GAME2DCPLUSPLUS_API AKiProjectile : public AMyKiAttack
{
	GENERATED_BODY()
	

public:
	AKiProjectile();

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UPaperFlipbookComponent* FlipbookComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UHitboxComponent* HitboxComponent;
	//UBoxComponent* BoxComponent;

	

	UPROPERTY(EditAnywhere, Category = "Movement")
	float ProjectileSpeed = 600.0f;

	void MoveProjectile(float Deltatime);

	UFUNCTION()
	void HandleHit(AActor* self, AActor* OtherActor);


};
