#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/ActorComponent.h"
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

	/** D�marre le chargement du Ki */
	void StartChargingKi();

	/** Arr�te le chargement du Ki */
	void StopChargingKi();

	/** Met � jour l'affichage de la barre de Ki */
	void UpdateKiBar();

	/** Initialise la barre de Ki et l'aura */
	void InitializeKiSystem();

	/** �tat du Ki */
	UPROPERTY(EditAnywhere, Category = "Ki Stats")
	float MaxKi;

	UPROPERTY(EditAnywhere, Category = "Ki Stats")
	float CurrentKi;

	UPROPERTY(EditAnywhere, Category = "Ki Stats")
	float KiLoadSpeed;

	bool bIsKiCharging;

private:
	UPROPERTY()
	class AMyCharacter* OwnerCharacter;

	UPROPERTY()
	UKiBarWidget* KiBarWidget;

	UPROPERTY(EditAnywhere, Category = "Ki")
	TSubclassOf<UKiBarWidget> KiBarWidgetClass;

	UPROPERTY(EditAnywhere, Category = "Ki")
	TSubclassOf<AKiAura> KiAuraClass;

	UPROPERTY()
	AKiAura* KiAura;


};
