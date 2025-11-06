// Fill out your copyright notice in the Description page of Project Settings.



#include "KiBall.h"

AKiBall::AKiBall()
{
    PrimaryActorTick.bCanEverTick = true;

    

    Damage = 30.0f;
    ProjectileSpeed = 1000.0f;
    KiCost = 150.0f;
    NiagaraComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NiagaraComponent"));
    NiagaraComponent->SetupAttachment(RootComponent);
    NiagaraComponent->bAutoActivate = true;
    NiagaraComponent->SetUsingAbsoluteRotation(true);
}

void AKiBall::BeginPlay()
{
    Super::BeginPlay();

    //HitboxComponent->SetBoxExtent(FVector(20.f, 20.f, 20.f));
    HitboxComponent->Damage = Damage;

    if (NiagaraEffect)
    {
        NiagaraComponent->SetAsset(NiagaraEffect);
        NiagaraComponent->ActivateSystem(true);
        FireDirection.X -= 50.0f;
        NiagaraComponent->SetVectorParameter(FName("FireDirection"), FireDirection);
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("NiagaraEffect non assigné dans %s"), *GetName());
    }
    if (FlipbookComponent)
    {
        FlipbookComponent->SetFlipbook(FlipbookAsset);


        if (FlipbookComponent->GetFlipbook() == nullptr)
        {
            UE_LOG(LogTemp, Error, TEXT("Flipbook non assigné dans %s"), *GetName());
        }
    }

    if (FlipbookAsset)
    {
        FlipbookComponent->SetFlipbook(FlipbookAsset);
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("FlipbookAsset est NULL dans %s"), *GetName());
    }
}

void AKiBall::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    FVector VelocityDirection = FireDirection.GetSafeNormal();

    if (NiagaraComponent)
    {
        FRotator Rotation = VelocityDirection.Rotation();
        NiagaraComponent->SetWorldRotation(Rotation);
    }
}
