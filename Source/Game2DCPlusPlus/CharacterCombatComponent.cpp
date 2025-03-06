// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterCombatComponent.h"
#include "CharacterAbilitiesComponent.h"
#include "MyCharacter.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "CharacterAnimationComponent.h"
#include "PaperFlipbookComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values for this component's properties
UCharacterCombatComponent::UCharacterCombatComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UCharacterCombatComponent::BeginPlay()
{
	Super::BeginPlay();

	OwnerCharacter = Cast<AMyCharacter>(GetOwner());

	ComboStep = 0;

	if (OwnerCharacter)
	{
		AnimationComponent = OwnerCharacter->FindComponentByClass<UCharacterAnimationComponent>();
		AbilitiesComponent = OwnerCharacter->FindComponentByClass<UCharacterAbilitiesComponent>();
		
		if (!AnimationComponent)
		{
			UE_LOG(LogTemp, Error, TEXT("CharacterCombatComponent: AnimationComponent non trouve !"));
		}
		if (!AbilitiesComponent)
		{
			UE_LOG(LogTemp, Error, TEXT("CharacterCombatComponent: AbilitiesComponent non trouve !"));
		}
	}

	if (OwnerCharacter && OwnerCharacter->SwordHitbox)
	{
		OwnerCharacter->SwordHitbox->OnComponentBeginOverlap.AddDynamic(this, &UCharacterCombatComponent::OnSwordOverlap);
	}
	
}


// Called every frame
void UCharacterCombatComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UCharacterCombatComponent::LightAttack()
{
	if (bIsAttacking) return;
	ComboStep++;
	bIsAttacking = true;
	PlayComboAnimation();
	OwnerCharacter->SwordHitbox->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
}

void UCharacterCombatComponent::EndLightAttack()
{
	bIsAttacking = false;
	ResetCombo();
}

void UCharacterCombatComponent::ResetCombo()
{
	ComboStep = 0;
	OwnerCharacter->SwordHitbox->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void UCharacterCombatComponent::PlayComboAnimation()
{
	if (!AnimationComponent)
	{
		UE_LOG(LogTemp, Error, TEXT("CharacterCombatComponent: Impossible de jouer l'animation, AnimationComponent manquant !"));
		return;
	}
	AnimationComponent->PlayAttackAnimation();
}

void UCharacterCombatComponent::OnSwordOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (!AbilitiesComponent)
	{
		UE_LOG(LogTemp, Error, TEXT("CharacterCombatComponent: AbilitiesComponent est NULL, impossible d'appliquer des dégâts !"));
		return;
	}

	if (OtherActor && (OtherActor != OwnerCharacter))
	{
		float Damages = AbilitiesComponent->SwordDamages * AbilitiesComponent->Strength;
		UGameplayStatics::ApplyDamage(OtherActor, Damages, OwnerCharacter->GetController(), OwnerCharacter, UDamageType::StaticClass());
	}
}
