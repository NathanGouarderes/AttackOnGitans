/*
// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../MyWeaponBase.h"
#include "FistCombatRow.h"
#include "MyFistBase.generated.h"


UCLASS()
class GAME2DCPLUSPLUS_API AMyFistBase : public AMyWeaponBase
{
	GENERATED_BODY()



public:
	AMyFistBase();

	virtual void BeginPlay() override;

	FFistCombatRow GetPunchRow(FName PunchName);

	UFUNCTION(BlueprintCallable, Category = "Fist Combat")
	UPaperFlipbook* GetPunchAnimation(FName PunchName);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fist Combat")
	UDataTable* FistData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fist Combat")
	FName FightStyle;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Fist Combat")
	FFistCombatRow CurrentPunchData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fist Combat")
	UPaperFlipbookComponent* FistFlipbookComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fist Combat")
	UBoxComponent* FistHitbox;



};

*/