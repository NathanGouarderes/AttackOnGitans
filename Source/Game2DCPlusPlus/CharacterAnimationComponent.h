#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CharacterAnimationComponent.generated.h"

class UPaperFlipbookComponent;
class UPaperFlipbook;
class AMyCharacter;
class UCharacterCombatComponent;
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class GAME2DCPLUSPLUS_API UCharacterAnimationComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UCharacterAnimationComponent();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Animations")
	UPaperFlipbook* Swing1SwordFlipbook;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Animations")
	UPaperFlipbook* Swing2SwordFlipbook;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Animations")
	UPaperFlipbook* Swing3SwordFlipbook;

public:
	/** Joue l'animation en fonction de l'�tat du personnage */
	void UpdateAnimation();

	/** D�clenche l'animation d'attaque */
	void PlayAttackAnimation();

	/** R�initialise le combo apr�s une attaque */
	void ResetCombo();

	/** D�finit l'animation de base en fonction de l'�tat */
	void SetDefaultAnimation();

private:
	UPROPERTY()
	AMyCharacter* OwnerCharacter;

	UPROPERTY()
	UPaperFlipbookComponent* FlipbookComponent;

	/** Liste des animations */
	UPROPERTY(EditAnywhere, Category = "Animations")
	UPaperFlipbook* IdleAnimation;

	UPROPERTY(EditAnywhere, Category = "Animations")
	UPaperFlipbook* WalkAnimation;

	UPROPERTY(EditAnywhere, Category = "Animations")
	UPaperFlipbook* JumpAnimation;

	UCharacterCombatComponent* CombatComponent;

	bool bIsAttacking;
};
