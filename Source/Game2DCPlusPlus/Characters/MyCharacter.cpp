#include "MyCharacter.h"
#include "CharacterCombatComponent.h"
#include "CharacterKiComponent.h"
#include "CharacterAnimationComponent.h"
#include "CharacterAbilitiesComponent.h"
#include "CharacterInputComponent.h"
#include "Components/CapsuleComponent.h"
#include "Camera/CameraComponent.h"
#include "PaperFlipbookComponent.h"
#include "Components/BoxComponent.h"

#define ECC_TRACEHITBOX ECC_GameTraceChannel1


AMyCharacter::AMyCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	GetSprite()->SetHiddenInGame(true);
	GetSprite()->SetVisibility(false);
	GetSprite()->SetComponentTickEnabled(false);

	// === Root / Capsule ===
	GetCapsuleComponent()->InitCapsuleSize(42.0f, 96.0f);
	RootComponent = GetCapsuleComponent();

	GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	GetCapsuleComponent()->SetCollisionObjectType(ECollisionChannel::ECC_Pawn);
	GetCapsuleComponent()->SetCollisionResponseToAllChannels(ECR_Block);
	GetCapsuleComponent()->SetCollisionResponseToChannel(ECC_Visibility, ECR_Ignore);
	GetCapsuleComponent()->SetCollisionResponseToChannel(ECC_Camera, ECR_Ignore);

	// === Components custom ===
	CombatComponent = CreateDefaultSubobject<UCharacterCombatComponent>(TEXT("CombatComponent"));
	KiComponent = CreateDefaultSubobject<UCharacterKiComponent>(TEXT("KiComponent"));
	AbilitiesComponent = CreateDefaultSubobject<UCharacterAbilitiesComponent>(TEXT("AbilitiesComponent"));
	InputHandler = CreateDefaultSubobject<UCharacterInputComponent>(TEXT("InputHandler"));
	CharacterAnimationComponent = CreateDefaultSubobject<UCharacterAnimationComponent>(TEXT("CharacterAnimationComponent"));
	StatsComponent = CreateDefaultSubobject<UStatsComponent>(TEXT("StatsComponent"));


	// === Character flipbook (perso) ===
	CharacterFlipbook = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("CharacterFlipbook"));
	CharacterFlipbook->SetupAttachment(RootComponent);


	//MyAnimationComponent = CreateDefaultSubobject<UCharacterAnimationComponent>(TEXT("MyAnimationComponent"));


	// === Sword flipbook (arme visible) ===
	//SwordFlipbook = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("SwordFlipbook"));
	//SwordFlipbook->SetupAttachment(CharacterFlipbook, TEXT("Weapon socket")); // 👈 ton socket sur les sprites
	//SwordFlipbook->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	//SwordFlipbook->SetGenerateOverlapEvents(false);

	// === Caméra ===
	CharacterCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("CharacterCamera"));
	CharacterCamera->SetupAttachment(RootComponent);

	// === Hitbox de l'épée ===
	//SwordHitbox->SetupAttachment(CharacterFlipbook);
	//SwordHitbox->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	//SwordHitbox->SetCollisionProfileName(TEXT("OverlapAllDynamic"));
	//SwordHitbox->SetNotifyRigidBodyCollision(true);


	// === Mouvements ===
	GetCharacterMovement()->JumpZVelocity = 1000.0f;
	GetCharacterMovement()->AirControl = 1.0f;
	GetCharacterMovement()->GravityScale = 1.5f;
	GetCharacterMovement()->BrakingDecelerationFalling = 50.0f;
	GetCharacterMovement()->MaxWalkSpeed = 600.0f;
	GetCharacterMovement()->MaxAcceleration = 1000.0f;

	// === Saut multiple ===
	MaxJumpCount = 2;
	JumpMaxCount = MaxJumpCount;

	// === Logs de sécurité ===


	/********************
	if (!SwordFlipbook)
	{
		UE_LOG(LogTemp, Error, TEXT("❌ SwordFlipbook est NULL !"));
	}
	*********************/

}


void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();
	InitializeInputHandler();

	CharacterAnimationComponent->CharacterRole = ERole::Player;

	if (!GetCapsuleComponent())
	{
		UE_LOG(LogTemp, Error, TEXT("ATTENTION: CapsuleComponent est toujours NULL !"));
	}

	UCharacterMovementComponent* MoveComp = GetCharacterMovement();
	if (MoveComp)
	{
		//UE_LOG(LogTemp, Warning, TEXT("CharacterMovementComponent trouve !"));
		//UE_LOG(LogTemp, Warning, TEXT("CharacterMovementComponent trouvé !"));

		// Vérifions les paramètres du CharacterMovementComponent
		//UE_LOG(LogTemp, Warning, TEXT("Gravity Scale: %f"), MoveComp->GravityScale);
		//UE_LOG(LogTemp, Warning, TEXT("Max Walk Speed: %f"), MoveComp->MaxWalkSpeed);
		//UE_LOG(LogTemp, Warning, TEXT("Movement Mode: %d"), (int32)MoveComp->MovementMode);
		MoveComp->SetMovementMode(MOVE_Walking);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("CharacterMovementComponent est NULL !"));
	}

	//GetWorld()->GetTimerManager().SetTimerForNextTick(this, &AMyCharacter::InitializeInputHandler);

	if (RootComponent)
	{
		//UE_LOG(LogTemp, Warning, TEXT("RootComponent trouve !"));

		UPrimitiveComponent* Capsule = Cast<UPrimitiveComponent>(RootComponent);
		if (Capsule)
		{
			//UE_LOG(LogTemp, Warning, TEXT("Capsule de collision trouvee !"));

			// Vérifions si la capsule bloque le mouvement
			if (Capsule->GetCollisionEnabled() != ECollisionEnabled::QueryAndPhysics)
			{
				UE_LOG(LogTemp, Error, TEXT("ATTENTION: La collision de la capsule est désactivée !"));
				Capsule->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
			}
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("La capsule de collision est NULL !"));
		}
	}


	if (InputHandler)
	{
		//UE_LOG(LogTemp, Warning, TEXT("Aucun InputHandler trouve !"));
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("InputHandler est NULL dans AMyCharacter !"));
	}

	if (GetCharacterMovement())
	{
		//UE_LOG(LogTemp, Warning, TEXT("CharacterMovementComponent détecté, tout va bien !"));
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("CharacterMovementComponent est NULL, problème de mouvement !"));
	}

	/** Initialisation des composants **/
	if (KiComponent)
	{
		KiComponent->InitializeKiSystem();
	}

	if (StatsComponent)
	{
		StatsComponent->CurrentHealth = StatsComponent->MaxHealth;
	}


	/*********************************
	if (CombatComponent)
	{
		AMyWeaponBase* DefaultWeapon = GetWorld()->SpawnActor<AMyWeaponBase>(DefaultWeaponClass);
		if (DefaultWeapon)
		{
			CombatComponent->EquipWeapon(DefaultWeapon);
			UE_LOG(LogTemp, Warning, TEXT("MyCharacter : Arme équipée : Default Weapon."));
		}
		//UE_LOG(LogTemp, Warning, TEXT("CharacterCombatComponent : Initialisation du systeme de combat avec une arme."));
	}

	if (CombatComponent)
	{
		AMyFistBase* FistBase = GetWorld()->SpawnActor<AMyFistBase>();
		if (FistBase)
		{
			CombatComponent->EquipWeapon(FistBase);
			UE_LOG(LogTemp, Warning, TEXT("MyCharacter : Arme équipée : Poings."));
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("MyCharacter : MyFistBase n'est pas reconnu."));

		}
	}
	********************************************/
}



void AMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

UPaperFlipbookComponent* AMyCharacter::GetCharacterFlipbook() const 
{
	return CharacterFlipbook;
}


void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (InputHandler)
	{
		//UE_LOG(LogTemp, Warning, TEXT("InputHandler trouvé, liaison des inputs..."));
		InputHandler->BindInputs(PlayerInputComponent);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("InputHandler est NULL, impossible de lier les inputs !"));
	}	
}


void AMyCharacter::MoveRight(float Value)
{
	AddMovementInput(FVector(1.0f, 0.0f, 0.0f), Value);
	bIsWalking = FMath::Abs(Value) > 0.1f;

	if (Value != 0.0f && CharacterAnimationComponent)
	{
		CharacterAnimationComponent->SetFacingDirection(Value);
	}
}


void AMyCharacter::InitializeInputHandler()
{
	if (InputHandler)
	{
		//UE_LOG(LogTemp, Warning, TEXT("InitializeInputHandler: InputHandler trouve, liaison des inputs..."));
		InputHandler->BindInputs(InputComponent);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("InitializeInputHandler: InputHandler est NULL !"));
	}
}

float AMyCharacter::TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, AController* EventInvestigator, AActor* DamageCauser)
{
	if (StatsComponent)
	{
		StatsComponent->ApplyDamages(DamageAmount);
		UE_LOG(LogTemp, Warning, TEXT("💔 %s a reçu %f dégâts via TakeDamage."), *GetName(), DamageAmount);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("❌ StatsComponent est NULL sur %s !"), *GetName());
	}

	return DamageAmount;
}

void AMyCharacter::SetCollisionEnabled(bool Enabled)
{
	if (UCapsuleComponent* Capsule = GetCapsuleComponent())
	{
		Capsule->SetCollisionResponseToChannel(ECC_TRACEHITBOX, Enabled ? ECR_Block : ECR_Ignore);
		UE_LOG(LogTemp, Warning, TEXT("🎯 Collision canal TRACEHITBOX modifié"));
	}
}

void AMyCharacter::Landed(const FHitResult& Hit)
{
	Super::Landed(Hit);
	JumpCurrentCount = 0;
}

void AMyCharacter::Jump()
{
	Super::Jump();
}



