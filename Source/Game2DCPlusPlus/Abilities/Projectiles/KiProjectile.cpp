// Fill out your copyright notice in the Description page of Project Settings.


#include "KiProjectile.h"


AKiProjectile::AKiProjectile()
{
    PrimaryActorTick.bCanEverTick = true;

    KiAttackType = EKiAttackType::Projectile;

    HitboxComponent = CreateDefaultSubobject<UHitboxComponent>(TEXT("HitboxComponent"));
    RootComponent = HitboxComponent;


    HitboxComponent->BodyInstance.bUseCCD = true; //Faire plus de recherches sur ce point

    FlipbookComponent = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("FlipbookComponent"));
    FlipbookComponent->SetupAttachment(HitboxComponent);
}

void AKiProjectile::BeginPlay()
{
    Super::BeginPlay();

    UE_LOG(LogTemp, Warning, TEXT("AKiProjectile::BeginPlay()"));
    if (HitboxComponent)
    {
        HitboxComponent->OnCustomHit.AddDynamic(this, &AKiProjectile::HandleHit);
        UE_LOG(LogTemp, Warning, TEXT("AKiProjectile::BeginPlay() ---> HitboxComponent VALIDE"));
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("AKiProjectile::BeginPlay() ---> HitboxComponent NULL"));
    }

    // Initialisation ou log
}

void AKiProjectile::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    MoveProjectile(DeltaTime);

    // Par exemple : avancer si tu veux gérer le mouvement toi-même
    // FVector NewLocation = GetActorLocation() + Direction * Speed * DeltaTime;
    // SetActorLocation(NewLocation);
}

void AKiProjectile::MoveProjectile(float DeltaTime)
{
    if (FireDirection.IsNearlyZero())
    {
        UE_LOG(LogTemp, Error, TEXT("AKiProjectile::MoveProjectile(float DeltaTime) : FireDirection est trop proche de 0."));
        return;
    }
    FVector Movement = FireDirection.GetSafeNormal() * ProjectileSpeed * DeltaTime;

    AddActorWorldOffset(Movement, true);
}

void AKiProjectile::HandleHit(AActor* Self, AActor* OtherActor)
{
    if (OtherActor && OtherActor != OwnerCharacter)
    {
        UE_LOG(LogTemp, Warning, TEXT("HandleHit dans KiProjectile : %s touche"), *OtherActor->GetName());
        Destroy(); // ou explosion FX, dégâts, etc.
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("HandleHit dans KiProjectile : Aled"));

    }
}