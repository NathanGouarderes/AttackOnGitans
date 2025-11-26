// Fill out your copyright notice in the Description page of Project Settings.


#include "CreatureSegmentComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/StaticMesh.h"
#include "UObject/ConstructorHelpers.h"

// Sets default values for this component's properties
UCreatureSegmentComponent::UCreatureSegmentComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshFinder(TEXT("/Engine/BasicShapes/Cube.Cube"));
	if (MeshFinder.Succeeded())
	{
		CubeMesh = MeshFinder.Object;
	}
}


// Called when the game starts
void UCreatureSegmentComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UCreatureSegmentComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UCreatureSegmentComponent::OnRegister()
{
	Super::OnRegister();
	if (!MeshComponent)
	{
		MeshComponent = NewObject<UStaticMeshComponent>(this, TEXT("SegmentMesh"));
		MeshComponent->SetupAttachment(this);
		MeshComponent->RegisterComponent();
		if (CubeMesh) // Vérifie que CubeMesh est chargé
		{
			MeshComponent->SetStaticMesh(CubeMesh);
			MeshComponent->SetRelativeScale3D(FVector(0.2f));
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("UCreatureSegmentComponent::OnRegister() --> CubeMesh non chargé !"));
		}
	}
}

void UCreatureSegmentComponent::InitializeSegment(ECreatureSegmentType Type, FVector SegmentRelativePosition)
{
	SegmentType = Type;
	SetRelativeLocation(SegmentRelativePosition);
}



void UCreatureSegmentComponent::MutateSegment()
{
	if (!bCanMutate)
	{
		return;
	}

	Length += FMath::RandRange(-10.0f, 10.0f);
	Thickness += FMath::RandRange(-2.0f, 2.0f);

	MeshComponent->SetRelativeScale3D(FVector(Thickness / 10.f, Thickness / 10.f, Length / 50.f));
}