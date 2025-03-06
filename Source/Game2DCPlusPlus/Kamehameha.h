// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyKiProjectileBase.h"
#include "CharacterKiComponent.h"
#include "PaperFlipbookComponent.h"
#include "Components/CapsuleComponent.h"
class UCharacterAbilitiesComponent;
class AMyCharacter;
#include "Kamehameha.generated.h"

/**
 * 
 */
UCLASS()
class GAME2DCPLUSPLUS_API AKamehameha : public AMyKiProjectileBase
{
	GENERATED_BODY()


public:
	AKamehameha();

	virtual void Tick(float DeltaTime) override;
	virtual void Initialize(FVector NewDirection) override;
protected:


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Animation")
	UPaperFlipbookComponent* FlipbookComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Collision")
	UCapsuleComponent* CapsuleCollisionComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animations", meta = (AllowPrivateAccess = "true"))
	UPaperFlipbook* KamehamehaFlipbook;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Kamehameha")
	float ExpansionSpeed;

	UPROPERTY(EditAnywhere, Category = "Character")
	TSubclassOf<AMyCharacter> CharacterClass;

	UCharacterAbilitiesComponent* AbilitiesComponent;

	FVector ExpensionDirection;
	float maxKiUser;

	UCharacterKiComponent* KiComponent;
};
