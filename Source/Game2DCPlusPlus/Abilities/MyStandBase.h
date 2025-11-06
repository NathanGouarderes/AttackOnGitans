// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperFlipbookComponent.h"
#include "GameFramework/Actor.h"
#include "../Data/FStandData.h"
#include "../Components/Stand/StandAbilitiesComponent.h"
#include "../Components/Stand/StandAnimationComponent.h"
#include "../Components/Stand/StandCombatComponent.h"

#include "MyStandBase.generated.h"

UCLASS()
class GAME2DCPLUSPLUS_API AMyStandBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyStandBase();

protected:


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "StandComponent", meta = (AllowPrivateAccess = "true"))
	UStandAbilitiesComponent* StandAbilitiesComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "StandComponent", meta = (AllowPrivateAccess = "true"))
	UStandAnimationComponent* StandAnimationComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "StandComponent", meta = (AllowPrivateAccess = "true"))
	UStandCombatComponent* StandCombatComponent;

	UPROPERTY()
	UPaperFlipbookComponent* FlipbookComponent;

	UPROPERTY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stand", meta = (AllowPrivateAccess = "true"))
	UDataTable* StandDataTable;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stand", meta = (AllowPrivateAccess = "true"))
	FStandData StandData;

	float FollowDistance = 100.0f;


	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
	void UpdateStandPosition();

	UFUNCTION()
	virtual void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep,
		const FHitResult& SweepResult);

	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor,
		UPrimitiveComponent* OtherComponent, FVector NormalImpulse,
		const FHitResult& Hit);

	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void InitializeStand(AActor* ActorOwner);
	AActor* OwnerCharacter;



};
