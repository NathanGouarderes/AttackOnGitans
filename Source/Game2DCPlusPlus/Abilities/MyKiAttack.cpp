// Fill out your copyright notice in the Description page of Project Settings.


#include "MyKiAttack.h"

// Sets default values
AMyKiAttack::AMyKiAttack()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
    KiCost = 10;
    KiAttackType = EKiAttackType::Projectile;

}

// Called when the game starts or when spawned
void AMyKiAttack::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyKiAttack::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    if (KiAttackType == EKiAttackType::Beam)
    {
        float KiUsed = KiCost * DeltaTime;
        KiComponent->TryConsumeKi(KiUsed);
    }

}

void AMyKiAttack::ConsumeKi()
{
    if (KiComponent)
    {
        //UE_LOG(LogTemp, Warning, TEXT(" AMyKiAttack::ConsumeKi() : Le Ki consommé est de %f."), KiCost);
        KiComponent->TryConsumeKi(KiCost);
    }
}

void AMyKiAttack::Initialize(AActor* InOwner, FVector InDirection)
{
    OwnerCharacter = InOwner;
    FireDirection = InDirection;


    if (IsValid(OwnerCharacter))
    {
        KiComponent = OwnerCharacter->FindComponentByClass<UCharacterKiComponent>();
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("AMyKiAttack::Initialize(AActor* InOwner, FVector InDirection) : OwnerCharacter n'est pas valide"), *FireDirection.ToString());

    }

    if (KiAttackType == EKiAttackType::Projectile)
    {
        UE_LOG(LogTemp, Warning, TEXT(" AMyKiAttack::Initialize(AActor* InOwner, FVector InDirection) : L'attaque est de type projectile."));
        ConsumeKi();
    }

    if (KiAttackType == EKiAttackType::Beam)
    {
        UE_LOG(LogTemp, Warning, TEXT("AMyKiAttack::Initialize : Type = Beam"));
    }

    // Exemple : log de la direction
    UE_LOG(LogTemp, Warning, TEXT("Initialize called with direction: %s"), *FireDirection.ToString());
}