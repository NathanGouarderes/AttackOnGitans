// Fill out your copyright notice in the Description page of Project Settings.
#include "MyKiProjectileBase.h"
#include "MyCharacter.h"

AMyKiProjectileBase::AMyKiProjectileBase()
{

}

void AMyKiProjectileBase::Initialize(FVector FireDirection)
{
    // Vérifie si le Ki est suffisant
    UE_LOG(LogTemp, Warning, TEXT("AMyKiProjectileBase::Initialize() appele"));

    if (ConsumeKi())
    {
        Super::Initialize(FireDirection);
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Pas assez de Ki pour lancer le projectile !"));
        
        if (KiComponent) 
        {
            UE_LOG(LogTemp, Error, TEXT("Current ki : %f"), KiComponent->CurrentKi);
        }
        else 
        {
            UE_LOG(LogTemp, Error, TEXT("KiComponent est NULL !"));
        }

        UE_LOG(LogTemp, Error, TEXT("Ki cost : %f"), KiCost);
        Destroy();
    }
}


bool AMyKiProjectileBase::ConsumeKi()
{
    AMyCharacter* OwnerCharacter = Cast<AMyCharacter>(GetOwner());

    if (!OwnerCharacter)
    {
        UE_LOG(LogTemp, Error, TEXT("ConsumeKi: OwnerCharacter est NULL !"));
        return false;
    }

    KiComponent = OwnerCharacter->FindComponentByClass<UCharacterKiComponent>();

    if (!KiComponent)
    {
        UE_LOG(LogTemp, Error, TEXT("ConsumeKi: KiComponent est NULL !"));
        return false;
    }

    if (KiComponent->CurrentKi >= KiCost)
    {
        KiComponent->CurrentKi -= KiCost;
        KiComponent->UpdateKiBar();
        UE_LOG(LogTemp, Warning, TEXT("Ki consommé: %f"), KiComponent->CurrentKi);
        UE_LOG(LogTemp, Error, TEXT("Current ki : %f"), KiComponent->CurrentKi);
        UE_LOG(LogTemp, Error, TEXT("Ki cost : %f"), KiCost);

        return true;
    }

    return false;
}
