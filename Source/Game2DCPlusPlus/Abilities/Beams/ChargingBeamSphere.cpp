// Fill out your copyright notice in the Description page of Project Settings.


#include "ChargingBeamSphere.h"

// Sets default values
AChargingBeamSphere::AChargingBeamSphere()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	FlipbookComponent = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("FlipbookComponent"));
	FlipbookComponent->SetupAttachment(RootComponent);
	FlipbookComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);

}

// Called when the game starts or when spawned
void AChargingBeamSphere::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("AChargingBeamSphere::BeginPlay()"));
}

// Called every frame
void AChargingBeamSphere::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AChargingBeamSphere::SetChargingBeamSphereFlipook(UPaperFlipbook* ChargingSphereFlipbook)
{
	UE_LOG(LogTemp, Warning, TEXT("AChargingBeamSphere::SetChargingBeamSphereFlipook(UPaperFlipbook* ChargingSphereFlipbook)"));
	if (!ChargingSphereFlipbook)
	{
		UE_LOG(LogTemp, Error, TEXT("ChargingSphereFlipbook est NULL !"));
		return;
	}
	FlipbookComponent->SetFlipbook(ChargingSphereFlipbook);
}


