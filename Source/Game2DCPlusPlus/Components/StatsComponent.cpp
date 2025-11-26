// Fill out your copyright notice in the Description page of Project Settings.


#include "StatsComponent.h"
#include "../FighterCharacters.h"


// Sets default values for this component's properties
UStatsComponent::UStatsComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UDataTable> CharacterStat(TEXT("/Game/DataTables/DT_Character_Stats.DT_Character_Stats"));
	if (CharacterStat.Succeeded())
	{
		CharacterStatsDataTable = CharacterStat.Object;
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("UStatsComponent::UStatsComponent() --> CharacterStat KO"));
	}	

	// ...
}


// Called when the game starts
void UStatsComponent::BeginPlay()
{
	FighterCharacter = Cast<AFighterCharacters>(GetOwner());
	FName CharacterName = FighterCharacter->CharacterName;
	const FString Context(TEXT("StatsComponent::BeginPlay() --> CharacterStats Initialisation"));
	if (CharacterStatsDataTable)
	{
		const FCharacterStats* Row = CharacterStatsDataTable->FindRow<FCharacterStats>(
			FName(CharacterName),  // ou un nom dynamique plus tard
			Context
		);

		if (Row)
		{
			CharacterStats = *Row;
			CurrentHealth = CharacterStats.MaxHealth;
		}
	}

	
}


void UStatsComponent::ApplyDamages(int32 Damages)
{
	if (IsDead())
	{
		UE_LOG(LogTemp, Warning, TEXT("Ce personnage est DEJA mort."));
		Die();
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

	if (FighterCharacter)
	{
		FighterCharacter->Destroy();
	}
	// Tu pourras broadcast ici un delegate, faire un ragdoll ou désactiver l’input
}

void UStatsComponent::Heal(int32 HealAmount)
{
	CurrentHealth = FMath::Clamp(CurrentHealth + HealAmount, 0, CharacterStats.MaxHealth);
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

