// Fill out your copyright notice in the Description page of Project Settings.
#include "MyStandBase.h"
#include "Components/CapsuleComponent.h"
#include "Kismet/GameplayStatics.h"
#include "../Characters/MyCharacter.h" 
// Sets default values
AMyStandBase::AMyStandBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	USceneComponent* Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = Root;
	FlipbookComponent = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("FlipbookComponent"));
	StandAbilitiesComponent = CreateDefaultSubobject<UStandAbilitiesComponent>(TEXT("StandAbilitiesComponent"));
	StandAnimationComponent = CreateDefaultSubobject<UStandAnimationComponent>(TEXT("StandAnimationComponent"));
	StandCombatComponent = CreateDefaultSubobject<UStandCombatComponent>(TEXT("StandCombatComponent"));
	FlipbookComponent->SetupAttachment(RootComponent);



	static ConstructorHelpers::FObjectFinder<UDataTable> StandDT(
		TEXT("/Game/DataTables/DT_StandData.DT_StandData")
	);
	if (StandDT.Succeeded())
	{
		UE_LOG(LogTemp, Warning, TEXT("AMyStandBase::AMyStandBase() --> DTStand OK"));
		StandDataTable = StandDT.Object;
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("AMyStandBase::AMyStandBase() --> DTStand KO"));
	}

}

// Called when the game starts or when spawned
void AMyStandBase::BeginPlay()
{
	Super::BeginPlay();


	const FStandData* Row = StandDataTable->FindRow<FStandData>(FName("StandBase"), TEXT("AMyStandBase::BeginPlay() --> StandBase Row"));

	if (Row)
	{
		StandData = *Row;
		UE_LOG(LogTemp, Warning, TEXT("AMyStandBase::BeginPlay() --> Stand Données : \nAttaque : %f\nDistance de suivi : %f"), StandData.Base.Damage, StandData.FollowingDistance);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("AMyStandBase::BeginPlay() --> Row NULL"));

	}
}

// Called every frame
void AMyStandBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (OwnerCharacter)
	{
		UpdateStandPosition();
	}

}



void AMyStandBase::InitializeStand(AActor* ActorOwner)
{
	OwnerCharacter = ActorOwner;
}

void AMyStandBase::UpdateStandPosition()
{
	APlayerController* PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	if (!PlayerController)
	{
		UE_LOG(LogTemp, Error, TEXT("AMyStandBase::UpdateStandPosition --> PlayerController NULL"));
		return;
	}

	FVector WorldLocation;
	FVector WorldDirection;

	if (PlayerController->DeprojectMousePositionToWorld(WorldLocation, WorldDirection))
	{
		//Intersection du rayon souris avec le plan Y = Y du joueur (plan 2D de ton jeu)
		float PlaneY = OwnerCharacter ? OwnerCharacter->GetActorLocation().Y : 0.f;

		//Calcul de l’intersection rayon ↔ plan Y=constant
		float t = (PlaneY - WorldLocation.Y) / WorldDirection.Y;
		FVector HitPoint = WorldLocation + (t * WorldDirection);

		// Point dans le monde correspondant à la souris
		FVector Target = FVector(HitPoint.X, PlaneY, HitPoint.Z);
		FVector Current = GetActorLocation();

		//Limite de distance max
		float MaxDistance = StandData.FollowingDistance;
		FVector ToTarget = Target - OwnerCharacter->GetActorLocation();
		if (ToTarget.Size() > MaxDistance)
		{
			ToTarget = ToTarget.GetSafeNormal() * MaxDistance;
			Target = OwnerCharacter->GetActorLocation() + ToTarget;
		}

		//Déplacement fluide
		float FollowSpeed = StandData.FollowingSpeed;
		FVector NewLocation = FMath::VInterpTo(Current, Target, GetWorld()->DeltaTimeSeconds, FollowSpeed);
		SetActorLocation(NewLocation);

		//Rotation vers la souris
		FRotator LookRot = (Target - GetActorLocation()).Rotation();
		SetActorRotation(FRotator(0.f, LookRot.Yaw, 0.f));

		//Debug
		DrawDebugLine(GetWorld(), WorldLocation, HitPoint, FColor::Cyan, false, 0.05f, 0, 1.f);
	}
}


void AMyStandBase::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep,
	const FHitResult& SweepResult)
{

}

void AMyStandBase::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComponent, FVector NormalImpulse,
	const FHitResult& Hit)
{

}

