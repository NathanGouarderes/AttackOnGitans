#include "CharacterAnimationComponent.h"
#include "MyCharacter.h"
#include "CharacterCombatComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "PaperFlipbookComponent.h"

UCharacterAnimationComponent::UCharacterAnimationComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
	bIsAttacking = false;
}

void UCharacterAnimationComponent::BeginPlay()
{
	Super::BeginPlay();
	OwnerCharacter = Cast<AMyCharacter>(GetOwner());

	if (OwnerCharacter)
	{
		CombatComponent = OwnerCharacter->FindComponentByClass<UCharacterCombatComponent>();
		FlipbookComponent = OwnerCharacter->FindComponentByClass<UPaperFlipbookComponent>();
		if (!FlipbookComponent)
		{
			UE_LOG(LogTemp, Error, TEXT("UCharacterAnimationComponent : FlipbookComponent non trouvé !"));
		}
		if (!CombatComponent)
		{
			UE_LOG(LogTemp, Error, TEXT("UCharacterAnimationComponent : CombatComponent non trouvé !"));
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("UCharacterAnimationComponent : Impossible de récupérer OwnerCharacter !"));
	}
}

void UCharacterAnimationComponent::UpdateAnimation()
{
	if (!FlipbookComponent || !OwnerCharacter) return;

	if (OwnerCharacter->GetCharacterMovement()->IsFalling())
	{
		FlipbookComponent->SetFlipbook(JumpAnimation);
	}
	else if (OwnerCharacter->GetVelocity().Size() > 0.0f)
	{
		FlipbookComponent->SetFlipbook(WalkAnimation);
	}
	else
	{
		SetDefaultAnimation();
	}
}

void UCharacterAnimationComponent::PlayAttackAnimation()
{
	if (!FlipbookComponent || bIsAttacking) return;

	UPaperFlipbook* SelectedFlipbook = nullptr;

	bIsAttacking = true;
	switch (CombatComponent->ComboStep)
	{
	case 1 :
		SelectedFlipbook = Swing1SwordFlipbook;
		break;
	case 2 :
		SelectedFlipbook = Swing2SwordFlipbook;
		break;
	case 3:
		SelectedFlipbook = Swing3SwordFlipbook;
		break;
	}

	if (SelectedFlipbook)
	{
		FlipbookComponent->SetFlipbook(SelectedFlipbook);
	}

	// Timer pour remettre l'animation idle après l'attaque
	FTimerHandle TimerHandle;
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UCharacterAnimationComponent::ResetCombo, FlipbookComponent->GetFlipbookLength(), false);
}

void UCharacterAnimationComponent::ResetCombo()
{
	if (!CombatComponent) return;
	{
		CombatComponent->ResetCombo();
		bIsAttacking = false;
		SetDefaultAnimation();
	}
}

void UCharacterAnimationComponent::SetDefaultAnimation()
{
	if (!FlipbookComponent) return;
	FlipbookComponent->SetFlipbook(IdleAnimation);
}
