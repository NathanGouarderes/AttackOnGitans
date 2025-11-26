// Fill out your copyright notice in the Description page of Project Settings.


#include "FighterLifeCycleComponent.h"
#include "../Data/Interfaces/FighterInterface.h"
#include "StatsComponent.h"
#include "CharacterKiComponent.h"
#include "UCharacterStateComponent.h"
#include "CharacterCombatComponent.h"
#include "CharacterAbilitiesComponent.h"
#include "CharacterAnimationComponent.h"
#include "StandComponent.h"

void UFighterLifeCycleComponent::StartLifeCycle()
{
	OwnerActor = GetOwner();
    PreInit();
    LoadData();
    WireCore();
    WireCombat();
    WireAbilities();
    StandPhase();
    //PostInit();
    //Finish();
}

void UFighterLifeCycleComponent::PreInit()
{
    OwnerActor = GetOwner();
    if (!OwnerActor)
    {
        UE_LOG(LogTemp, Error, TEXT("UFighterLifeCycleComponent::PreInit() --> OwnerActor NULL"));
        return;
    }

    State = OwnerActor->FindComponentByClass<UCharacterStateComponent>();
    Stats = OwnerActor->FindComponentByClass<UStatsComponent>();
    Ki = OwnerActor->FindComponentByClass<UCharacterKiComponent>();
    Combat = OwnerActor->FindComponentByClass<UCharacterCombatComponent>();
    Abilities = OwnerActor->FindComponentByClass<UCharacterAbilitiesComponent>();
    StandComp = OwnerActor->FindComponentByClass<UStandComponent>();
    Anim = OwnerActor->FindComponentByClass<UCharacterAnimationComponent>();

    UE_LOG(LogTemp, Warning, TEXT("AFighterLifeCycleComponent::PreInit() -> composants référencés"));
}

void UFighterLifeCycleComponent::LoadData()
{
    if (!OwnerActor->GetClass()->ImplementsInterface(UFighterInterface::StaticClass()))
    {
        UE_LOG(LogTemp, Error, TEXT("AFighterLifeCycleComponent::LoadData() -> Owner ne supporte pas IFighterInterface"));
        return;
    }

    CharacterData = IFighterInterface::Execute_GetCharacterData(OwnerActor);
    if (CharacterData.CharacterName.IsNone())
    {
        UE_LOG(LogTemp, Error, TEXT("AFighterLifeCycleComponent::LoadData() -> CharacterData vide"));
        return;
    }

    UE_LOG(LogTemp, Warning, TEXT("AFighterLifeCycleComponent::LoadData() -> Chargé : %s"), *CharacterData.CharacterName.ToString());

    // Charger AttackDataTable si présent
    if (!CharacterData.AttackDataSet.IsNull())
    {
        UDataTable* AttackDT = CharacterData.AttackDataSet.LoadSynchronous();
        if (AttackDT)
        {
            UE_LOG(LogTemp, Warning, TEXT("AFighterLifeCycleComponent::LoadData() -->  AttackDataTable chargée : %s"), *AttackDT->GetName());
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("AFighterLifeCycleComponent::LoadData() --> AttackDataTable introuvable !"));

        }
    }
}

void UFighterLifeCycleComponent::WireCore()
{
   if(Stats)
   {
       if (Stats)
       {
           Stats->CurrentHealth = Stats->CharacterStats.MaxHealth;
           UE_LOG(LogTemp, Warning, TEXT("AFighterLifeCycleComponent::WireCore() --> Stats initialisées"));
       }

       if (Ki && Stats)
       {
           Ki->InitializeStatsComponent(Stats);
           Ki->InitializeKiSystem();
           UE_LOG(LogTemp, Warning, TEXT("⚙AFighterLifeCycleComponent::WireCore() --> Ki relié aux Stats"));
       }

       if (State)
       {
           State->ResetState();
           UE_LOG(LogTemp, Warning, TEXT("AFighterLifeCycleComponent::WireCore() --> StateComponent réinitialisé"));
       }
   }
}

void UFighterLifeCycleComponent::WireCombat()
{
    if (!Combat)
    {
        UE_LOG(LogTemp, Error, TEXT("AFighterLifecycleComponent::WireCombat() --> CombatComponent NULL"));
        return;
    }

    Combat->InitializeCombat(CharacterData);
    //UE_LOG(LogTemp, Warning, TEXT("AFighterLifecycleComponent::WireCombat() --> CombatComponent initialisé"));
}


void UFighterLifeCycleComponent::WireAbilities()
{
    if (Abilities && Ki && Stats)
    {
        Abilities->InitializeAllComponents(Ki, Stats);
       //UE_LOG(LogTemp, Warning, TEXT("⚙️ Abilities reliées à Ki et Stats"));
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("❌ Lifecycle::WireAbilities -> composant manquant"));
    }
}

void UFighterLifeCycleComponent::StandPhase()
{
    if (!StandComp)
    {
        UE_LOG(LogTemp, Warning, TEXT("ℹ️ Aucun StandComponent trouvé, skip phase Stand"));
        return;
    }

    if (!CharacterData.StandClass.IsNull())
    {
        StandComp->StandClass = CharacterData.StandClass.LoadSynchronous();
        //StandComp->SummonStand();
        //UE_LOG(LogTemp, Warning, TEXT("✨ Stand invoqué pour %s"), *OwnerActor->GetName());
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("ℹ️ Pas de StandClass défini dans CharacterData"));
    }
}

