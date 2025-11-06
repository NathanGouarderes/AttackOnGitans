// Fill out your copyright notice in the Description page of Project Settings.


#include "Kamehameha.h"

AKamehameha::AKamehameha()
{
	PrimaryActorTick.bCanEverTick = true;
	bIsFiring = false;
	GrowthRate = 800.0f;
	KiCost = 20;
}

void AKamehameha::BeginPlay()
{
	Super::BeginPlay();
}

void AKamehameha::StartFiringBeam()
{
	Super::StartFiringBeam();
	UE_LOG(LogTemp, Warning, TEXT("Kamehameha: Effet de tir active"));
}

void AKamehameha::StopFiringBeam()
{
	Super::StopBeam();
	UE_LOG(LogTemp, Warning, TEXT("Kamehameha: Effet de tir désactive"));
}

void AKamehameha::StartBeam()
{
	bIsFiring = true;

}