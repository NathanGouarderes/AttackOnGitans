// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PaperFlipbookComponent.h"
#include "PaperSpriteComponent.h"
#include "Components/BoxComponent.h"
#include "GroundBase.generated.h"

UCLASS()
class GAME2DCPLUSPLUS_API AGroundBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGroundBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void SetSpirte(UPaperSprite* NewSprite);

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Ground", meta = (AllowPrivateAccess = "true"))	UPaperSpriteComponent* GroundSprite;
	UPaperSpriteComponent* GroundSpriteComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Collision", meta = (AllowPrivateAccess = "true"))
	UBoxComponent* CollisionBox;



};
