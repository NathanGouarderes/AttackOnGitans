/*
// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "PaperFlipbookComponent.h"
#include "MyWeaponBase.generated.h"

UCLASS()
class GAME2DCPLUSPLUS_API AMyWeaponBase : public AActor
{
    GENERATED_BODY()

public:
    // Sets default values for this actor's properties
    //AMyWeaponBase();

protected:
    // Called when the game starts or when spawned
    //virtual void BeginPlay() override;

public:
    // Called every frame
    //virtual void Tick(float DeltaTime) override;

    UFUNCTION(BlueprintCallable, Category = "Weapon")
    //virtual FVector GetWeaponHitboxLocation() const;

    // ✅ Nom de l'arme (Épée, Poing, Lance, etc.)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
    FString WeaponName;

    // ✅ Dégâts infligés
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
    float Damage;

    // ✅ Portée de l'arme
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
    float AttackRange;

    // ✅ Vitesse d'attaque (temps entre les coups)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
    float AttackSpeed;

    // ✅ Nombre de coups dans un combo
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
    int32 MaxCombo;

    // ✅ Table des animations pour cette arme (on l'utilisera avec `CharacterAnimationComponent`)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
    class UDataTable* AttackAnimations;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Weapon", meta = (AllowPrivateAccess = "true"))
    UPaperFlipbookComponent* WeaponFlipbookComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Weapon")
    UBoxComponent* WeaponHitbox;

    // ✅ Fonction pour récupérer l'animation d'attaque actuelle
    UFUNCTION(BlueprintCallable, Category = "Weapon")
   // UPaperFlipbook* GetAttackAnimation(int32 AttackStep);


    //void PrintDataTableContent();
};

*/