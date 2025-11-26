// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "../FCharacterData.h"
#include "FighterInterface.generated.h"

/**
 * 
 */
// Partie UINTERFACE (métaclasse Unreal)
UINTERFACE(BlueprintType)
class GAME2DCPLUSPLUS_API UFighterInterface : public UInterface
{
    GENERATED_BODY()
};

// Partie logique C++
class GAME2DCPLUSPLUS_API IFighterInterface
{
    GENERATED_BODY()

public:
    /** Retourne le composant de stats */
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Fighter")
    class UStatsComponent* GetStatsComponent() const;

    /** Retourne le composant de Ki (énergie interne) */
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Fighter")
    class UCharacterKiComponent* GetKiComponent() const;

    /** Retourne le composant de Stand */
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Fighter")
    class UStandComponent* GetStandComponent() const;

    /** Retourne les données du personnage */
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Fighter")
    struct FCharacterData GetCharacterData() const;
};