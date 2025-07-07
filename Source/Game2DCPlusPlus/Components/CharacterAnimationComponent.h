#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "../Data/FAttackData.h"
#include "../Interface/UFlipbookProviderInterface.h"
#include "CharacterCombatComponent.h"
#include "../Data/FAnimationData.h"
#include "CharacterAnimationComponent.generated.h"

class UPaperFlipbookComponent;
class UPaperFlipbook;
class AMyCharacter;
class UCharacterCombatComponent;

UENUM(BlueprintType)
enum class ERole : uint8
{
	Player,
	Enemy,
	Boss,
	NPC,
};

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class GAME2DCPLUSPLUS_API UCharacterAnimationComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UCharacterAnimationComponent();

protected:
	virtual void BeginPlay() override;
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	ERole CharacterRoleRole;

public:
	/** Joue l'animation en fonction de l'etat du personnage */
	UPaperFlipbook* GetCurrentAnimation() const;

	void UpdateAnimation();

	/** Declenche l'animation d'attaque */
	UFUNCTION(BlueprintCallable, Category = "Animation")
	void PlayAnimation(UPaperFlipbook* Animation);

	void PlayIdleAnimation(ERole Role);
	void PlayWalkAnimation(ERole Role);
	void PlayJumpStartAnimation(ERole Role);
	void PlayJumpLoopAnimation(ERole Role);
	void PlayJumpEndAnimation(ERole Role);
	void PlayHurtAnimation(ERole Role);
	void PlayDeathAnimation(ERole Role);
	void PlayAttackAnimation(const FAttackData& AttackData, ERole Role);

	ERole CharacterRole = ERole::Player;


	void EndAttackAnimation();

	/** Reinitialise le combo apres une attaque */
	void ResetCombo();

	/** Definit l'animation de base en fonction de l'etat */
	void SetDefaultAnimation();

	void SetFacingDirection(float VelocityX);

	bool IsFacingRight() const;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Animation")
	UPaperFlipbookComponent* FlipbookComponent;

	FTimerHandle AttackEndTimer;

	/** Liste des animations */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Animation")
	UPaperFlipbook* IdleAnimation;

	//UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Animation")
	//UPaperFlipbook* WalkAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Animation")
	UPaperFlipbook* JumpAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Animation")
	UPaperFlipbook* JumpStartAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Animation")
	UPaperFlipbook* JumpUpAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Animation")
	UPaperFlipbook* FallAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Animation")
	UPaperFlipbook* JumpAbsorbtionAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Animation")
	TSoftObjectPtr<UDataTable> AnimationDataTableAsset;

	FAnimationData* CurrentAnimationData;

	bool bIsFacingRight = true;


private:
	UPROPERTY()
	ACharacter* OwnerCharacter;


	

	UCharacterCombatComponent* CombatComponent;

	bool bIsAttacking;
};
