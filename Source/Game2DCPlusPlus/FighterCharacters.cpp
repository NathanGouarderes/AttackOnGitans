// Fill out your copyright notice in the Description page of Project Settings.


#include "FighterCharacters.h"

// Sets default values
AFighterCharacters::AFighterCharacters()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CombatComponent = CreateDefaultSubobject<UCharacterCombatComponent>(TEXT("CombatComponent"));
	KiComponent = CreateDefaultSubobject<UCharacterKiComponent>(TEXT("KiComponent"));
	AbilitiesComponent = CreateDefaultSubobject<UCharacterAbilitiesComponent>(TEXT("AbilitiesComponent"));
	AnimationComponent = CreateDefaultSubobject<UCharacterAnimationComponent>(TEXT("AnimationComponent"));
	StatsComponent = CreateDefaultSubobject<UStatsComponent>(TEXT("StatsComponent"));
	StateComponent = CreateDefaultSubobject<UCharacterStateComponent>(TEXT("StateComponent"));
	StandComponent = CreateDefaultSubobject<UStandComponent>(TEXT("StandComponent"));
	LifeCycleComponent = CreateDefaultSubobject<UFighterLifeCycleComponent>(TEXT("LifeCycleComponent"));

}

// Called when the game starts or when spawned
void AFighterCharacters::BeginPlay()
{
	Super::BeginPlay();

	if (LifeCycleComponent)
	{
		LifeCycleComponent->StartLifeCycle();
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("AFighterCharacters::BeginPlay --> ❌ Aucun LifecycleComponent sur %s"), *GetName());
	}

	if (!GetCapsuleComponent())
	{
		UE_LOG(LogTemp, Error, TEXT("AFighterCharacters::BeginPlay() CapsuleComponent est toujours NULL !"));
	}
	
}

// Called every frame
void AFighterCharacters::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void AFighterCharacters::GetDatasFromCharacterDataTable()
{
	static ConstructorHelpers::FObjectFinder<UDataTable> CharacterDT(TEXT("/Game/DataTables/DT_CharacterData.DT_CharacterData"));

	if (CharacterDT.Succeeded())
	{
		UE_LOG(LogTemp, Warning, TEXT("AFighterCharacters::GetDatasFromCharacterDataTable() --> CharacterDT OK"));
		CharacterDataTable = CharacterDT.Object;
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("AFighterCharacters::GetDatasFromCharacterDataTable() --> CharacterDT KO"));
	}
}

void AFighterCharacters::SetDatasFromCharacterDataTable(FName Name)
{
	CharacterName = Name;
	const FString Context(TEXT("AFighterCharacters::SetDatasFromCharacterDataTable --> CharacterData Initialisation"));
	if (CharacterDataTable)
	{
		const FCharacterData* Row = CharacterDataTable->FindRow<FCharacterData>(
			FName(Name),
			Context
		);

		if (Row)
		{
			CharacterData = *Row;
			UE_LOG(LogTemp, Warning, TEXT("SetDatasFromCharacterDataTable --> CharacterData Chargé : %s, Stand = %s"),
				*CharacterData.CharacterName.ToString(),
				*CharacterData.StandName.ToString());
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("AFighterCharacters::SetDatasFromCharacterDataTable --> Impossible de trouver la ligne du perso dans la DataTable."));
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("AFighterCharacters::SetDatasFromCharacterDataTable --> CharacterDataTable non assignée !"));
	}
}

FName AFighterCharacters::GetCharacterName()
{
	if (!CharacterName.IsNone())
	{
		return CharacterName;
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT(" AFighterCharacters::GetCharacterName() --> CharacterName NULL"));
		return "NULL";
	}
}
