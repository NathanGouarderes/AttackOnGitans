// Fill out your copyright notice in the Description page of Project Settings.


#include "BeamBase.h"
#include "PaperFlipbook.h"
#include "Engine/DamageEvents.h"
#include "../../Components/CharacterKiComponent.h"
#include "../../Enemies/MyEnemyBase.h"
#include "Components/CapsuleComponent.h"
#include "../../Components/UCharacterStateComponent.h"
#include "CollisionQueryParams.h"
#include "Engine/EngineTypes.h"
#include "Engine/OverlapResult.h"

#define ECC_BEAMOBJECT ECC_GameTraceChannel3
#define ECC_BEAMTRACE ECC_GameTraceChannel2


// Sets default values
ABeamBase::ABeamBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = false;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	NiagaraComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NiagaraComponent"));
	HitboxComponent = CreateDefaultSubobject<UHitboxComponent>(TEXT("HitboxComponent"));
	StatsComponent = CreateDefaultSubobject<UStatsComponent>(TEXT("StatsComponent"));
	FlipbookComponent = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("FlipbookComponent"));

	RootComponent = Root;
	NiagaraComponent->SetupAttachment(Root);
	FlipbookComponent->SetupAttachment(Root);   
	HitboxComponent->SetupAttachment(NiagaraComponent);

	HitboxComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	HitboxComponent->SetCollisionObjectType(ECC_BEAMOBJECT);
	HitboxComponent->SetCollisionResponseToAllChannels(ECR_Ignore);
	HitboxComponent->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);

	KiAttackType = EKiAttackType::Beam;
	CurrentLenght = 0.0f;
	ChargeLevel = 1.0f;

}

// Called when the game starts or when spawned
void ABeamBase::BeginPlay()
{
	Super::BeginPlay();

	if (HitboxComponent)
	{
		HitboxComponent->OnComponentBeginOverlap.AddDynamic(this, &ABeamBase::OnBeamOverlap);
	}
}

// Called every frame
void ABeamBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!OwnerCharacter)
	{
		UE_LOG(LogTemp, Error, TEXT("❌ Beam Tick: OwnerCharacter NULL"));
		return;
	}

	if (!KiComponent)
	{
		UE_LOG(LogTemp, Error, TEXT("❌ Beam Tick: KiComponent NULL"));
		return;
	}

	if (!StatsComponent)
	{
		UE_LOG(LogTemp, Error, TEXT("❌ Beam Tick: StatsComponent NULL"));
		return;
	}

	if (!OwnerCharacter || !KiComponent)
	{
		StopBeam();
		UE_LOG(LogTemp, Error, TEXT("ABeamBase::Tick ---> OnwerCharacter ou KiComponent manquant."))
			return;
	}

	if (bIsCharging)
	{
		if (!KiComponent->TryConsumeKi(KiCostPerSecondForCharging * DeltaTime))
		{
			UE_LOG(LogTemp, Warning, TEXT("ABeamBase::Tick: Plus assez de ki pour continuer la charge !"));
			StopBeam();
			return;
		}
		//UE_LOG(LogTemp, Warning, TEXT("ABeamBase::Tick Rayon en cours de chargement"));
		KiComponent->UpdateKiBar();


	}
	else if (bIsFiring)
	{
		if (!KiComponent->TryConsumeKi(KiCostPerSeconForFiring * DeltaTime))
		{
			//UE_LOG(LogTemp, Warning, TEXT("Beam: Plus assez de ki pour maintenir le rayon !"));
			StopBeam();
			return;
		}

		if (OwnerCharacter->GetVelocity().Size() > KINDA_SMALL_NUMBER)
		{
			//UE_LOG(LogTemp, Warning, TEXT("Beam: Le joueur bouge, arrêt du rayon !"));
			StopBeam();
			return;
		}
	}

	KiComponent->UpdateKiBar();
	CurrentLenght += GrowthRate * DeltaTime;

	UpdateBeam(CurrentLenght);
}

void ABeamBase::InitializeBeam(const FBeamAttackData& InBeamData, float InChargeLevel, AActor* InOwner)
{
	OwnerCharacter = InOwner;
	ChargeLevel = InChargeLevel;
	CurrentLenght = 0.0f;
	bIsFiring = false;
	BeamData = InBeamData;
	DamageTickInterval = InBeamData.DamageTickInterval;
	DamageCooldown = InBeamData.DamageCooldown;
	BaseDamage = InBeamData.Damage;
	MaxLength = InBeamData.MaxLength;
	GrowthRate = InBeamData.GrowthRate;

	KiComponent = OwnerCharacter->FindComponentByClass<UCharacterKiComponent>();
	StatsComponent = OwnerCharacter->FindComponentByClass<UStatsComponent>();

	if (!IsValid(OwnerCharacter))
	{
		UE_LOG(LogTemp, Error, TEXT("InitializeBeam: OwnerCharacter invalide"));
		return;
	}

	if (!KiComponent || !StatsComponent)
	{
		UE_LOG(LogTemp, Error, TEXT("❌ InitializeBeam: KiComponent ou StatsComponent NULL sur %s"), *OwnerCharacter->GetName());
		return; // Empêche le Tick de continuer sans dépendances
	}

	
	

	if (!KiComponent)
	{
		UE_LOG(LogTemp, Error, TEXT("InitializeBeam: KiComponent non trouvé sur Owner !"));
	}

	if (!StatsComponent)
	{
		UE_LOG(LogTemp, Warning, TEXT("InitializeBeam: StatsComponent non trouvé sur Owner."));
	}

	if (NiagaraComponent)
	{
		NiagaraComponent->SetFloatParameter(TEXT("BeamLength"), 0.0f);
	}

	//UE_LOG(LogTemp, Log, TEXT("InitializeBeam: Beam préparé avec ChargeLevel %.2f"), ChargeLevel);

	SetActorTickEnabled(true);
}


void ABeamBase::UpdateBeam(float NewLength)
{
	if (!NiagaraComponent)
	{
		UE_LOG(LogTemp, Error, TEXT("ABeamBase::UpdateBeam --> NiagaraComponent NULL"));
		return;

	}
	NiagaraComponent->SetFloatParameter(TEXT("BeamLength"), NewLength);

	if (!HitboxComponent)
	{
		UE_LOG(LogTemp, Error, TEXT("ABeamBase::UpdateBeam --> HitboxComponent NULL"));
		return;
	}

	FVector NewBoxExtend = FVector((NewLength / 100) * 0.05f, 1.0f, 1.0f);
	HitboxComponent->SetBoxExtent(NewBoxExtend);
	HitboxComponent->SetRelativeLocation(FVector(NewLength * 0.5f, 0.0f, 0.0f));
	//UE_LOG(LogTemp, Warning, TEXT("ABeamBase::UpdateBeam --> NewBoxExtended : X : %f, Y : %f, Z : %f"), NewBoxExtend.X, NewBoxExtend.Y, NewBoxExtend.Z);	
	FlipbookComponent->SetWorldScale3D(NewBoxExtend);
	//FVector OwnerRelativeLocation = OwnerCharacter->GetActorLocation();
	//FlipbookComponent->SetRelativeLocation(FVector(OwnerRelativeLocation.X + 5.0f, 0.0f, 0.0f));
}


void ABeamBase::StartChargingBeam()
{
	if (!OwnerCharacter || !KiComponent)
	{
		UE_LOG(LogTemp, Error, TEXT("ABeamBase::ChargingBeam --> Pas de OwnerCharacter ou de KiComponent"));
		return;
	}

	bIsCharging = true;
	bIsFiring = false;
	CurrentLenght = 0.0f;
	UE_LOG(LogTemp, Warning, TEXT("ABeamBase::StartChargingBeam() ---> Charge en cours..."));
}

void ABeamBase::ReleaseBeam()
{
	if (!OwnerCharacter || !KiComponent)
	{
		UE_LOG(LogTemp, Error, TEXT("ABeamBase::ChargingBeam --> Pas de OwnerCharacter ou de KiComponent"));
		return;
	}

	if (KiComponent)
	{
		
		SetActorTickEnabled(true);
		bIsCharging = false;
		StartFiringBeam();
		bIsFiring = true;
		//UE_LOG(LogTemp, Warning, TEXT("ABeamBase::ReleaseBeam: Rayon libéré !"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("ABeamBase::ReleaseBeam: Pas assez de ki pour lancer le rayon !"));
		StopBeam();
	}
}

void ABeamBase::StartFiringBeam()
{
	if (bIsFiring)
	{
		UE_LOG(LogTemp, Error, TEXT("ABeamBase::StartFiringBeam: Rayon déjà en cours de tir"));
		return;
	}
	UE_LOG(LogTemp, Warning, TEXT("ABeamBase::StartFiringBeam()"));
	// Lancer un tick de dégâts régulier

	if (OwnerCharacter)
	{
		if (UCapsuleComponent* Capsule = OwnerCharacter->GetComponentByClass<UCapsuleComponent>())
		{
			Capsule->SetCollisionResponseToChannel(ECC_BEAMTRACE, ECR_Ignore);
			UE_LOG(LogTemp, Warning, TEXT("ABeamBase::StartFiringBeam() --> Canal de collision modifié pour le tireur du rayon laser"));

		}
	}

	UE_LOG(LogTemp, Warning, TEXT("ABeamBase::StartFiringBeam() --> Beam actif ? %s"), *GetName());
	GetWorld()->GetTimerManager().SetTimer(
		DamageTickTimer,
		this,
		&ABeamBase::PerformBeamTraceAndDamage,
		BeamData.DamageTickInterval,
		true
	);

	// Rafraîchit la liste d’acteurs touchés
	GetWorld()->GetTimerManager().SetTimer(
		ClearDamagedActorsTimer,
		[this]() { RecentlyDamagedActors.Empty(); },
		BeamData.DamageCooldown,
		true
	);
}

void ABeamBase::StopFiringBeam()
{
	UE_LOG(LogTemp, Warning, TEXT("ABeamBase::StopFiringBeam()"));
}

void ABeamBase::StopBeam()
{
	bIsCharging = false;
	bIsFiring = false;
	if (OwnerCharacter)
	{
		if (UCapsuleComponent* Capsule = OwnerCharacter->FindComponentByClass<UCapsuleComponent>())
		{
			// Restaure la collision du personnage
			Capsule->SetCollisionResponseToChannel(ECC_BEAMTRACE, ECR_Overlap);
			UE_LOG(LogTemp, Warning, TEXT("ABeamBase::StartFiringBeam() --> Canal de collision modifié pour le tireur du rayon laser"));

		}
		if (UCharacterStateComponent* StateComponent = OwnerCharacter->FindComponentByClass<UCharacterStateComponent>())
		{
			StateComponent->ResetState();
		}
	}
	//StopFiringBeam();
	GetWorld()->GetTimerManager().ClearTimer(DamageTickTimer);
	GetWorld()->GetTimerManager().ClearTimer(ClearDamagedActorsTimer);
	Destroy();
}


void ABeamBase::PerformBeamTraceAndDamage()
{
	UE_LOG(LogTemp, Warning, TEXT("ABeamBase::PerformBeamTraceAndDamage()"));
	if (!bIsFiring || !OwnerCharacter)
	{
		UE_LOG(LogTemp, Error, TEXT("ABeamBase::PerformBeamTraceAndDamage() --> bIsFiring false OU OwnerCharacter NULL"));
		return;
	}

	UE_LOG(LogTemp, Warning, TEXT(" ABeamBase::PerformBeamTraceAndDamage() --> ECC_BEAMTRACE value: %d"), (int32)ECC_BEAMTRACE);
	FVector Start = GetActorLocation();
	FVector Direction = OwnerCharacter->GetActorForwardVector();
	FVector End = Start + FVector(Direction.X * beamDirectionMultiplier, Direction.Y, Direction.Z) * CurrentLenght;
	//UE_LOG(LogTemp, Warning, TEXT("Actor Direction X : %f, Y : %f, Z : %f" ), Direction.X, Direction.Y, Direction.Z);

	FVector BeamCenter = GetActorLocation() + OwnerCharacter->GetActorForwardVector() * (CurrentLenght * 0.5f);
	FCollisionShape BeamShape = FCollisionShape::MakeBox(FVector(CurrentLenght * 0.5f, 20.f, 20.f));

	TArray<FOverlapResult> Overlaps;
	FCollisionQueryParams Params;
	Params.AddIgnoredActor(this);
	Params.AddIgnoredActor(OwnerCharacter);

	bool bHit = GetWorld()->OverlapMultiByChannel(
		Overlaps,
		BeamCenter,
		FQuat::Identity,
		ECC_BEAMTRACE,
		BeamShape,
		Params
	);

	FColor DebugColor = bHit ? FColor::Green : FColor::Red;
	DrawDebugBox(
		GetWorld(),
		BeamCenter,
		BeamShape.GetExtent(),
		DebugColor,
		false,
		0.05f,
		0,
		2.0f
	);


	if (bHit)
	{
		for (FOverlapResult& Result : Overlaps)
		{
			AActor* HitActor = Result.GetActor();

			if (!HitActor || RecentlyDamagedActors.Contains(HitActor) || HitActor == OwnerCharacter)
			{
				UE_LOG(LogTemp, Error, TEXT("ABeamBase::PerformBeamTraceAndDamage() --> !HitActor || RecentlyDamagedActors.Contains(HitActor) || HitActor == OwnerCharacter !"));
				continue;
			}
			ApplyBeamDamage(HitActor);

			// Arrêter le rayon si l’ennemi est trop fort
			if (AMyEnemyBase* Enemy = Cast<AMyEnemyBase>(HitActor))
			{
				auto EnemyStats = Enemy->FindComponentByClass<UStatsComponent>();
				if (EnemyStats && EnemyStats->CharacterStats.MaxKi > StatsComponent->CurrentKi)
				{
					UE_LOG(LogTemp, Warning, TEXT("ABeamBase::PerformBeamTraceAndDamage() --> Kamehameha stoppé par %s !"), *HitActor->GetName());
					StopBeam();
					return;
				}
			}

			RecentlyDamagedActors.Add(HitActor);
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("ABeamBase::PerformBeamTraceAndDamage() --> bHit FALSE !"));
	}
}

void ABeamBase::OnBeamOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (!OtherActor || OtherActor == OwnerCharacter)
	{
		return;
	}

	if (RecentlyDamagedActors.Contains(OtherActor))
	{
		return;
	}

	ApplyBeamDamage(OtherActor);

	RecentlyDamagedActors.Add(OtherActor);

	if (AMyEnemyBase* Enemy = Cast<AMyEnemyBase>(OtherActor))
	{
		UStatsComponent* EnemyStats = Enemy->FindComponentByClass<UStatsComponent>();
		if (EnemyStats && StatsComponent && EnemyStats->CharacterStats.MaxKi > StatsComponent->CurrentKi)
		{
			UE_LOG(LogTemp, Warning, TEXT("💥 Le Kamehameha est stoppé par %s (MaxKi supérieur) !"), *Enemy->GetName());
			return;
		}
	}
}

void ABeamBase::ApplyBeamDamage(AActor* Target)
{
	if (!Target || !StatsComponent) return;

	FDamageEvent DamageEvent;
	AController* InstigatorController = OwnerCharacter ? OwnerCharacter->GetInstigatorController() : nullptr;

	float FinalDamage = BeamData.Damage * 1; //Remplacer 1 par chargeLevel;

	float Applied = Target->TakeDamage(FinalDamage, DamageEvent, InstigatorController, this);

	UE_LOG(LogTemp, Warning, TEXT("?? Rayon touche %s (%f dégâts)"), *Target->GetName(), Applied);
}
