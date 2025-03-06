#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "MyCharacter.generated.h"

class UCharacterCombatComponent;
class UCharacterKiComponent;
class UCharacterAnimationComponent;
class UCharacterAbilitiesComponent;
class UCharacterInputComponent;
class UPaperFlipbookComponent;
class UCameraComponent;
class UBoxComponent;
UCLASS()
class GAME2DCPLUSPLUS_API AMyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AMyCharacter();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	void MoveRight(float value);
	void InitializeInputHandler();

	/** Composants principaux **/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UCharacterCombatComponent* CombatComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UCharacterKiComponent* KiComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UCharacterAnimationComponent* AnimationComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UCharacterAbilitiesComponent* AbilitiesComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UCharacterInputComponent* InputHandler;

	/** Composant graphique **/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Visuals")
	UPaperFlipbookComponent* CharacterFlipbook;

	/** Composant caméra **/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	UCameraComponent* CharacterCamera;

	/** Hitbox de l'épée **/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Combat")
	UBoxComponent* SwordHitbox;
};
