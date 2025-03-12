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
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Animations")
	UPaperFlipbook* Swing1SwordFlipbook;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Animations")
	UPaperFlipbook* Swing2SwordFlipbook;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Animations")
	UPaperFlipbook* Swing3SwordFlipbook;

public:
	/** Joue l'animation en fonction de l'etat du personnage */
	void UpdateAnimation();

	/** Declenche l'animation d'attaque */
	void PlayAttackAnimation();

	void EndAttackAnimation();

	/** Reinitialise le combo apres une attaque */
	void ResetCombo();

	/** Definit l'animation de base en fonction de l'etat */
	void SetDefaultAnimation();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Animation")
	UPaperFlipbookComponent* FlipbookComponent;

	FTimerHandle AttackEndTimer;


private:
	UPROPERTY()
	AMyCharacter* OwnerCharacter;


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
