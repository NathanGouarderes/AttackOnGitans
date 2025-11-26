// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterCombatComponent.h"
#include "CharacterAbilitiesComponent.h"
#include "../Characters/MyCharacter.h"
#include "../MyFistBase.h"
#include "StatsComponent.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "CharacterAnimationComponent.h"
#include "PaperFlipbookComponent.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/DamageType.h"
#include "Engine/DamageEvents.h"

#define ECC_TRACEHITBOX ECC_GameTraceChannel1

// Sets default values for this component's properties
UCharacterCombatComponent::UCharacterCombatComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	//CurrentAttackData = nullptr;


	// ...
}


// Called when the game starts
void UCharacterCombatComponent::BeginPlay()
{
	Super::BeginPlay();

	OwnerCharacter = Cast<ACharacter>(GetOwner());
	CharacterData = IFighterInterface::Execute_GetCharacterData(OwnerCharacter);
	UE_LOG(LogTemp, Warning, TEXT("UCharacterCombatComponent::BeginPlay() --> CharacterData Name : %s"), *CharacterData.CharacterName.ToString());
	
	/*
	if (CharacterData.AttackDataSet.IsNull())
	{
		UE_LOG(LogTemp, Error, TEXT("UCharacterCombatComponent::BeginPlay() ⚠️ CharacterData.AttackDataSet est NULL dans la DataTable CharacterData !"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("UCharacterCombatComponent::BeginPlay() --> AttackDataSet Path = %s"), *CharacterData.AttackDataSet.ToSoftObjectPath().ToString());
		UE_LOG(LogTemp, Warning, TEXT("UCharacterCombatComponent::BeginPlay() --> Chargement de la ligne de CharacterData : %s"), *CharacterData.CharacterName.ToString());

	}

	UE_LOG(LogTemp, Warning, TEXT("void UCharacterCombatComponent::BeginPlay() --> CharacterData : Name -> %s !"), *CharacterData.CharacterName.ToString());

	UDataTable* AttackData = CharacterData.AttackDataSet.LoadSynchronous();
	TArray<FAttackData*> AllAttackRows;
	if (!AttackData)
	{
		UE_LOG(LogTemp, Error, TEXT("void UCharacterCombatComponent::BeginPlay()❌ AttackData NULL !"));
		return;
	}

	const UScriptStruct* RowStruct = AttackData->GetRowStruct();
	UE_LOG(LogTemp, Warning, TEXT("void UCharacterCombatComponent::BeginPlay() 🔍 RowStruct trouvé : %s (Attendu : %s)"),


		*GetNameSafe(RowStruct), *FAttackData::StaticStruct()->GetName());
		* 
		* */
	ComboStep = 0;

	StateComponent = OwnerCharacter->FindComponentByClass<UCharacterStateComponent>();
	if(!StateComponent)
	{
		UE_LOG(LogTemp, Error, TEXT("void UCharacterCombatComponent::BeginPlay(): StateComponent non trouve !"));
		return;
	}

	if (OwnerCharacter)
	{
		AnimationComponent = OwnerCharacter->FindComponentByClass<UCharacterAnimationComponent>();
		AbilitiesComponent = OwnerCharacter->FindComponentByClass<UCharacterAbilitiesComponent>();
		
		if (!AnimationComponent)
		{
			UE_LOG(LogTemp, Error, TEXT("void UCharacterCombatComponent::BeginPlay(): AnimationComponent non trouve !"));
		}
		if (!AbilitiesComponent)
		{
			UE_LOG(LogTemp, Error, TEXT("void UCharacterCombatComponent::BeginPlay(): AbilitiesComponent non trouve !"));
		}
	}	
}


// Called every frame
void UCharacterCombatComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	
	if (!bIsAttacking)
	{
		return;
	}

	//UE_LOG(LogTemp, Warning, TEXT("ComboStap: %d"), ComboStep);


	if (bIsTracing && CurrentAttackFlipbook != nullptr)
	{
		DoWeaponTrace(CurrentAttackData);
		//UE_LOG(LogTemp, Warning, TEXT("Traçage en cours"));

	}
}

void UCharacterCombatComponent::PerformAttack()
{
	if (!OwnerCharacter)
	{
		UE_LOG(LogTemp, Error, TEXT("UCharacterCombatComponent::PerformAttack() --> OwnerCharacter NULL !"));
		return;
	}
	if (CharacterData.CharacterName.IsNone() || CharacterData.AttackDataSet.IsNull())
	{
		UE_LOG(LogTemp, Error, TEXT("UCharacterCombatComponent::PerformAttack() --> CharacterData invalide : StandUser sans StandClass"));
		return;
	}

	
	for (FAttackData* Attack : CachedAttacks)
	{
		//UE_LOG(LogTemp, Warning, TEXT("UCharacterCombatComponent::PerformAttack() --> Attack->AttackName : %s"), *Attack->AttackName.ToString());
		if (IsCharacterMoving() && !Attack->bRequiresMovement)
		{
			continue;
		}
		if (!IsCharacterMoving() && Attack->bRequiresMovement)
		{
			continue;
		}

		UE_LOG(LogTemp, Warning, TEXT("UCharacterCombatComponent::PerformAttack() --> Attaque trouvée pour ce contexte : %s"), *Attack->AttackName.ToString());
		AnimationComponent->PlayAnimation(Attack->Animation.LoadSynchronous());

	}
}

void UCharacterCombatComponent::InitializeCombat(const FCharacterData& InData)
{
	CharacterData = InData;
	if (!CharacterData.AttackDataSet.IsNull())
	{
		if (UDataTable* AttackDT = CharacterData.AttackDataSet.LoadSynchronous())
		{
			TArray<FAttackData*> Rows;
			AttackDT->GetAllRows(TEXT("InitCombat"), Rows);
			CachedAttacks = Rows;
			UE_LOG(LogTemp, Warning, TEXT("UCharacterCombatComponent::InitializeCombat --> ✅ %d attaques chargées"), CachedAttacks.Num());
		}
	}

}

bool UCharacterCombatComponent::IsCharacterMoving() const
{
	if (!OwnerCharacter)
	{
		UE_LOG(LogTemp, Error, TEXT("UCharacterCombatComponent::IsCharacterMoving --> OwnerCharacter NULL"));
		return false;
	}

	const FVector Velocity = OwnerCharacter->GetVelocity();
	if (FMath::Abs(Velocity.X) > 0.0f)
	{
		return true;
	}
	else
	{
		return false;
	}
	
}

void UCharacterCombatComponent::LightAttack()
{
	PerformAttack();
	if (bIsAttacking)
	{
		//UE_LOG(LogTemp, Warning, TEXT("⚠️ LightAttack ignorée : Une attaque est déjà en cours, ajoutée à la queue"));

		//Stocke l'attaque en file d'attente si une attaque est déjà en cours
		if (AttackQueueSize < 2)
		{
			int32 NextStep = (ComboStep % 2) + 1;
			AttackQueue.Enqueue(NextStep);
			AttackQueueSize++;
		}
		return;
	}

	//Si aucune attaque en cours, on la joue immédiatement
	ExecuteLightAttack();
}

void UCharacterCombatComponent::ExecuteLightAttack()
{

	if (!StateComponent)
	{
		UE_LOG(LogTemp, Error, TEXT("UCharacterCombatComponent::ExecuteLightAttack() --> StateComponent NULL !"));
		return;
	}

	StateComponent->SetState(EState::Attacking);
    bIsAttacking = true;

	UE_LOG(LogTemp, Warning, TEXT(" UCharacterCombatComponent::ExecuteLightAttack() ExectureLightAttack"));

    if (!AttackQueue.IsEmpty())
    {
        int32 NextComboStep;
        AttackQueue.Dequeue(NextComboStep);

		ComboStep = NextComboStep;
		AttackQueueSize--;
    }
    else
    {
        // 🔥 Incrémente toujours ComboStep proprement
        ComboStep = (ComboStep % 2) + 1;
    }


    PlayComboAnimation();
	//CurrentWeapon->WeaponHitbox->SetCollisionEnabled(ECollisionEnabled::QueryOnly);

    GetWorld()->GetTimerManager().ClearTimer(ComboResetTimerHandle);

    float AnimationDuration = 0.5f;
	if (CurrentAttackFlipbook)
	{
		AnimationDuration = CurrentAttackFlipbook->GetTotalDuration();
	}
	else if (AnimationComponent && AnimationComponent->FlipbookComponent && AnimationComponent->FlipbookComponent->GetFlipbook())
	{
		AnimationDuration = AnimationComponent->FlipbookComponent->GetFlipbook()->GetTotalDuration();
	}
	//UE_LOG(LogTemp, Warning, TEXT("⏱ Durée de l'animation détectée : %.2f secondes"), AnimationDuration);

    GetWorld()->GetTimerManager().SetTimer(ComboResetTimerHandle, this, &UCharacterCombatComponent::EndLightAttack, AnimationDuration, false);
}




void UCharacterCombatComponent::EndLightAttack()
{
	StateComponent->ResetState();
	bIsAttacking = false;
	bIsTracing = false;
	CurrentAttackFlipbook = nullptr;

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
		return;
	}


	ComboStep = 0;
}

/*
void UCharacterCombatComponent::PlayComboAnimation()
{
	if (!AnimationComponent)
	{
		UE_LOG(LogTemp, Error, TEXT("CharacterCombatComponent: Impossible de jouer l'animation, AnimationComponent manquant !"));
		return;
	}
	AnimationComponent->PlayAttackAnimation();
}
*/

void UCharacterCombatComponent::PlayComboAnimation()
{
	if (!AnimationComponent)
	{
		UE_LOG(LogTemp, Error, TEXT("UCharacterCombatComponent::PlayComboAnimation() : AnimationComponent NULL !"));
		return;
	}

	// Nom de l’attaque à récupérer depuis ta DataTable
	FName RowName = FName(*FString::Printf(TEXT("Warrior_Lady_Swing%d"), ComboStep));

	UDataTable* AttackDataTable = AttackDataTableAsset.LoadSynchronous();
	
	if (!AttackDataTable)
	{
		UE_LOG(LogTemp, Error, TEXT("UCharacterCombatComponent::PlayComboAnimation() : DataTable introuvable via SoftObjectPtr !"));
		return;
	}

	const FAttackData* AttackData = AttackDataTable->FindRow<FAttackData>(RowName, TEXT(""));

	if (AttackData)
	{
		AnimationComponent->PlayAttackAnimation(*AttackData, AnimationComponent->CharacterRole);

		CurrentAttackData = *AttackData;
		CurrentAttackFlipbook = AttackData->Animation.LoadSynchronous();
		UE_LOG(LogTemp, Warning, TEXT("UCharacterCombatComponent::PlayComboAnimation() : Animation en cours : %s"), *RowName.ToString());
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("UCharacterCombatComponent::PlayComboAnimation() : Aucune ligne trouvée pour %s"), *RowName.ToString());
	}
}



void UCharacterCombatComponent::OnSwordOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (!AbilitiesComponent)
	{
		UE_LOG(LogTemp, Error, TEXT("CharacterCombatComponent::OnSwordOverlap: AbilitiesComponent est NULL, impossible d'appliquer des dégâts !"));
		return;
	}

	if (OtherActor && (OtherActor != OwnerCharacter))
	{

		UStatsComponent* TargetStats = OtherActor->FindComponentByClass<UStatsComponent>();
		if (!TargetStats)
		{
			UE_LOG(LogTemp, Warning, TEXT("CharacterCombatComponent::OnSwordOverlap ❌ Aucun StatsComponent trouvé sur l’acteur touché : %s"), *OtherActor->GetName());
			return;
		}

		float Damages = AbilitiesComponent->SwordDamages * AbilitiesComponent->Strength;
		UE_LOG(LogTemp, Warning, TEXT("CharacterCombatComponent::OnSwordOverlap 🎯 Impact sur %s, dégâts = %.2f"), *OtherActor->GetName(), Damages);
		TargetStats->ApplyDamages(Damages);
	}
}




void UCharacterCombatComponent::UpdateHitboxFromSockets()
{
	
}

void UCharacterCombatComponent::DoWeaponTrace(const FAttackData& AttackData)
{
	bIsTracing = true;
	if (!OwnerCharacter || !AnimationComponent)
	{
		UE_LOG(LogTemp, Error, TEXT("DoWeaponTrace : Error"));
		return;
	}

	const TArray<FName>& Sockets = AttackData.TraceSockets;
	if (Sockets.Num() < 2)
	{
		//UE_LOG(LogTemp, Error, TEXT("DoWeaponTrace : Nombre de sockets inférieur à 2"));
		return;
	}

	for (int32 i = 0; i < Sockets.Num() - 1; i++)
	{
		const FVector Start = AnimationComponent->FlipbookComponent->GetSocketLocation(Sockets[i]);
		const FVector End = AnimationComponent->FlipbookComponent->GetSocketLocation(Sockets[i + 1]);

		FHitResult HitResult;
		FCollisionQueryParams Params;
		Params.AddIgnoredActor(OwnerCharacter);

		bool bHit = GetWorld()->LineTraceSingleByChannel(
			HitResult,
			Start,
			End,
			ECC_TRACEHITBOX,
			Params
			);

		FColor DebugColor = bHit ? FColor::Red : FColor::Green;
		DrawDebugLine(GetWorld(), Start, End, FColor::Blue, false, 1.0f, 0, 2.0f);
		//UE_LOG(LogTemp, Warning, TEXT("Trace entre %s et %s"), *Sockets[i].ToString(), *Sockets[i + 1].ToString());


		if (bHit && HitResult.GetActor())
		{
			UE_LOG(LogTemp, Warning, TEXT("🎯 Ennemie touché : %s \nDégats infligés : %f"), *HitResult.GetActor()->GetName(), AttackData.Damage);
			DealDamageToActor(HitResult.GetActor(), AttackData.Damage);
		}

	}
}

void UCharacterCombatComponent::DealDamageToActor(AActor* Target, float DamageAmount)
{
	if (!Target)
	{
		return;
	}

	FDamageEvent DamageEvent;

	AActor* Owner = GetOwner();
    AController* InstigatorController = Owner ? Owner->GetInstigatorController() : nullptr;

	float AppliedDamage = Target->TakeDamage(DamageAmount, DamageEvent, InstigatorController, Owner);

	UE_LOG(LogTemp, Warning, TEXT("💥 Dégâts infligés par %s à %s : %f"), *Owner->GetName(), *Target->GetName(), AppliedDamage);
}

bool UCharacterCombatComponent::IsAttacking()
{
	return bIsAttacking;
}