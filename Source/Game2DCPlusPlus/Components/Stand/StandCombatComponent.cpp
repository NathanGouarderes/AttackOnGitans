// Fill out your copyright notice in the Description page of Project Settings.


#include "StandCombatComponent.h"
#include "StandComponent.h"
#include "../Abilities/MyStandBase.h"
#include "../Data/Interfaces/FighterInterface.h"

// Sets default values for this component's properties
UStandCombatComponent::UStandCombatComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UDataTable> StandAttackDT(
		TEXT("/Game/DataTables/DT_StandAttackData.DT_StandAttackData")
	);
	if (StandAttackDT.Succeeded())
	{
		UE_LOG(LogTemp, Warning, TEXT("UStandCombatComponent::UStandCombatComponent() --> DTStand OK"));
		StandAttackDataTable = StandAttackDT.Object;
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("UStandCombatComponent::UStandCombatComponent() --> DTStand KO"));
	}
}


// Called when the game starts
void UStandCombatComponent::BeginPlay()
{
	Super::BeginPlay();
	StandOwner = Cast<AMyStandBase>(GetOwner());
	if (!StandOwner || !StandAttackDataTable)
	{
		UE_LOG(LogTemp, Error, TEXT("UStandCombatComponent::BeginPlay --> StandOwner ou DataTable NULL"));
		return;
	}

	
	

}


// Called every frame
void UStandCombatComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	//UE_LOG(LogTemp, Warning, TEXT("UStandCombatComponent::TickComponent --> Stand du manieur %s : %s"), *HandlerData.CharacterName.ToString(), *HandlerData.StandName.ToString());
}

void UStandCombatComponent::InitializeAfterOwnerSet()
{
	StandOwner = Cast<AMyStandBase>(GetOwner());
	if (!StandOwner)
	{
		UE_LOG(LogTemp, Error, TEXT("UStandCombatComponent::InitializeAfterOwnerSet() --> StandOwner NULL"));
		return;
	}

	StandHandler = StandOwner->GetOwnerCharacter();
	if (!StandHandler)
	{
		UE_LOG(LogTemp, Error, TEXT("UStandCombatComponent::InitializeAfterOwnerSet() --> Handler NULL"));
		return;
	}

	if (StandHandler->GetClass()->ImplementsInterface(UFighterInterface::StaticClass()))
	{
		HandlerData = IFighterInterface::Execute_GetCharacterData(StandHandler);
		HandlerStandComponent = IFighterInterface::Execute_GetStandComponent(StandHandler);
		
		if (HandlerData.StandName.IsNone())
		{
			UE_LOG(LogTemp, Warning, TEXT("UStandCombatComponent::InitializeAfterOwnerSet() --> Le manieur n'a pas de stand défini"));
			return;
		}
		
		UE_LOG(LogTemp, Warning, TEXT("UStandCombatComponent::InitializeAfterOwnerSet() --> Chargement des attaques pour le stand : %s"), *HandlerData.StandName.ToString());


		for (const FName& RowName : StandAttackDataTable->GetRowNames())
		{
			FStandAttackData* AttackRow = StandAttackDataTable->FindRow<FStandAttackData>(RowName, TEXT("StandAttackLookup"));
			if (!AttackRow) continue;

			FString RowString = RowName.ToString();
			if (RowString.Contains(HandlerData.StandName.ToString(), ESearchCase::IgnoreCase))
			{
				UE_LOG(LogTemp, Warning, TEXT("UStandCombatComponent::InitializeAfterOwnerSet() Attaque trouvee : %s (Degats: %.1f)"), *RowString, AttackRow->Damage);
				CachedStandAttacks.Add(*AttackRow);
			}
		}

		UE_LOG(LogTemp, Warning, TEXT("UStandCombatComponent::InitializeAfterOwnerSet() %d attaques chargees pour le stand %s"),
			CachedStandAttacks.Num(),
			*HandlerData.StandName.ToString());
	}

	UE_LOG(LogTemp, Warning, TEXT("UStandCombatComponent::InitializeAfterOwnerSet() --> StandHandler : %s"), HandlerStandComponent->bIsStandOut ? TEXT("True") : TEXT("False"));

}



