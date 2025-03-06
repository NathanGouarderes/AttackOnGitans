// Fill out your copyright notice in the Description page of Project Settings.
#include "MyStandBase.h"
#include "Components/CapsuleComponent.h"
#include "MyCharacter.h" 
// Sets default values
AMyStandBase::AMyStandBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StandFlipbook = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("StandFlipbook"));
	StandFlipbook->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void AMyStandBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyStandBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (CharacterUser)
	{
		UE_LOG(LogTemp, Warning, TEXT("FollowDistance : %f"), FollowDistance);
		FVector CharacterLocation = CharacterUser->GetActorLocation();
		FVector newLocation = CharacterLocation + FVector(-FollowDistance, 50.0f, 20.0f);
		SetActorLocation(FMath::VInterpTo(GetActorLocation(), newLocation, DeltaTime, 5.0f));
		UE_LOG(LogTemp, Warning, TEXT("Stand is following the user at position: %s"), *newLocation.ToString());
	}

}

void AMyStandBase::InitializeStand(AMyCharacter* CharacterOwner)
{
	CharacterUser = CharacterOwner;
}

void AMyStandBase::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep,
	const FHitResult& SweepResult)
{

}

void AMyStandBase::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComponent, FVector NormalImpulse,
	const FHitResult& Hit)
{

}

