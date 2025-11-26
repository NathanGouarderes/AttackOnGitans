// Fill out your copyright notice in the Description page of Project Settings.


#include "StandComponent.h"

// Sets default values for this component's properties
UStandComponent::UStandComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UStandComponent::BeginPlay()
{
	Super::BeginPlay();

	OwnerCharacter = Cast<AActor>(GetOwner());

	if (OwnerCharacter)
	{
		UE_LOG(LogTemp, Warning, TEXT("UStandComponent::BeginPlay() --> %s"), *OwnerCharacter->GetName());
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("UStandComponent::BeginPlay() --> OwnerCharacter NULL"));
	}

	
}


// Called every frame
void UStandComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	
}

void UStandComponent::SummonStand()
{
	if (bIsStandOut)
	{
		UE_LOG(LogTemp, Warning, TEXT("SummonStand::SummonStand() --> Le stand est deja sorti. Il est donc rappelle"));
		UnsumonStand();		
	}
	else
	{

		FActorSpawnParameters Params;
		Params.Owner = OwnerCharacter;
		FActorSpawnParameters SpawnParams;
		SpawnParams.Instigator = OwnerCharacter->GetInstigator(); 
		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		FVector SpawnLocation = OwnerCharacter->GetActorLocation() + FVector(50.f, 0.f, 50.f);
		FRotator SpawnRotation = OwnerCharacter->GetActorRotation();

		Params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		bIsStandOut = true;
		Stand = GetWorld()->SpawnActor<AMyStandBase>(StandClass, SpawnLocation, SpawnRotation, SpawnParams);

		if (Stand)
		{
			Stand->InitializeStand(OwnerCharacter);
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("SummonStand::SummonStand() --> Stand NULL"));
		}
	}
}

void UStandComponent::UnsumonStand()
{

	if (!bIsStandOut)
	{
		UE_LOG(LogTemp, Warning, TEXT("UnsumonStand() --> Stand déjà rappele."));
		return;
	}

	bIsStandComingBack = true;
	UE_LOG(LogTemp, Warning, TEXT("UnsumonStand() --> Stand rappelé, retour en cours"));
}

