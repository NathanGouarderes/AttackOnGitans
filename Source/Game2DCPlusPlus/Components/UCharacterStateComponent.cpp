#include "UCharacterStateComponent.h"

UCharacterStateComponent::UCharacterStateComponent()
{
    PrimaryComponentTick.bCanEverTick = false;
    CurrentState = EState::Idle;
}

bool UCharacterStateComponent::CanEnterState(EState NewState) const
{
    switch (CurrentState)
    {
    case EState::Idle:
    case EState::Walking:
        return true;

    case EState::ChargingBeam:
    case EState::FiringBeam:
    case EState::ChargingKi:
    case EState::Attacking:
    case EState::Stunned:
    case EState::Dead:
        return false;

    default:
        return true;
    }
}

void UCharacterStateComponent::SetState(EState NewState)
{
    if (!CanEnterState(NewState))
    {
        UE_LOG(LogTemp, Warning, TEXT("Impossible de changer d'état vers %d (état actuel : %d)"),
            (uint8)NewState, (uint8)CurrentState);
        return;
    }

    CurrentState = NewState;

    UE_LOG(LogTemp, Warning, TEXT("Nouvel état : %s"),
        *UEnum::GetValueAsString(CurrentState));
}

void UCharacterStateComponent::ResetState()
{
    CurrentState = EState::Idle;
}

bool UCharacterStateComponent::IsBeamActive() const
{
    return (CurrentState == EState::ChargingBeam || CurrentState == EState::FiringBeam);
}

bool UCharacterStateComponent::IsBusy() const
{
    return (CurrentState != EState::Idle && CurrentState != EState::Walking);
}
