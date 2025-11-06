// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "../Data/Enums/EState.h"
#include "UCharacterStateComponent.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class GAME2DCPLUSPLUS_API UCharacterStateComponent : public UActorComponent
{
	GENERATED_BODY()
	
public:
    UCharacterStateComponent();

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "State")
    EState CurrentState;

    UFUNCTION(BlueprintCallable, Category = "State")
    bool CanEnterState(EState NewState) const;

    UFUNCTION(BlueprintCallable, Category = "State")
    void SetState(EState NewState);

    UFUNCTION(BlueprintCallable, Category = "State")
    void ResetState();

    UFUNCTION(BlueprintPure, Category = "State")
    bool IsInState(EState State) const { return CurrentState == State; }

    UFUNCTION(BlueprintPure, Category = "State")
    bool IsBeamActive() const;

    bool IsBusy() const;
    
};