// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "../Abilities/Projectiles/MyProjectileBase.h"
#include "PaperFlipbookComponent.h"
#include "../AMyEnemyAIController.h"
#include "../Interface/UFlipbookProviderInterface.h"
#include "CharacterCombatComponent.h"
#include "CoreMinimal.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "../Components/CharacterAnimationComponent.h"
#include "../Components/CharacterKiComponent.h"
#include "../Components/CharacterAbilitiesComponent.h"
#include "../Components/UCharacterStateComponent.h"
#include "../Components/StatsComponent.h"
#include "GameFramework/Character.h"
#include "MyEnemyBase.generated.h"


UCLASS()
class GAME2DCPLUSPLUS_API AMyEnemyBase : public ACharacter, public IFlipbookProviderInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyEnemyBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual UPaperFlipbookComponent* GetCharacterFlipbook() const override;

	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser);
	virtual void DealDamages(float DamageAmount);
	virtual void OnPlayerDetected(APawn* Player, bool bIsVisible);
	virtual void ApplyKncokback(AActor* DamageCauser, float KnockbackStrength);
	virtual void EndKnockback();
	virtual void Die();
	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
		bool bFromSweep, const FHitResult& SweepResult);

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Enemy", meta = (AllowPrivateAccess = "true"))
	UPaperFlipbookComponent* EnemyFlipbook;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	int32 Health;

	// Enemy Speed
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float MoveSpeed;

	//AI
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
	UBehaviorTree* BehaviorTree;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
	UBlackboardData* BlackboardData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Component", meta = (AllowPrivateAccess = "true"))
	UCharacterCombatComponent* CombatComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Component", meta = (AllowPrivateAccess = "true"))
	UCharacterAnimationComponent* AnimationComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Component", meta = (AllowPrivateAccess = "true"))
	UStatsComponent* StatsComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Component", meta = (AllowPrivateAccess = "true"))
	UCharacterKiComponent* KiComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Component", meta = (AllowPrivateAccess = "true"))
	UCharacterAbilitiesComponent* AbilitiesComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UCharacterStateComponent* StateComponent;



protected:
	bool bIsAttacking;
	bool bIsTakingDamages;
	FVector KnockbackDirection;
	FTimerHandle AnimationTimerHandle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animations", meta = (AllowPrivateAccess = "true"))
	UPaperFlipbook* IdleFlipbook;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animations", meta = (AllowPrivateAccess = "true"))
	UPaperFlipbook* WalkFlipbook;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animations", meta = (AllowPrivateAccess = "true"))
	UPaperFlipbook* Attack1Flipbook;

	


};
