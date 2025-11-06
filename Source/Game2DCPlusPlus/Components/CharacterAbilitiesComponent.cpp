#include "CharacterAbilitiesComponent.h"
#include "CharacterCombatComponent.h"
#include "CharacterAnimationComponent.h"
#include "../Characters/MyCharacter.h"
#include "../Abilities/Projectiles/KiBall.h"
#include "../Abilities/Projectiles/MyProjectileBase.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "../Data/FBeamAttackData.h"
#include "Kismet/GameplayStatics.h"

#define ECC_TRACEHITBOX ECC_GameTraceChannel1

UCharacterAbilitiesComponent::UCharacterAbilitiesComponent()
{
	PrimaryComponentTick.bCanEverTick = false;


	// Initialisation des valeurs par défaut
	KiCostForAttack = 0.f;
	MaxKi = 100.f;
	Strength = 10.f;
	SwordDamages = 15.f;

	DashDistance = 1000.0f;
	DashCooldown = 0.3f;
	DashDuration = 0.5f;
	AttackDamage = 10.0f;
	bCanDash = true;
	bIsAttacking = false;

	static ConstructorHelpers::FObjectFinder<UDataTable> BeamDT(
		TEXT("/Game/DataTables/DT_BeamAttackData.DT_BeamAttackData")
	);

	if (BeamDT.Succeeded())
	{
		BeamDataTable = BeamDT.Object;
		UE_LOG(LogTemp, Warning, TEXT("✅ BeamDataTable chargée depuis le constructeur"));
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("❌ Impossible de charger DT_BeamAttackData !"));
	}
}

void UCharacterAbilitiesComponent::BeginPlay()
{
	Super::BeginPlay();

	OwnerCharacter = Cast<ACharacter>(GetOwner());
	if (!OwnerCharacter)
	{
		UE_LOG(LogTemp, Error, TEXT("UCharacterAbilitiesComponent : Impossible de recuperer OwnerCharacter !"));
		return;  // On quitte pour eviter un crash
	}

	AnimationComponent = OwnerCharacter->FindComponentByClass<UCharacterAnimationComponent>();
	if (!AnimationComponent)
	{
		UE_LOG(LogTemp, Error, TEXT("UCharacterAbilitiesComponent : Impossible de recuperer AnimationComponent !"));
		return;  // On quitte pour eviter un crash
	}

	StateComponent = OwnerCharacter->FindComponentByClass<UCharacterStateComponent>();
	if (!StateComponent)
	{
		UE_LOG(LogTemp, Error, TEXT("UCharacterAbilitiesComponent : Impossible de recuperer StateComponent !"));
		return;  // On quitte pour eviter un crash
	}
	StandComponent = OwnerCharacter->FindComponentByClass<UStandComponent>();

	if (!StandComponent)
	{
		UE_LOG(LogTemp, Error, TEXT("UCharacterAbilitiesComponent : Impossible de recuperer StandComponent !"));
	}

	if (KiComponent) {
		UE_LOG(LogTemp, Warning, TEXT("KiComponent valide à l'initialisation (%s)"), *KiComponent->GetName());

	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("❌ UCharacterAbilitiesComponent::BeginPlay() --> KiComponent NULL à l'initialisation !"));
	}

	const FBeamAttackData* Row = BeamDataTable->FindRow<FBeamAttackData>(FName("Kamehameha"), TEXT("Aled"));
	if (Row)
	{
		KamehamehaData = *Row;
		SetCurrentBeam(KamehamehaData.BeamClass.LoadSynchronous());
		CurrentBeamSelected = GetCurrentBeam();
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("UCharacterAbilitiesComponent : Row NULL"));
		return;
	}
	if (!GetCurrentBeam())
	{
		UE_LOG(LogTemp, Error, TEXT("UCharacterAbilitiesComponent : CurrentBeamSelected NULL"));
	}
	UE_LOG(LogTemp, Warning, TEXT("TEST DE FOUUUUUUUUU : %f"), KamehamehaData.Damage);
	//UE_LOG(LogTemp, Warning, TEXT("UCharacterAbilitiesComponent : Initialisation terminee"));

	if (!GetWorld())
	{
		UE_LOG(LogTemp, Error, TEXT("❌ StartChargingBeam : GetWorld() NULL"));
		return;
	}
}

void UCharacterAbilitiesComponent::InitializeKiComponent(UCharacterKiComponent* InKi)
{
	KiComponent = InKi;
	if (KiComponent)
	{
		UE_LOG(LogTemp, Warning, TEXT("AbilitiesComponent lié à KiComponent pour %s"), *GetOwner()->GetName());
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("❌ UCharacterAbilitiesComponent::InitializeKiComponent - KiComponent NULL"));
	}
}


void UCharacterAbilitiesComponent::CastProjectile(EProjectileType Type)
{
	TSubclassOf<AActor> SelectedProjectile;
	FProjectileData ProjectileData;

	
}



void UCharacterAbilitiesComponent::Dodge()
{
	if (!bCanDash || !OwnerCharacter) return;
	if (!AnimationComponent || !AnimationComponent->FlipbookComponent) return;
	if (!StateComponent || !StateComponent->CanEnterState(EState::Dodging))	return;
	StateComponent->SetState(EState::Dodging);
	UCapsuleComponent* Capsule = OwnerCharacter->GetCapsuleComponent();
	if (!Capsule)
	{
		UE_LOG(LogTemp, Error, TEXT("UCharacterAbilitiesComponent::Dodge() --> Pas de Capsule"));
		return;
	}
	Capsule->SetCollisionResponseToChannel(ECC_GameTraceChannel1, ECR_Ignore); // AttackTrace

	bool bFacingRight = (AnimationComponent->FlipbookComponent->GetRelativeRotation().Yaw == 180.0f);
	FVector DashDirection = FVector::ZeroVector;
	FVector Velocity = OwnerCharacter->GetVelocity();
	bool bIsMoving = FMath::Abs(Velocity.X) > 10.0f;

	if (bIsMoving)
	{
		// Si le personnage est en mouvement, dash dans la direction du mouvement
		DashDirection = (Velocity.X > 0) ? FVector(1, 0, 0) : FVector(-1, 0, 0);
	}
	else
	{
		// Si le personnage est immobile, dash en arrière
		DashDirection = bFacingRight ? FVector(-1, 0, 0) : FVector(1, 0, 0);
	}
	FVector DashVelocity = DashDirection * DashDistance / DashDuration;

	OwnerCharacter->LaunchCharacter(DashVelocity, true, true);
	bCanDash = false;

	//UE_LOG(LogTemp, Warning, TEXT("Dash effectue"));

	GetWorld()->GetTimerManager().SetTimer(DashTimerHandle, this, &UCharacterAbilitiesComponent::ResetDash, DashCooldown, false);
}

void UCharacterAbilitiesComponent::ResetDash()
{
	bCanDash = true;
	OwnerCharacter->GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics); // réactive
	//UE_LOG(LogTemp, Warning, TEXT("Dash reinitialise"));
}

void UCharacterAbilitiesComponent::InitializeAllComponents(UCharacterKiComponent* InKi, UStatsComponent* InStats)
{
	if (!InKi || !InStats)
	{
		UE_LOG(LogTemp, Error, TEXT("InitializeAllComponents: InKi ou InStats NULL sur %s"), *GetOwner()->GetName());
		return;
	}

	KiComponent = InKi;
	StatsComponent = InStats;

	UE_LOG(LogTemp, Warning, TEXT("AbilitiesComponent a reçu KiComponent (%s) et StatsComponent (%s)"),
		*GetNameSafe(KiComponent), *GetNameSafe(StatsComponent));
}

void UCharacterAbilitiesComponent::StartChargingBeam()
{

	if (!KiComponent)
	{
		UE_LOG(LogTemp, Error, TEXT("StartChargingBeam: KiComponent NULL sur %s"), *GetOwner()->GetName());
		return;
	}
	UE_LOG(LogTemp, Warning, TEXT("UCharacterAbilitiesComponent::StartChargingBeam"));
	if (bIsChargingBeam)
	{
		UE_LOG(LogTemp, Error, TEXT("UCharacterAbilitiesComponent::StartChargingBeam: Charge du rayon déjà en cours"));
		return;
	}
	if (!StateComponent || !StateComponent->CanEnterState(EState::ChargingBeam))
	{
		UE_LOG(LogTemp, Warning, TEXT("Impossible de démarrer la charge du rayon (état incompatible)"));
		return;
	}
	if (!KiComponent)
	{
		UE_LOG(LogTemp, Error, TEXT("UCharacterAbilitiesComponent::StartChargingBeam: KiComponent NULL"));
		return;
	}

	StateComponent->SetState(EState::ChargingBeam);
	bIsChargingBeam = true;
	if (AnimationComponent)
	{
		AnimationComponent->PlayChangingBeamAnimation(KamehamehaData);
	}


	GetWorld()->GetTimerManager().SetTimer(
		BeamVisualTimer,
		this,
		&UCharacterAbilitiesComponent::UpdateChargingBeamVisual,
		0.05f,
		true // répété
	);


	GetWorld()->GetTimerManager().SetTimer(
		BeamChargeTimer,
		this,
		&UCharacterAbilitiesComponent::ConsumeKiWhileChargingBeam,
		0.1f,
		true
	);

	

}

void UCharacterAbilitiesComponent::ReleaseBeam()
{
	UE_LOG(LogTemp, Warning, TEXT("UCharacterAbilitiesComponent::ReleaseBeam"));
	if(!AnimationComponent)
	{
		UE_LOG(LogTemp, Error, TEXT("UCharacterAbilitiesComponent::ReleaseBeam PAS D'ANIMATIONCOMPONENT"));
		return;
	}


	if (!bIsChargingBeam)
	{
		UE_LOG(LogTemp, Error, TEXT("ReleaseBeam appelé sans charge active."));
		return;
	}
	bIsChargingBeam = false;
	StateComponent->SetState(EState::FiringBeam);

	AnimationComponent->UnfreezeAnimation();

	GetWorld()->GetTimerManager().ClearTimer(BeamVisualTimer);

	if (ChargingBeamSphere)
	{
		ChargingBeamSphere->Destroy();
		ChargingBeamSphere = nullptr;
	}

	if(!BeamClass || !OwnerCharacter)
	{
		UE_LOG(LogTemp, Error, TEXT("ReleaseBeam --> BeamClass ou Owner NULL"));
		return;
	}

	FActorSpawnParameters SpawnParams;
    SpawnParams.Owner = OwnerCharacter;
    SpawnParams.Instigator = OwnerCharacter->GetInstigator();
    SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

    FVector SpawnLocation = OwnerCharacter->GetActorLocation() + FVector(50.f, 0.f, 50.f);
    FRotator SpawnRotation = OwnerCharacter->GetActorRotation();

	
	ABeamBase* Beam = GetWorld()->SpawnActor<ABeamBase>(BeamClass, SpawnLocation, SpawnRotation, SpawnParams);
	
	if (Beam)
	{
		if (GetIsFacingRight())
		{
			UE_LOG(LogTemp, Warning, TEXT("ReleaseBeam FacindRight"));
			Beam->beamDirectionMultiplier = -1;
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("ReleaseBeam NOT FacindRight"));
			Beam->beamDirectionMultiplier = 1;
		}
		Beam->AttachToComponent(OwnerCharacter->GetRootComponent(), FAttachmentTransformRules::SnapToTargetIncludingScale);
		Beam->InitializeBeam(KamehamehaData, 1.0f, OwnerCharacter);
		Beam->ReleaseBeam();  // ici bIsCharging=false, bIsFiring=true
	}

	GetWorld()->GetTimerManager().ClearTimer(BeamChargeTimer);
}


void UCharacterAbilitiesComponent::ConsumeKiWhileChargingBeam()
{
	if (!KiComponent)
	{
		UE_LOG(LogTemp, Error, TEXT("UCharacterAbilitiesComponent::ConsumeKiWhileChargingBeam : KiComponent NULL"));
		return;
	}
	KiComponent->TryConsumeKi(2.0f);
}

void UCharacterAbilitiesComponent::SetCurrentBeam(TSubclassOf<ABeamBase> BeamToSelect)
{
	CurrentBeamSelected = BeamToSelect;
}

void UCharacterAbilitiesComponent::UpdateChargingBeamVisual()
{
	if (!AnimationComponent || !AnimationComponent->FlipbookComponent)
		return;

	UPaperFlipbookComponent* Flipbook = AnimationComponent->FlipbookComponent;

	// Si on n’est plus en train de charger, on nettoie et on stoppe le timer
	if (!bIsChargingBeam)
	{
		if (ChargingBeamSphere)
		{
			ChargingBeamSphere->Destroy();
			ChargingBeamSphere = nullptr;
		}
		GetWorld()->GetTimerManager().ClearTimer(BeamVisualTimer);
		return;
	}

	// Si le socket existe sur cette frame
	if (Flipbook->DoesSocketExist("ChargeSocket"))
	{
		
		FVector SocketLoc = Flipbook->GetSocketLocation("ChargeSocket");
		//UE_LOG(LogTemp, Warning, TEXT("ChagrSocket : X: %f, Y: %f, Z: %f"), SocketLoc.X, SocketLoc.Y, SocketLoc.Z);

		// Spawn la boule si elle n’existe pas encore
		if (!ChargingBeamSphere)
		{
			FActorSpawnParameters Params;
			Params.Owner = OwnerCharacter;
			Params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

			AChargingBeamSphere* Sphere = GetWorld()->SpawnActor<AChargingBeamSphere>(
				BP_ChargingBeamSphere.LoadSynchronous(),
				SocketLoc,
				FRotator::ZeroRotator,
				Params
			);

			if (Sphere)
			{
				UE_LOG(LogTemp, Warning, TEXT("✅ AChargingBeamSphere Spawned à %s"), *SocketLoc.ToString());
				ChargingBeamSphere = Sphere;
				Sphere->SetChargingBeamSphereFlipook(KamehamehaData.ChargingSphereAnimation.LoadSynchronous());
			}
		}
		else
		{
			ChargingBeamSphere->SetActorLocation(SocketLoc);
		}
	}
	else
	{
		// Si le socket n’existe plus (ex: retour idle)
		if (ChargingBeamSphere)
		{
			ChargingBeamSphere->Destroy();
			ChargingBeamSphere = nullptr;
		}
	}
}



TSubclassOf<ABeamBase> UCharacterAbilitiesComponent::GetCurrentBeam()
{
	return CurrentBeamSelected;
}

bool UCharacterAbilitiesComponent::GetIsChargingBeam()
{
	return bIsChargingBeam;
}

bool UCharacterAbilitiesComponent::GetIsFacingRight()
{
	try
	{
		if (AnimationComponent->bIsFacingRight)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	catch (const std::exception&)
	{
		UE_LOG(LogTemp, Warning, TEXT("UCharacterAbilitiesComponent::GetIsFacingRight() ERREUR"));
	}
}

void UCharacterAbilitiesComponent::SummonStand()
{
	UE_LOG(LogTemp, Warning, TEXT("UCharacterAbilitiesComponent::SummonStand() -->"));
	StandComponent->SummonStand();
}