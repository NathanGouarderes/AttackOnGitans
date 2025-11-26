#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FAttackData.generated.h"

UENUM(BlueprintType)
enum class EDamageTypeEnum : uint8
{
    Physical UMETA(DisplayName = "Physical"),
    Fire     UMETA(DisplayName = "Fire"),
    Ice      UMETA(DisplayName = "Ice"),
    Magic    UMETA(DisplayName = "Magic"),
    Ki       UMETA(DisplayName = "Ki"),
};

USTRUCT(BlueprintType)
struct FAttackData : public FTableRowBase
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    FName AttackName;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    FName InputAction;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    bool bRequiresMovement = false;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    bool bRequiresAirborne = false;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    bool bRequiresCrouch = false;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    bool bRequiresStandActive = false;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    bool bRequiresKiCharging = false;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    bool bRequiresKiCharged = false;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    float Damage;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    float Range;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    float StartupTime;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    float ActiveTime;
    UPROPERTY(EditAnywhere) bool  bParryable = true;
    UPROPERTY(EditAnywhere) bool  bBlockable = true;
    UPROPERTY(EditAnywhere) bool  bDodgeable = true;
    UPROPERTY(EditAnywhere) float StartupMs = 120.f;   // frame data
    UPROPERTY(EditAnywhere) float ActiveMs = 100.f;
    UPROPERTY(EditAnywhere) float RecoveryMs = 200.f;

    UPROPERTY(EditAnywhere) float PoiseDamage = 20.f; // pour stagger/guardbreak
    UPROPERTY(EditAnywhere) float ChipDamage = 0.f;  // dégât traversant la garde

    UPROPERTY(EditAnywhere) float KnockbackStrength = 1800.f; // X/Z
    UPROPERTY(EditAnywhere) float KnockupStrength = 600.f;  // sauts aériens DBZ
    UPROPERTY(EditAnywhere) float MomentumMassScale = 1.0f;   // transfert momentum

    // Parry/Dodge
    UPROPERTY(EditAnywhere) float ParryWindowMs = 120.f;  // timing standard
    UPROPERTY(EditAnywhere) float PerfectParryWindowMs = 35.f;   // timing parfait
    UPROPERTY(EditAnywhere) float DodgeIFrameMs = 180.f;  // invincibilité
    UPROPERTY(EditAnywhere) float PerfectDodgeIFrameMs = 260.f;
    UPROPERTY(EditAnywhere) float TimeDilationOnPerfect = 0.15f;  // slow-mo local

    // Beams
    UPROPERTY(EditAnywhere) bool  bIsBeam = false;
    UPROPERTY(EditAnywhere) float DeflectYawDegreesOnPerfect = 90.f; // bascule vers Y
    UPROPERTY(EditAnywhere) float DeflectDepthOffsetY = 800.f; // “profondeur”
    UPROPERTY(EditAnywhere) float DeflectLifetimeAfterMs = 1200.f;

    // Interaction décor
    UPROPERTY(EditAnywhere) bool  bBreaksWalls = true;
    UPROPERTY(EditAnywhere) bool  bCanBuryTarget = true;
    UPROPERTY(EditAnywhere) float BuryDepthZ = 120.f;
    UPROPERTY(EditAnywhere) float TerrainDamage = 50.f;
    // option : catégorie de décor visée
    UPROPERTY(EditAnywhere) TEnumAsByte<ECollisionChannel> DestructibleChannel = ECC_GameTraceChannel4;

    //UPROPERTY(EditAnywhere, BlueprintReadOnly)
    //float RecoveryTime;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    TSoftObjectPtr<class UPaperFlipbook> Animation;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    EDamageTypeEnum DamageType;

    UPROPERTY(EditAnywhere)
    TArray<FName> TraceSockets;
};
