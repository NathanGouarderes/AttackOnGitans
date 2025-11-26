// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

UENUM(BlueprintType)
enum class ECreatureSegmentType : uint8
{
	Core UMETA(DisplayName = "Core"),
	Leg UMETA(DisplayName = "Leg"),
	Arm UMETA(DisplayName = "Arm"),
	Tail UMETA(DisplayName = "Tail"),
	Head UMETA(DisplayName = "Head"),
	Custom UMETA(DisplayName = "Custom")
};
