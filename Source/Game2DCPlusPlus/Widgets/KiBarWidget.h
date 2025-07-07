// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/ProgressBar.h"
#include "KiBarWidget.generated.h"

/**
 * 
 */
UCLASS()
class GAME2DCPLUSPLUS_API UKiBarWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "KI")
	void UpdateKiBar(float CurentKi, float MaxKi);

protected:
	UPROPERTY(meta = (BindWidget))
	UProgressBar* KiProgressBar;

	virtual void NativeConstruct() override;
	
};
