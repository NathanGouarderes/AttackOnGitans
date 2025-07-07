// Fill out your copyright notice in the Description page of Project Settings.


#include "StatsComponent.h"

// Sets default values for this component's properties
UStatsComponent::UStatsComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	MaxHealth = 100;

	// ...
}


// Called when the game starts
void UStatsComponent::BeginPlay()
{
	// ...
	
}


void UStatsComponent::ApplyDamages(int32 Damages)
{
	if (IsDead())
	{
		UE_LOG(LogTemp, Warning, TEXT("Ce personnage est DEJA mort."));
		return;
	}

	CurrentHealth -= Damages;
	UE_LOG(LogTemp, Warning, TEXT("❤️ PV restants : %d"), CurrentHealth);

	if (CurrentHealth <= 0)
	{
		Die();
	}
}




void UStatsComponent::Die()
{
	UE_LOG(LogTemp, Warning, TEXT("Ce personnage est mort."));

	AActor* Owner = GetOwner();

	if (Owner)
	{
		Owner->Destroy();
	}
	// Tu pourras broadcast ici un delegate, faire un ragdoll ou désactiver l’input
}

void UStatsComponent::Heal(int32 HealAmount)
{
	if (CurrentHealth + HealAmount < MaxHealth)
	{
		CurrentHealth += HealAmount;
	}
	else
	{
		CurrentHealth = MaxHealth;
	}
}

bool UStatsComponent::IsDead() const
{
	return CurrentHealth <= 0;
}


// Called every frame
void UStatsComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

