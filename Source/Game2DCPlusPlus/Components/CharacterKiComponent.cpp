// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterKiComponent.h"
#include "../Characters/MyCharacter.h"       
#include "../Widgets/KiBarWidget.h"       
#include "../Visuals/KiAura.h"            
#include "Kismet/GameplayStatics.h"
#include "Blueprint/UserWidget.h" 


// Sets default values for this component's properties
UCharacterKiComponent::UCharacterKiComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	bIsKiCharging = false;
}


// Called when the game starts
void UCharacterKiComponent::BeginPlay()
{
	Super::BeginPlay();
	OwnerCharacter = Cast<AActor>(GetOwner());

	if (!OwnerCharacter)
	{
		UE_LOG(LogTemp, Error, TEXT("UCharacterKiComponent : Impossible de récupérer le OwnerCharacter"));
		return;
	}

	
}

void UCharacterKiComponent::InitializeKiSystem()
{
	// Initialisation de la barre de Ki
	if (KiBarWidgetClass)
	{
		APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);
		if (PC && PC->IsLocalPlayerController())
		{
			KiBarWidget = CreateWidget<UKiBarWidget>(PC, KiBarWidgetClass);
		}
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
	if (Value > 0.0f && !bIsKiCharging && StatsComponent->CurrentKi < StatsComponent->MaxKi)
	{
		UE_LOG(LogTemp, Warning, TEXT("UCharacterKiComponent::LoadKi ---> Value : %f"), Value);
		StartChargingKi();
		bIsKiCharging = true;
	}

	if (bIsKiCharging && Value > 0.0f)
	{
		StatsComponent->CurrentKi = FMath::Clamp(StatsComponent->CurrentKi + (StatsComponent->KiLoadSpeed * Value), 0.0f, StatsComponent->MaxKi);
		UpdateKiBar();
	}

	/*
	if ((Value == 0.0f || StatsComponent->CurrentKi >= StatsComponent->MaxKi) && bIsKiCharging)
	{
		StopChargingKi();
		bIsKiCharging = false;
	}
	*/
}

void UCharacterKiComponent::LoadKiAI(float DeltaTime)
{
	if (!StatsComponent)
	{
		UE_LOG(LogTemp, Error, TEXT("LoadKiAI: StatsComponent NULL"));
		return;
	}

	if (!bIsKiCharging)
	{
		UE_LOG(LogTemp, Error, TEXT("LoadKiAI: bIsCharging : false"));
		StartChargingKi();
	}

	if (bIsKiCharging)
	{
		StatsComponent->CurrentKi += StatsComponent->KiLoadSpeed * DeltaTime;
		StatsComponent->CurrentKi = FMath::Clamp(
			StatsComponent->CurrentKi,
			0.0f,
			StatsComponent->MaxKi
		);
		UpdateKiBar();

		if (StatsComponent->CurrentKi >= StatsComponent->MaxKi)
		{
			UE_LOG(LogTemp, Warning, TEXT("LoadKiAI: Ki à fond"));
			StopChargingKi();
		}
	}
}



void UCharacterKiComponent::StartChargingKi()
{
	if (KiAura && !bIsKiCharging)
	{
		KiAura->StartAura();
		bIsKiCharging = true;
		UE_LOG(LogTemp, Warning, TEXT("UCharacterKiComponent::StartChargingKi() --> Chargement du ki en cours"));
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("UCharacterKiComponent::StartChargingKi() --> Pas d'aura de ki ou est déjà true"));
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
 		KiBarWidget->UpdateKiBar(StatsComponent->CurrentKi, StatsComponent->MaxKi);
	}
}

void UCharacterKiComponent::InitializeStatsComponent(UStatsComponent* InStats)
{
	StatsComponent = InStats;

	if (!InStats)
	{
		UE_LOG(LogTemp, Error, TEXT("KiComponent::Initialize - Stats NULL"));
		return;
	}
}


bool UCharacterKiComponent::TryConsumeKi(float KiCost)
{

	if (!StatsComponent)
	{
		UE_LOG(LogTemp, Error, TEXT("UCharacterKiComponent::TryConsumeKi - StatsComponent NULL"));
		return false;
	}

	if (StatsComponent->CurrentKi < KiCost)
	{
		UE_LOG(LogTemp, Warning, TEXT("UCharacterKiComponent::TryConsumeKi - Pas assez de ki pour cette attaque : CurrentKi : %f KiCost : %f"), StatsComponent->CurrentKi, KiCost);
		return false;
	}

	StatsComponent->CurrentKi -= KiCost;
	UpdateKiBar();

	return true;
}