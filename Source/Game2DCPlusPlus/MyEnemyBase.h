// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "MyProjectileBase.h"
#include "PaperFlipbookComponent.h"
#include "AMyEnemyAIController.h"
#include "CoreMinimal.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Character.h"
#include "MyEnemyBase.generated.h"


UCLASS()
class GAME2DCPLUSPLUS_API AMyEnemyBase : public ACharacter
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

	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser);
	virtual void DealDamages(float DamageAmount);
	virtual void OnPlayerDetected(APawn* Player, bool bIsVisible);
	virtual void Die();
	void OnAnimationFinished();
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


protected:
	bool bIsAttacking;
	bool bIsTakingDamages;
	FTimerHandle AnimationTimerHandle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animations", meta = (AllowPrivateAccess = "true"))
	UPaperFlipbook* EnemyBreathFlipbook;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animations", meta = (AllowPrivateAccess = "true"))
	UPaperFlipbook* GetHurthtedFlipbook;


};
