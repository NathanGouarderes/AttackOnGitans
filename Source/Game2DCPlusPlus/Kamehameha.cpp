// Fill out your copyright notice in the Description page of Project Settings.


#include "Kamehameha.h"
#include "MyProjectileBase.h"
#include "MyCharacter.h"
#include "CharacterAbilitiesComponent.h"
#include "Components/CapsuleComponent.h"


AKamehameha::AKamehameha() {
	PrimaryActorTick.bCanEverTick = true;

	FlipbookComponent = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("FlipbookComponent"));
	FlipbookComponent->SetupAttachment(RootComponent);
	FlipbookComponent->SetFlipbook(KamehamehaFlipbook);

	CapsuleCollisionComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleCollisionComponent"));
	CapsuleCollisionComponent->SetupAttachment(RootComponent);
	CapsuleCollisionComponent->SetCapsuleHalfHeight(200.0f);
	CapsuleCollisionComponent->SetCapsuleRadius(10.0f);

	if (CharacterClass)
	{
		AMyCharacter* Character = Cast<AMyCharacter>(GetWorld()->GetFirstPlayerController()->GetPawn());
		AbilitiesComponent = Character->FindComponentByClass<UCharacterAbilitiesComponent>();


		maxKiUser = AbilitiesComponent->MaxKi;
		UE_LOG(LogTemp, Warning, TEXT("Le ki de l'utilisateur : %f"), maxKiUser);
	}
	else
	{
		maxKiUser = 0;
	}
	Damage = 100.0f;
	KiCost = 100.0f;
	Speed = 1500.0f;
	LifeSpan = 5.0f;
	ExpansionSpeed = 200.0f;
	
}

void AKamehameha::Initialize(FVector NewDirection) {
	Super::Initialize(NewDirection);
	UE_LOG(LogTemp, Warning, TEXT("Le kamehameha est lance"));

	if (AbilitiesComponent && AbilitiesComponent->OwnerCharacter) 
	{
		if (KiComponent && KiComponent->CurrentKi >= KiCost) {
			KiComponent->CurrentKi -= KiCost;
			KiComponent->UpdateKiBar();
			UE_LOG(LogTemp, Warning, TEXT("Ki consommé, nouvelle valeur : %f"), KiComponent->CurrentKi);
			this->Direction = NewDirection;
		}
		else {
			UE_LOG(LogTemp, Error, TEXT("Pas assez de Ki pour lancer le Kamehameha !"));
		}
	}
		this->Direction = NewDirection;
}

void AKamehameha::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);

    if (!CapsuleCollisionComponent) {
        UE_LOG(LogTemp, Error, TEXT("CapsuleCollisionComponent est NULL dans Kamehameha::Tick"));
        return;
    }

    if (!FlipbookComponent) {
        UE_LOG(LogTemp, Error, TEXT("FlipbookComponent est NULL dans Kamehameha::Tick"));
        return;
    }

    float newHalfHeight = CapsuleCollisionComponent->GetUnscaledCapsuleHalfHeight() + (ExpansionSpeed * DeltaTime);
    FVector NewScale = FlipbookComponent->GetComponentScale();
    NewScale.X += ExpansionSpeed * DeltaTime * 0.01635f + maxKiUser;
    FlipbookComponent->SetWorldScale3D(NewScale);
}