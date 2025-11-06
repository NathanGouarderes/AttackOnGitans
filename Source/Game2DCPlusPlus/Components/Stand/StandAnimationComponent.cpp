// Fill out your copyright notice in the Description page of Project Settings.


#include "StandAnimationComponent.h"
#include "../Abilities/MyStandBase.h"


// Sets default values for this component's properties
UStandAnimationComponent::UStandAnimationComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UDataTable> StandDT(
		TEXT("/Game/DataTables/DT_StandData.DT_StandData")
	);
	if (StandDT.Succeeded())
	{
		UE_LOG(LogTemp, Warning, TEXT("AMyStandBase::AMyStandBase() --> DTStand OK"));
		StandDataTable = StandDT.Object;
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("AMyStandBase::AMyStandBase() --> DTStand KO"));
	}
}


// Called when the game starts
void UStandAnimationComponent::BeginPlay()
{
	Super::BeginPlay();

	StandOwner = Cast<AMyStandBase>(GetOwner());
	if (StandOwner)
	{
		UE_LOG(LogTemp, Warning, TEXT("UStandAnimationComponent::BeginPlay() --> StandOwner : %s"), *StandOwner->GetName());
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("UStandAnimationComponent::BeginPlay() --> StandOwner NULL"));
	}

	FlipbookComponent = StandOwner->FindComponentByClass<UPaperFlipbookComponent>();

	if (!FlipbookComponent)
	{
		UE_LOG(LogTemp, Error, TEXT("AMyStandBase::BeginPlay() --> FlipbookComponent NULL"));
	}

	const FStandData* Row = StandDataTable->FindRow<FStandData>(FName("StandBase"), TEXT("AMyStandBase::BeginPlay() --> StandBase Row"));
	if (Row)
	{
		StandData = *Row;
		UE_LOG(LogTemp, Warning, TEXT("AMyStandBase::BeginPlay() --> Stand Données : \nAttaque : %f\nDistance de suivi : %f"), StandData.Base.Damage, StandData.FollowingDistance);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("AMyStandBase::BeginPlay() --> Row NULL"));
	}

	
	
}


// Called every frame
void UStandAnimationComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	UpdateStandAnimation();
}

void UStandAnimationComponent::UpdateStandAnimation()
{
	if (FlipbookComponent)
	{
		PlayStandIdleAnimation(StandData.StandIdleAnimation.LoadSynchronous());
	}
}

void UStandAnimationComponent::PlayStandIdleAnimation(UPaperFlipbook* Flipbook)
{
	if (FlipbookComponent && Flipbook)
	{
		FlipbookComponent->SetFlipbook(Flipbook);
	}
}

