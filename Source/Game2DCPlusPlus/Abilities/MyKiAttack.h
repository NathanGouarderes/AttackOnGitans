// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "../Components/CharacterKiComponent.h"
#include "MyKiAttack.generated.h"

UENUM(BlueprintType)
enum class EKiAttackType : uint8
{
	Projectile,
	Beam
};

UCLASS()
class GAME2DCPLUSPLUS_API AMyKiAttack : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyKiAttack();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void ConsumeKi();
	virtual void Initialize(AActor* InOwner, FVector InDirection);

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Ki Attack")
	EKiAttackType KiAttackType;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Ki Attack")
	float KiCost;

	UPROPERTY(BlueprintReadOnly)
	AActor* OwnerCharacter;

	UPROPERTY()
	UCharacterKiComponent* KiComponent;

	FVector FireDirection;
	float Damage;
};
