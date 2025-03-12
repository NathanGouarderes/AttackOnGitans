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
}

void UCharacterCombatComponent::LightAttack()
{
	if (bIsAttacking)
	{
		//UE_LOG(LogTemp, Warning, TEXT("⚠️ LightAttack ignorée : Une attaque est déjà en cours, ajoutée à la queue"));

		//Stocke l'attaque en file d'attente si une attaque est déjà en cours
		if (AttackQueueSize < 2)
		{
			AttackQueue.Enqueue(ComboStep + 1 > 3 ? 1 : ComboStep + 1);
			AttackQueueSize++;
		}
		return;
	}

	//Si aucune attaque en cours, on la joue immédiatement
	ExecuteLightAttack();
}

void UCharacterCombatComponent::ExecuteLightAttack()
{
    bIsAttacking = true;

    if (!AttackQueue.IsEmpty())
    {
        int32 NextComboStep;
        AttackQueue.Dequeue(NextComboStep);

        // 🔥 Évite que le ComboStep reste bloqué
        if (NextComboStep == ComboStep)
        {
            UE_LOG(LogTemp, Warning, TEXT("⚠️ Ignoré : ComboStep déjà utilisé, force passage au suivant."));
            ComboStep = (ComboStep % 3) + 1;  // Passe à l'attaque suivante
        }
        else
        {
            ComboStep = NextComboStep;
        }
    }
    else
    {
        // 🔥 Incrémente toujours ComboStep proprement
        ComboStep = (ComboStep % 3) + 1;
    }

    UE_LOG(LogTemp, Warning, TEXT("ExecuteLightAttack : ComboStep = %d"), ComboStep);

    PlayComboAnimation();
    OwnerCharacter->SwordHitbox->SetCollisionEnabled(ECollisionEnabled::QueryOnly);

    GetWorld()->GetTimerManager().ClearTimer(ComboResetTimerHandle);

    float AnimationDuration;
    if (AnimationComponent && AnimationComponent->FlipbookComponent)
    {
        AnimationDuration = AnimationComponent->FlipbookComponent->GetFlipbookLength();
    }

    GetWorld()->GetTimerManager().SetTimer(ComboResetTimerHandle, this, &UCharacterCombatComponent::EndLightAttack, AnimationDuration, false);
}




void UCharacterCombatComponent::EndLightAttack()
{
	UE_LOG(LogTemp, Warning, TEXT("Fin de l'attaque, ComboStep actuel: %d"), ComboStep);

	bIsAttacking = false;

	// 🔥 Si une attaque est en attente, on l’exécute immédiatement
	if (!AttackQueue.IsEmpty())
	{
		AttackQueue.Dequeue(ComboStep);
		AttackQueueSize--;
		ExecuteLightAttack();
	}
	else
	{
		// 🔥 Programme le reset du combo uniquement si aucune attaque n'est en attente
		AttackQueueSize = 0;
		GetWorld()->GetTimerManager().SetTimer(ComboResetTimerHandle, this, &UCharacterCombatComponent::ResetCombo, 0.5f, false);
	}
	if (AnimationComponent)
	{
		AnimationComponent->SetDefaultAnimation();
	}
}


void UCharacterCombatComponent::ResetCombo()
{



	if (ComboStep == 0) // Empêche d’appeler ResetCombo plusieurs fois
	{
		UE_LOG(LogTemp, Warning, TEXT("ResetCombo ignore : ComboStep est déjà à 0"));
		return;
	}

	UE_LOG(LogTemp, Warning, TEXT("ResetCombo effectif : ComboStep avant reset: %d"), ComboStep);

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
