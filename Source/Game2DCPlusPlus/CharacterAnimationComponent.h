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
	/** Joue l'animation en fonction de l'état du personnage */
	void UpdateAnimation();

	/** Déclenche l'animation d'attaque */
	void PlayAttackAnimation();

	/** Réinitialise le combo après une attaque */
	void ResetCombo();

	/** Définit l'animation de base en fonction de l'état */
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
