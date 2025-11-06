#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/ActorComponent.h"
#include "StatsComponent.h"
#include "CharacterKiComponent.generated.h"


class UKiBarWidget;
class AMyCharacter;
class AKiAura;

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class GAME2DCPLUSPLUS_API UCharacterKiComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UCharacterKiComponent();

protected:
	virtual void BeginPlay() override;

public:
	/** Charge le Ki du personnage */
	void LoadKi(float Value);

	void LoadKiAI(float DeltaTime);


	/** Démarre le chargement du Ki */
	void StartChargingKi();

	/** Arrête le chargement du Ki */
	void StopChargingKi();

	/** Met à jour l'affichage de la barre de Ki */
	void UpdateKiBar();

	/** Initialise la barre de Ki et l'aura */
	void InitializeKiSystem();

	void InitializeStatsComponent(UStatsComponent* InStats);

	bool TryConsumeKi(float KiCost);

	/** État du Ki */
	bool bIsKiCharging;

private:
	UPROPERTY()
	AActor* OwnerCharacter;

	UPROPERTY()
	UKiBarWidget* KiBarWidget;

	UPROPERTY()
	UStatsComponent* StatsComponent;

	UPROPERTY(EditAnywhere, Category = "Ki")
	TSubclassOf<UKiBarWidget> KiBarWidgetClass;

	UPROPERTY(EditAnywhere, Category = "Ki")
	TSubclassOf<AKiAura> KiAuraClass;

	UPROPERTY()
	AKiAura* KiAura;


};
