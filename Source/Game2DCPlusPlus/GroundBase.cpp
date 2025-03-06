// Fill out your copyright notice in the Description page of Project Settings.


#include "GroundBase.h"

// Sets default values
AGroundBase::AGroundBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionBox"));
    if (CollisionBox)
    {
        RootComponent = CollisionBox;

        // Set collision properties to allow characters to walk on it but not pass through
        CollisionBox->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
        CollisionBox->SetCollisionObjectType(ECC_WorldStatic);
        CollisionBox->SetCollisionResponseToAllChannels(ECR_Block);
        CollisionBox->SetCollisionResponseToChannel(ECC_Pawn, ECR_Block);
    }

    // Initialize the Ground Sprite and attach it to the Collision Box
    GroundSprite = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("GroundSprite"));
    if (GroundSprite)
    {
        GroundSprite->SetupAttachment(RootComponent);
    }

}

// Called when the game starts or when spawned
void AGroundBase::BeginPlay()
{
	Super::BeginPlay();
    FVector CurrentLocation = GetActorLocation();
    CurrentLocation.Y = 0.0f;
    SetActorLocation(CurrentLocation);
}

// Called every frame
void AGroundBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGroundBase::SetSpirte(UPaperSprite* NewSprite)
{
	if (GroundSpriteComponent && NewSprite)
	{
		GroundSpriteComponent->SetSprite(NewSprite);
	}
}

