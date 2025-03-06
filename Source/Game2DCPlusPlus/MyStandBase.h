// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperFlipbookComponent.h"
#include "GameFramework/Actor.h"
class AMyCharacter;
#include "MyStandBase.generated.h"

UCLASS()
class GAME2DCPLUSPLUS_API AMyStandBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyStandBase();

protected:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stand", meta = (AllowPrivateAccess = "true"))
	UPaperFlipbookComponent* StandFlipbook;

	UPROPERTY()
	AMyCharacter* CharacterUser;

	float FollowDistance = 100.0f;


	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

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
	void InitializeStand(AMyCharacter* CharacterOwner);

};
