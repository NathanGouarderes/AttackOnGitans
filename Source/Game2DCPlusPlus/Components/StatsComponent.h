// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StatsComponent.generated.h"



UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GAME2DCPLUSPLUS_API UStatsComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UStatsComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	int32 MaxHealth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	int32 CurrentHealth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	float MaxKi;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	float CurrentKi;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	float KiLoadSpeed;

	UFUNCTION(BlueprintCallable, Category = "Stats")
	void ApplyDamages(int32 Damege);

	UFUNCTION(BlueprintCallable, Category = "Stats")
	void Heal(int32 HealAmount);

	UFUNCTION(BlueprintCallable, Category = "Stats")
	bool IsDead() const;

private:
	void Die();
		
};
