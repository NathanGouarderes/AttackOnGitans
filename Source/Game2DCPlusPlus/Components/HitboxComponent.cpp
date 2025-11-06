// Fill out your copyright notice in the Description page of Project Settings.


#include "HitboxComponent.h"
#include "StatsComponent.h"

UHitboxComponent::UHitboxComponent()
{
    SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
    SetCollisionObjectType(ECC_WorldDynamic); //Faire plus de recherches sur ce point
    SetCollisionResponseToAllChannels(ECR_Ignore);
    SetCollisionResponseToChannel(ECC_Pawn, ECR_Block);

    SetGenerateOverlapEvents(true); //Faire plus de recherches sur ce point
    SetNotifyRigidBodyCollision(true); //Faire plus de recherches sur ce point

    bHiddenInGame = true;
}

void UHitboxComponent::BeginPlay()
{
    Super::BeginPlay();

    OnComponentHit.AddDynamic(this, &UHitboxComponent::OnHitInternal); //Pourquoi l'auto-complétion ne me propose pas la bonne syntaxe pour AddDynamic ? Faire plus de recherches sur ce point
    OnComponentBeginOverlap.AddDynamic(this, &UHitboxComponent::OnOverlapInternal);
}

void UHitboxComponent::OnHitInternal(UPrimitiveComponent* HitComp, AActor* OtherActor,
    UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
    UE_LOG(LogTemp, Warning, TEXT("UHitboxComponent::OnHitInternal"));

    if(!OtherActor || !OtherComp || !GetOwner())
    {
        UE_LOG(LogTemp, Error, TEXT("UHitboxComponent::OnHitInternal --> OtherActor ou GetOwner NULL"))
        return;
    }

    if (OtherActor && OtherActor != GetOwner())
    {
        UStatsComponent* Stats = OtherActor->FindComponentByClass<UStatsComponent>();
        if (Stats)
        {
            Stats->ApplyDamages(Damage);
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("UHitboxComponent::OnHitInternal --> ALED"))

        }
        OnCustomHit.Broadcast(GetOwner(), OtherActor);

    }
}

void UHitboxComponent::OnOverlapInternal(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
    UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    UE_LOG(LogTemp, Warning, TEXT("UHitboxComponent::OnOverlapInternal"));

    if (!OverlappedComponent || !OtherComp || !GetOwner())
    {
        UE_LOG(LogTemp, Error, TEXT("UHitboxComponent::OnOverlapInternal --> OverlappedComponent ou GetOwner NULL"))
            return;
    }

    if (OtherActor && OtherActor != GetOwner())
    {
        OnCustomHit.Broadcast(GetOwner(), OtherActor);
    }
}