#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CharacterInputComponent.generated.h"

class AMyCharacter;
class UInputComponent;
class UCharacterAbilitiesComponent;
class UCharacterKiComponent;

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class GAME2DCPLUSPLUS_API UCharacterInputComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UCharacterInputComponent();

protected:
	virtual void BeginPlay() override;

public:
	/** Lier les inputs à leurs actions correspondantes **/
	void BindInputs(UInputComponent* PlayerInputComponent);

private:
	UPROPERTY()
	AMyCharacter* OwnerCharacter;
};
