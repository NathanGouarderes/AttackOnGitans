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

AMyCharacter::AMyCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	GetCapsuleComponent()->InitCapsuleSize(42.0f, 96.0f);
	RootComponent = GetCapsuleComponent();

	GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	GetCapsuleComponent()->SetCollisionObjectType(ECollisionChannel::ECC_Pawn);
	GetCapsuleComponent()->SetCollisionResponseToAllChannels(ECR_Block);
	GetCapsuleComponent()->SetCollisionResponseToChannel(ECC_Visibility, ECR_Ignore);
	GetCapsuleComponent()->SetCollisionResponseToChannel(ECC_Camera, ECR_Ignore);

	/** Création des composants **/
	CombatComponent = CreateDefaultSubobject<UCharacterCombatComponent>(TEXT("CombatComponent"));
	KiComponent = CreateDefaultSubobject<UCharacterKiComponent>(TEXT("KiComponent"));
	AnimationComponent = CreateDefaultSubobject<UCharacterAnimationComponent>(TEXT("AnimationComponent"));
	AbilitiesComponent = CreateDefaultSubobject<UCharacterAbilitiesComponent>(TEXT("AbilitiesComponent"));
	InputHandler = CreateDefaultSubobject<UCharacterInputComponent>(TEXT("InputHandler"));

	/** Flipbook pour l’animation du personnage **/
	CharacterFlipbook = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("CharacterFlipbook"));
	CharacterFlipbook->SetupAttachment(RootComponent);

	/** Caméra **/
	CharacterCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("CharacterCamera"));
	CharacterCamera->SetupAttachment(RootComponent);

	/** Hitbox de l’épée **/
	SwordHitbox = CreateDefaultSubobject<UBoxComponent>(TEXT("SwordHitbox"));
	SwordHitbox->SetupAttachment(CharacterFlipbook);
	SwordHitbox->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	SwordHitbox->SetCollisionProfileName(TEXT("OverlapAllDynamic"));
	SwordHitbox->SetNotifyRigidBodyCollision(true);
}

void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();
	InitializeInputHandler();

	if (GetCapsuleComponent())
	{
		UE_LOG(LogTemp, Warning, TEXT("CapsuleComponent trouve !"));
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("ATTENTION: CapsuleComponent est toujours NULL !"));
	}

	UCharacterMovementComponent* MoveComp = GetCharacterMovement();
	if (MoveComp)
	{
		UE_LOG(LogTemp, Warning, TEXT("CharacterMovementComponent trouve !"));
		UE_LOG(LogTemp, Warning, TEXT("CharacterMovementComponent trouvé !"));

		// Vérifions les paramètres du CharacterMovementComponent
		UE_LOG(LogTemp, Warning, TEXT("Gravity Scale: %f"), MoveComp->GravityScale);
		UE_LOG(LogTemp, Warning, TEXT("Max Walk Speed: %f"), MoveComp->MaxWalkSpeed);
		UE_LOG(LogTemp, Warning, TEXT("Movement Mode: %d"), (int32)MoveComp->MovementMode);
		MoveComp->SetMovementMode(MOVE_Walking);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("CharacterMovementComponent est NULL !"));
	}

	//GetWorld()->GetTimerManager().SetTimerForNextTick(this, &AMyCharacter::InitializeInputHandler);

	if (RootComponent)
	{
		UE_LOG(LogTemp, Warning, TEXT("RootComponent trouve !"));

		UPrimitiveComponent* Capsule = Cast<UPrimitiveComponent>(RootComponent);
		if (Capsule)
		{
			UE_LOG(LogTemp, Warning, TEXT("Capsule de collision trouvee !"));

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
		UE_LOG(LogTemp, Warning, TEXT("Aucun InputHandler trouve !"));
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("InputHandler est NULL dans AMyCharacter !"));
	}

	if (GetCharacterMovement())
	{
		UE_LOG(LogTemp, Warning, TEXT("CharacterMovementComponent détecté, tout va bien !"));
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

	if (CombatComponent)
	{
		UE_LOG(LogTemp, Warning, TEXT("CharacterCombatComponent : Initialisation du systeme de combat."));
	}
}

void AMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	/** Mise à jour des animations en fonction du mouvement **/
	if (AnimationComponent)
	{
		AnimationComponent->UpdateAnimation();
	}
}

void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (InputHandler)
	{
		UE_LOG(LogTemp, Warning, TEXT("InputHandler trouvé, liaison des inputs..."));
		InputHandler->BindInputs(PlayerInputComponent);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("InputHandler est NULL, impossible de lier les inputs !"));
	}
}


void AMyCharacter::MoveRight(float Value)
{
	if (Value != 0.0f)
	{
		AddMovementInput(FVector(1.0f, 0.0f, 0.0f), Value);
		CharacterFlipbook->SetRelativeRotation(FRotator(0.0f, (Value > 0.0f) ? 180.0f : 0.0f, 0.0f));
	}
}


void AMyCharacter::InitializeInputHandler()
{
	if (InputHandler)
	{
		UE_LOG(LogTemp, Warning, TEXT("InitializeInputHandler: InputHandler trouve, liaison des inputs..."));
		InputHandler->BindInputs(InputComponent);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("InitializeInputHandler: InputHandler est NULL !"));
	}
}