#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "../MyFistBase.h"
#include "../Interface/UFlipbookProviderInterface.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "../Data/Interfaces/FighterInterface.h"
#include "../FighterCharacters.h"
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
class GAME2DCPLUSPLUS_API AMyCharacter : public AFighterCharacters, public IFlipbookProviderInterface, public IFighterInterface
{
	GENERATED_BODY()

public:
	AMyCharacter();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, AController* EventInvestigator, AActor* DamageCauser) override;

	void SetCollisionEnabled(bool Enabled);

	virtual UPaperFlipbookComponent* GetCharacterFlipbook() const override;

	void MoveRight(float value);
	void InitializeInputHandler();
	virtual void Landed(const FHitResult& Hit) override;
	virtual void Jump() override;
	
	virtual UStatsComponent* GetStatsComponent_Implementation() const override { return StatsComponent; }
	virtual UCharacterKiComponent* GetKiComponent_Implementation() const override { return KiComponent; }
	virtual UStandComponent* GetStandComponent_Implementation() const override { return StandComponent; }
	virtual FCharacterData GetCharacterData_Implementation() const override { return CharacterData; }


	bool bIsWalking;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	int32 MaxJumpCount;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Visuals")
	UPaperFlipbookComponent* CharacterFlipbook;

	/*
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UBoxComponent* HeadHitBox;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UBoxComponent* BodyHitbox;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UBoxComponent* LegHitBox;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UBoxComponent* ArmHitBox;
	*/

	/** Composants principaux **/
	

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UCharacterInputComponent* InputHandler;

	/** Composant graphique **/
	

	//UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Visuals")
	//UPaperFlipbookComponent* SwordFlipbook;

	/** Composant caméra **/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	UCameraComponent* CharacterCamera;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
	//TSubclassOf<class AMyWeaponBase> DefaultWeaponClass;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
	//TSubclassOf<AMyFistBase> FistBaseClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
	//AMyWeaponBase* EquipedWeapon;

	TArray<USceneComponent*> SceneComponents;
};
