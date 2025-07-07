/*
// MyFistBase.cpp
#include "MyFistBase.h"
#include "PaperFlipbookComponent.h"
#include "Components/BoxComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/DataTable.h"

AMyFistBase::AMyFistBase()
{
	// Chargement de la DataTable de poings
	static ConstructorHelpers::FObjectFinder<UDataTable> FistDataTable(TEXT("/Game/MyBluePrints/DT_FistAttackRow.DT_FistAttackRow"));

	// Création du Flipbook des bras/poings
	FistFlipbookComponent = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("ArmFlipbook"));
	FistFlipbookComponent->SetupAttachment(RootComponent);

	// Création de la hitbox
	FistHitbox = CreateDefaultSubobject<UBoxComponent>(TEXT("FistHitbox"));
	FistHitbox->SetupAttachment(FistFlipbookComponent);
	FistHitbox->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	FistHitbox->SetCollisionProfileName(TEXT("OverlapAllDynamic"));
	FistHitbox->SetNotifyRigidBodyCollision(true);

	// Init safe des data
	CurrentPunchData = FFistCombatRow();

	// Si DataTable trouvée
	if (FistDataTable.Succeeded())
	{
		FistData = FistDataTable.Object;
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("❌ Impossible de charger DT_FistAttackRow ! Vérifie le chemin."));
	}
}

void AMyFistBase::BeginPlay()
{
	Super::BeginPlay();

	if (!FistData)
	{
		UE_LOG(LogTemp, Error, TEXT("FistDataTable NULL"));
	}
}

FFistCombatRow AMyFistBase::GetPunchRow(FName PunchName)
{
	if (!FistData)
	{
		UE_LOG(LogTemp, Error, TEXT("❌ FistDataTable est NULL dans GetPunchRow !"));
		return FFistCombatRow();
	}

	FFistCombatRow* Row = FistData->FindRow<FFistCombatRow>(PunchName, TEXT("GetPunchRow"));
	if (Row)
	{
		CurrentPunchData = *Row;
		return *Row;
	}

	UE_LOG(LogTemp, Error, TEXT("❌ Aucun coup trouvé pour : %s"), *PunchName.ToString());
	return FFistCombatRow();
}

UPaperFlipbook* AMyFistBase::GetPunchAnimation(FName PunchName)
{
	FFistCombatRow Row = GetPunchRow(PunchName);

	if (Row.PunchAnimation)
	{
		FistFlipbookComponent->SetFlipbook(Row.PunchAnimation);
		FistFlipbookComponent->PlayFromStart();
		return Row.PunchAnimation;
	}

	return nullptr;
}

*/