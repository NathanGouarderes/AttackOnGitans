// Fill out your copyright notice in the Description page of Project Settings.


#include "FireBall.h"

AFireBall::AFireBall()
{
	KiCost = 25.0f;  // Moins cher en Ki que le Kamehameha
	Damage = 50.0f;  // Dégâts modérés
	Speed = 1500.0f; // Plus rapide que le Kamehameha
	LifeSpan = 3.0f; // Dure moins longtemps
}

void AFireBall::Initialize(FVector NewDirection)
{
	Super::Initialize(NewDirection);
	UE_LOG(LogTemp, Warning, TEXT("Boule de feu lancee !"));
}