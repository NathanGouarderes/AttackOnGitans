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

	/*
	if (!CurrentWeapon || !CurrentWeapon->WeaponHitbox)
	{
		UE_LOG(LogTemp, Error, TEXT("CharacterCombatComponent: CurrentWeapon || CurrentWeapon->WeaponHitbox  = NULL!"));
		UBoxComponent* HitBoxGeneric = NewObject<UBoxComponent>(this, TEXT("HistBoxGeneric"));
		HitBoxGeneric->AttachToComponent(OwnerCharacter->GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);
		HitBoxGeneric->RegisterComponent();
		HitBoxGeneric->SetBoxExtent(FVector(10.f, 5.f, 5.f));
		HitBoxGeneric->SetCollisionEnabled(ECollisionEnabled::NoCollision); // activée dynamiquement
		HitBoxGeneric->SetCollisionObjectType(ECC_WorldDynamic);
		HitBoxGeneric->SetCollisionResponseToAllChannels(ECR_Ignore);
		HitBoxGeneric->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);

		HitBoxGeneric->OnComponentBeginOverlap.AddDynamic(this, &UCharacterCombatComponent::OnSwordOverlap);
		
		CurrentWeapon = NewObject<AMyWeaponBase>(this, AMyWeaponBase::StaticClass());
		CurrentWeapon->WeaponHitbox = HitBoxGeneric;
		UE_LOG(LogTemp, Warning, TEXT("✅ Hitbox de poing créée pour les tests sans arme"));
		//return;
	}
	*/

	
}


// Called every frame
void UCharacterCombatComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	
	if (!bIsAttacking)
	{
		return;
	}	

	if (bIsTracing && CurrentAttackFlipbook != nullptr)
	{
		DoWeaponTrace(CurrentAttackData);
		UE_LOG(LogTemp, Warning, TEXT("Traçage en cours"));

	}
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

	UE_LOG(LogTemp, Warning, TEXT("ExectureLightAttack"));

    if (!AttackQueue.IsEmpty())
    {
        int32 NextComboStep;
        AttackQueue.Dequeue(NextComboStep);

        // 🔥 Évite que le ComboStep reste bloqué
        if (NextComboStep == ComboStep)
        {
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


    PlayComboAnimation();
	//CurrentWeapon->WeaponHitbox->SetCollisionEnabled(ECollisionEnabled::QueryOnly);

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
		UE_LOG(LogTemp, Error, TEXT("PlayComboAnimation : AnimationComponent NULL !"));
		return;
	}

	// Nom de l’attaque à récupérer depuis ta DataTable
	FName RowName = FName(*FString::Printf(TEXT("Warrior_Lady_Swing%d"), ComboStep));

	UDataTable* AttackDataTable = AttackDataTableAsset.LoadSynchronous();
	
	if (!AttackDataTable)
	{
		UE_LOG(LogTemp, Error, TEXT("PlayComboAnimation : DataTable introuvable via SoftObjectPtr !"));
		return;
	}

	const FAttackData* AttackData = AttackDataTable->FindRow<FAttackData>(RowName, TEXT(""));

	if (AttackData)
	{
		AnimationComponent->PlayAttackAnimation(*AttackData, AnimationComponent->CharacterRole);

		CurrentAttackData = *AttackData;
		CurrentAttackFlipbook = AttackData->PlayerAnimation.LoadSynchronous();
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("PlayComboAnimation : Aucune ligne trouvée pour %s"), *RowName.ToString());
	}
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

		UStatsComponent* TargetStats = OtherActor->FindComponentByClass<UStatsComponent>();
		if (!TargetStats)
		{
			UE_LOG(LogTemp, Warning, TEXT("❌ Aucun StatsComponent trouvé sur l’acteur touché : %s"), *OtherActor->GetName());
			return;
		}

		float Damages = AbilitiesComponent->SwordDamages * AbilitiesComponent->Strength;
		UE_LOG(LogTemp, Warning, TEXT("🎯 Impact sur %s, dégâts = %.2f"), *OtherActor->GetName(), Damages);
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
		UE_LOG(LogTemp, Error, TEXT("DoWeaponTrace : Nombre de sockets inférieur à 2"));
		return;
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("DoWeaponTrace : Nombre de sockets supérieur à 2"));

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
		UE_LOG(LogTemp, Warning, TEXT("Trace entre %s et %s"), *Sockets[i].ToString(), *Sockets[i + 1].ToString());


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