// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyCharacter.h"
#include "PaperFlipbook.h"
#include "JordanCharacter.generated.h"
class UCharacterCombatComponent;

/**
 * 
 */
UCLASS()
class GAME2DCPLUSPLUS_API AJordanCharacter : public AMyCharacter
{
	GENERATED_BODY()

public:
	AJordanCharacter();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	// Override des méthodes spécifiques si nécessaire
	void LightAttack();  // Si Jordan a une attaque spéciale

private:
	// Propriétés spécifiques à Jordan
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animations", meta = (AllowPrivateAccess = "true"))
	UPaperFlipbook* SpecialJordanAttackFlipbook;  // Animation d'attaque spécifique à Jordan
};
	