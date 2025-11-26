// Fill out your copyright notice in the Description page of Project Settings.


#include "CreatureBase.h"
#include "Components/SceneComponent.h"

// Sets default values
ACreatureBase::ACreatureBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootSegment = CreateDefaultSubobject<UCreatureSegmentComponent>(TEXT("RootSegment"));
	RootSegment->InitializeSegment(ECreatureSegmentType::Core, FVector(0, 0, 0));
	SetRootComponent(RootSegment);

	Segments.Add(RootSegment);
}

// Called when the game starts or when spawned
void ACreatureBase::BeginPlay()
{
	Super::BeginPlay();
	GenerateCreature(2);
}

// Called every frame
void ACreatureBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ACreatureBase::GenerateCreature(int32 NumSegments)
{
	if (!GetWorld())
	{
		UE_LOG(LogTemp, Warning, TEXT("ACreatureBase::GenerateCreature() --> World NULL"));
		return;
	}

	if (Segments.Num() == NULL)
	{
		UE_LOG(LogTemp, Error, TEXT("ACreatureBase::GenerateCreature() --> La creature n'a pas de corps"));
		//return;
	}


	for (int32 i = 0; i < NumSegments; i++)
	{
		ECreatureSegmentType SegmentType;
		if (i == 0 && Segments[0]->SegmentType != ECreatureSegmentType::Core)
		{
			UE_LOG(LogTemp, Warning, TEXT("ACreatureBase::GenerateCreature() --> La creature n'a pas de corps"));
			UE_LOG(LogTemp, Warning, TEXT("ACreatureBase::GenerateCreature() --> Creation du corps"));
			SegmentType = ECreatureSegmentType::Core;
		}
		else
		{
			if (i == 1 && Segments[1]->SegmentType != ECreatureSegmentType::Head)
			{
				UE_LOG(LogTemp, Warning, TEXT("ACreatureBase::GenerateCreature() --> La creature n'a pas de tete"));
				UE_LOG(LogTemp, Warning, TEXT("ACreatureBase::GenerateCreature() --> Creation de la tete"));
				SegmentType = ECreatureSegmentType::Head;
			}
		}
		
		UE_LOG(LogTemp, Warning, TEXT("ACreatureBase::GenerateCreature() --> Génération du segment %d (Type: %d)"), i, (int32)SegmentType);
		UCreatureSegmentComponent* NewSegment = NewObject<UCreatureSegmentComponent>(this);

		NewSegment->AttachToComponent(
			Segments[FMath::RandRange(0, Segments.Num() - 1)],
			FAttachmentTransformRules::KeepRelativeTransform
		);

		// Un seul RegisterComponent
		NewSegment->RegisterComponent();
		FVector Offset(0, 0, i * 50.0f); //Décalage vertical pour chaque segment
		NewSegment->InitializeSegment(SegmentType, Offset);

		Segments.Add(NewSegment);
	}
}