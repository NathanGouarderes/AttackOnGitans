// Fill out your copyright notice in the Description page of Project Settings.
#include "MyKiProjectileBase.h"
#include "MyCharacter.h"

AMyKiProjectileBase::AMyKiProjectileBase()
{
	KiCost = 50.0f;
}

void AMyKiProjectileBase::Initialize(FVector FireDirection)
{
	// Vérifie si le Ki est suffisant
	if (ConsumeKi())
	{
		Super::Initialize(FireDirection);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Pas assez de Ki pour lancer le projectile !"));
		Destroy();
	}
}

bool AMyKiProjectileBase::ConsumeKi()
{
	AMyCharacter* OwnerCharacter = Cast<AMyCharacter>(GetOwner());

	if (OwnerCharacter)
	{
		KiComponent = OwnerCharacter->FindComponentByClass<UCharacterKiComponent>();
		if (KiComponent && KiComponent->CurrentKi >= KiCost)
		{
			KiComponent->CurrentKi -= KiCost;
			KiComponent->UpdateKiBar();
			UE_LOG(LogTemp, Warning, TEXT("Ki consommé: %f"), KiComponent->CurrentKi);
			return true;
		}
	}

	return false;
}