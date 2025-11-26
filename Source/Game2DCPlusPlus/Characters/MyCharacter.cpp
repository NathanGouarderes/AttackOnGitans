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

#define ECC_BEAMOBJECT ECC_GameTraceChannel3
#define ECC_TRACEHITBOX ECC_GameTraceChannel1
#define ECC_BEAMTRACE ECC_GameTraceChannel2



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
	GetCapsuleComponent()->SetCollisionResponseToChannel(ECC_BEAMTRACE, ECR_Overlap);
	GetCapsuleComponent()->SetCollisionResponseToChannel(ECC_BEAMOBJECT, ECR_Overlap);


	// === Components custom ===
	InputHandler = CreateDefaultSubobject<UCharacterInputComponent>(TEXT("InputHandler"));


	// === Character flipbook (perso) ===
	CharacterFlipbook = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("CharacterFlipbook"));
	CharacterFlipbook->SetupAttachment(RootComponent);



	// === Caméra ===
	CharacterCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("CharacterCamera"));
	CharacterCamera->SetupAttachment(RootComponent);

	GetDatasFromCharacterDataTable();

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
}


void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();
	InitializeInputHandler();

	AnimationComponent->CharacterRole = ERole::Player;

	
	SetDatasFromCharacterDataTable("CharacterBase");

	

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
		UE_LOG(LogTemp, Error, TEXT(" AMyCharacter::BeginPlay() CharacterMovementComponent est NULL !"));
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
				UE_LOG(LogTemp, Error, TEXT("AMyCharacter::BeginPlay() La collision de la capsule est désactivée !"));
				Capsule->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
			}
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("AMyCharacter::BeginPlay() La capsule de collision est NULL !"));
		}
	}


	if (InputHandler)
	{
		//UE_LOG(LogTemp, Warning, TEXT("Aucun InputHandler trouve !"));
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("AMyCharacter::BeginPlay() InputHandler est NULL dans AMyCharacter !"));
	}

	if (GetCharacterMovement())
	{
		//UE_LOG(LogTemp, Warning, TEXT("CharacterMovementComponent détecté, tout va bien !"));
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("AMyCharacter::BeginPlay() CharacterMovementComponent est NULL, problème de mouvement !"));
	}

	

}



void AMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//DebugDrawHitboxes();
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
		UE_LOG(LogTemp, Error, TEXT(" AMyCharacter::GetCharacterFlipbook() InputHandler est NULL, impossible de lier les inputs !"));
	}	
}


void AMyCharacter::MoveRight(float Value)
{
	AddMovementInput(FVector(1.0f, 0.0f, 0.0f), Value);
	bIsWalking = FMath::Abs(Value) > 0.1f;

	if (Value != 0.0f && AnimationComponent)
	{
		AnimationComponent->SetFacingDirection(Value);
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
		UE_LOG(LogTemp, Error, TEXT(" AMyCharacter::InitializeInputHandler() InputHandler est NULL !"));
	}
}

float AMyCharacter::TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, AController* EventInvestigator, AActor* DamageCauser)
{
	if (StatsComponent)
	{
		StatsComponent->ApplyDamages(DamageAmount);
		UE_LOG(LogTemp, Warning, TEXT("AMyCharacter::InitializeInputHandler() 💔 %s a reçu %f dégâts via TakeDamage."), *GetName(), DamageAmount);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("AMyCharacter::InitializeInputHandler() ❌ StatsComponent est NULL sur %s !"), *GetName());
	}

	return DamageAmount;
}

void AMyCharacter::SetCollisionEnabled(bool Enabled)
{
	if (UCapsuleComponent* Capsule = GetCapsuleComponent())
	{
		Capsule->SetCollisionResponseToChannel(ECC_TRACEHITBOX, Enabled ? ECR_Block : ECR_Ignore);
		UE_LOG(LogTemp, Warning, TEXT("AMyCharacter::InitializeInputHandler() 🎯 Collision canal TRACEHITBOX modifié"));
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


