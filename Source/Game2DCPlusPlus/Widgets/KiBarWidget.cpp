// Fill out your copyright notice in the Description page of Project Settings.


#include "KiBarWidget.h"
#include "Components/ProgressBar.h"

void UKiBarWidget::NativeConstruct()
{
	Super::NativeConstruct();
}

void UKiBarWidget::UpdateKiBar(float CurentKi, float MaxKi)
{
	if (KiProgressBar)
	{
		float KiPercentage = FMath::Clamp(CurentKi / MaxKi, 0.0f, 1.0f);
		KiProgressBar->SetPercent(KiPercentage);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("La barre de Ki n'existe pas"));
	}
}
