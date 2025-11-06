// Fill out your copyright notice in the Description page of Project Settings.


#include "StandCombatComponent.h"
#include "../Abilities/MyStandBase.h"

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
		UE_LOG(LogTemp, Warning, TEXT("AMyStandBase::AMyStandBase() --> DTStand OK"));
		StandAttackDataTable = StandAttackDT.Object;
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("AMyStandBase::AMyStandBase() --> DTStand KO"));
	}
}


// Called when the game starts
void UStandCombatComponent::BeginPlay()
{
	Super::BeginPlay();
	StandOwner = Cast<AMyStandBase>(GetOwner());
	if (!StandOwner || StandAttackDataTable)
	{
		UE_LOG(LogTemp, Error, TEXT("UStandCombatComponent::BeginPlay --> StandOwner ou DataTable NULL"));
		return;
	}
	StandOwner->OwnerCharacter->GetName();
	
}


// Called every frame
void UStandCombatComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

