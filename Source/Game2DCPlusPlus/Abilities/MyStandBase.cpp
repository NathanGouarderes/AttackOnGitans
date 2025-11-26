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
		if (CharacterStandComp && CharacterStandComp->bIsStandComingBack)
		{
			ReturnToOwner(DeltaTime);
		}
		else
		{
			UpdateStandPosition();
		}
	}

}



void AMyStandBase::InitializeStand(AActor* ActorOwner)
{
	OwnerCharacter = ActorOwner;
	if (!OwnerCharacter)
	{
		UE_LOG(LogTemp, Error, TEXT("AMyStandBase::InitializeStand --> OwnerCharacter NULL"));
		return;
	}

	if (OwnerCharacter->GetClass()->ImplementsInterface(UFighterInterface::StaticClass()))
	{
		for (UActorComponent* Comp : GetComponents())
		{
			if (UStandCombatComponent* CombatComp = Cast<UStandCombatComponent>(Comp))
			{
				CombatComp->InitializeAfterOwnerSet();
			}
		}


		CharacterData = IFighterInterface::Execute_GetCharacterData(OwnerCharacter);
		CharacterStats = IFighterInterface::Execute_GetStatsComponent(OwnerCharacter);
		CharacterKiComp = IFighterInterface::Execute_GetKiComponent(OwnerCharacter);
		CharacterStandComp = IFighterInterface::Execute_GetStandComponent(OwnerCharacter);

		UE_LOG(LogTemp, Warning, TEXT("AMyStandBase::InitializeStand --> Stand lié à %s (%s)"),
			*CharacterData.CharacterName.ToString(),
			*OwnerCharacter->GetName());
		if (CharacterStats)
		{
			UE_LOG(LogTemp, Warning, TEXT("AMyStandBase::InitializeStand -->StatsComponent trouvé sur le manieur."));
		}

		if (CharacterKiComp)
		{
			UE_LOG(LogTemp, Warning, TEXT("AMyStandBase::InitializeStand --> KiComponent trouvé sur le manieur."));
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("AMyStandBase::InitializeStand --> (%s) n'implémente pas IFighterInterface !"), *OwnerCharacter->GetName());
	}
}


void AMyStandBase::UpdateStandPosition()
{
	APlayerController* PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	if (!PlayerController)
	{
		UE_LOG(LogTemp, Error, TEXT("AMyStandBase::UpdateStandPosition --> PlayerController NULL"));
		return;
	}
	if (OwnerCharacter->GetClass()->ImplementsInterface(UFighterInterface::StaticClass()))
	{
		if (CharacterStandComp->bIsStandComingBack)
		{
			UE_LOG(LogTemp, Warning, TEXT("AMyStandBase::UpdateStandPosition --> Tentative de rappeler le stand"));
			CharacterStandComp->UnsumonStand();
		}
		else
		{
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


AActor* AMyStandBase::GetOwnerCharacter()
{
	if (!OwnerCharacter)
	{
		UE_LOG(LogTemp, Error, TEXT("AMyStandBase::GetOwnerCharacter() --> OwnerCharacter NULL"));
		return nullptr;
	}
	return OwnerCharacter;
}

void AMyStandBase::ReturnToOwner(float DeltaTime)
{
	UE_LOG(LogTemp, Warning, TEXT("AMyStandBase::ReturnToOwner() --> Stand en cours de rappel."));
	FVector Target = OwnerCharacter->GetActorLocation();
	FVector Current = GetActorLocation();

	float Speed = StandData.FollowingSpeed; //éventuellement plus rapide au retour

	FVector NewLoc = FMath::VInterpTo(Current, Target, DeltaTime, Speed);
	SetActorLocation(NewLoc);

	// Tourne le Stand vers son manieur
	SetActorRotation((Target - Current).Rotation());

	// Distance d’arrivée
	float Dist = FVector::Dist(NewLoc, Target);

	if (Dist < 10.f)
	{
		CharacterStandComp->bIsStandComingBack = false;
		CharacterStandComp->bIsStandOut = false;

		Destroy();
		UE_LOG(LogTemp, Warning, TEXT("AMyStandBase::ReturnToOwner() --> Stand rappele et détruit."));
	}
}