// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "HitboxComponent.generated.h"

/**
 * 
 */
UCLASS()
class GAME2DCPLUSPLUS_API UHitboxComponent : public UBoxComponent
{
	GENERATED_BODY()
	
public:
	UHitboxComponent();

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCustomHit, AActor*, Self, AActor*, Other);

	UPROPERTY(BlueprintAssignable)
	FOnCustomHit OnCustomHit;



	float Damage = 0;

protected:
	virtual void BeginPlay() override;

private:
	UFUNCTION()
	void OnHitInternal(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
		FVector NormalImpulse, const FHitResult& Hit);

	void OnOverlapInternal(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};
