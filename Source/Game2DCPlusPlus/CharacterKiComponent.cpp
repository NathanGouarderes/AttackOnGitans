// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterKiComponent.h"
#include "MyCharacter.h"       
#include "KiBarWidget.h"       
#include "KiAura.h"            
#include "Kismet/GameplayStatics.h"
#include "Blueprint/UserWidget.h" 


// Sets default values for this component's properties
UCharacterKiComponent::UCharacterKiComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	MaxKi = 500.0f;
	CurrentKi = 0.0f;
	KiLoadSpeed = 1.5f;
	bIsKiCharging = false;
}


// Called when the game starts
void UCharacterKiComponent::BeginPlay()
{
	Super::BeginPlay();
	OwnerCharacter = Cast<AMyCharacter>(GetOwner());

	if (!OwnerCharacter)
	{
		UE_LOG(LogTemp, Error, TEXT("UCharacterKiComponent : Impossible de récupérer le OwnerCharacter"));
		return;
	}

	InitializeKiSystem();
	
}

void UCharacterKiComponent::InitializeKiSystem()
{
	// Initialisation de la barre de Ki
	if (KiBarWidgetClass)
	{
		KiBarWidget = CreateWidget<UKiBarWidget>(GetWorld(), KiBarWidgetClass);
		if (KiBarWidget)
		{
			KiBarWidget->AddToViewport();
			UpdateKiBar();
			UE_LOG(LogTemp, Warning, TEXT("KiBarWidget ajouté au viewport"));
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("KiBarWidgetClass non défini dans UCharacterKiComponent"));
	}

	// Création de l'aura de Ki
	if (KiAuraClass)
	{
		KiAura = GetWorld()->SpawnActor<AKiAura>(KiAuraClass);
		if (KiAura)
		{
			KiAura->AttachToComponent(OwnerCharacter->GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);
			UE_LOG(LogTemp, Warning, TEXT("KiAura créée et attachée au personnage"));
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("Échec de création de l'aura de Ki"));
		}
	}
}

void UCharacterKiComponent::LoadKi(float Value)
{
	if (Value > 0.0f && !bIsKiCharging && CurrentKi < MaxKi)
	{
		StartChargingKi();
		bIsKiCharging = true;
	}

	if (bIsKiCharging && Value > 0.0f)
	{
		CurrentKi = FMath::Clamp(CurrentKi + (KiLoadSpeed * Value), 0.0f, MaxKi);
		UpdateKiBar();
	}

	if ((Value == 0.0f || CurrentKi >= MaxKi) && bIsKiCharging)
	{
		StopChargingKi();
		bIsKiCharging = false;
	}
}

void UCharacterKiComponent::StartChargingKi()
{
	if (KiAura && !bIsKiCharging)
	{
		KiAura->StartAura();
		bIsKiCharging = true;
		UE_LOG(LogTemp, Warning, TEXT("Chargement du ki en cours"));
	}
}

void UCharacterKiComponent::StopChargingKi()
{
	bIsKiCharging = false;
	if (KiAura)
	{
		KiAura->StopAura();
		UE_LOG(LogTemp, Warning, TEXT("Chargement du Ki arrêté"));
	}
}

void UCharacterKiComponent::UpdateKiBar()
{
	if (KiBarWidget)
	{
		KiBarWidget->UpdateKiBar(CurrentKi, MaxKi);
	}
}
