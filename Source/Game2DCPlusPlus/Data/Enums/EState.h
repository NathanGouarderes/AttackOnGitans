// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

UENUM(BlueprintType)
enum class EState : uint8
{
    Idle                UMETA(DisplayName = "Idle"),
    ParryStartup        UMETA(DisplayName = "ParryStartup"),
    ParryActive         UMETA(DisplayName = "ParryActive"),
    ParryRecovery       UMETA(DisplayName = "ParryRecovery"),
    DodgeIFrames        UMETA(DisplayName = "DodgeIFrames"),
    Staggered           UMETA(DisplayName = "Staggered"),
    WallImpact          UMETA(DisplayName = "WallImpact"),
    Buried              UMETA(DisplayName = "Buried"),
    LaunchedAirborne    UMETA(DisplayName = "LaunchedAirborne"),
    Walking             UMETA(DisplayName = "Walking"),
    Jumping             UMETA(DisplayName = "Jumping"),
    Dodging             UMETA(DisplayName = "Dodging"),
    Attacking           UMETA(DisplayName = "Attacking"),
    Blocking            UMETA(DisplayName = "Blocking"),
    ChargingKi          UMETA(DisplayName = "Charging Ki"),
    ChargingBeam        UMETA(DisplayName = "Charging Beam"),
    FiringBeam          UMETA(DisplayName = "Firing Beam"),
    RecoverBeam         UMETA(DisplayName = "Firing Beam"),
    UsingMagic          UMETA(DisplayName = "Using Magic"),
    UsingStand          UMETA(DisplayName = "Using Stand"),
    Stunned             UMETA(DisplayName = "Stunned"),
    Dead                UMETA(DisplayName = "Dead")
};
