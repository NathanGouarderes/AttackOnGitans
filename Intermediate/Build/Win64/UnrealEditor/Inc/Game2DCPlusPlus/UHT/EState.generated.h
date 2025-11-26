// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/Enums/EState.h"

#ifdef GAME2DCPLUSPLUS_EState_generated_h
#error "EState.generated.h already included, missing '#pragma once' in EState.h"
#endif
#define GAME2DCPLUSPLUS_EState_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Data_Enums_EState_h

// ********** Begin Enum EState ********************************************************************
#define FOREACH_ENUM_ESTATE(op) \
	op(EState::Idle) \
	op(EState::ParryStartup) \
	op(EState::ParryActive) \
	op(EState::ParryRecovery) \
	op(EState::DodgeIFrames) \
	op(EState::Staggered) \
	op(EState::WallImpact) \
	op(EState::Buried) \
	op(EState::LaunchedAirborne) \
	op(EState::Walking) \
	op(EState::Jumping) \
	op(EState::Dodging) \
	op(EState::Attacking) \
	op(EState::Blocking) \
	op(EState::ChargingKi) \
	op(EState::ChargingBeam) \
	op(EState::FiringBeam) \
	op(EState::RecoverBeam) \
	op(EState::UsingMagic) \
	op(EState::UsingStand) \
	op(EState::Stunned) \
	op(EState::Dead) 

enum class EState : uint8;
template<> struct TIsUEnumClass<EState> { enum { Value = true }; };
template<> GAME2DCPLUSPLUS_NON_ATTRIBUTED_API UEnum* StaticEnum<EState>();
// ********** End Enum EState **********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
