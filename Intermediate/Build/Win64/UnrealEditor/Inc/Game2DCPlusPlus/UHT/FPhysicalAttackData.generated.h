// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/FPhysicalAttackData.h"

#ifdef GAME2DCPLUSPLUS_FPhysicalAttackData_generated_h
#error "FPhysicalAttackData.generated.h already included, missing '#pragma once' in FPhysicalAttackData.h"
#endif
#define GAME2DCPLUSPLUS_FPhysicalAttackData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPhysicalAttackData ***********************************************
struct Z_Construct_UScriptStruct_FPhysicalAttackData_Statics;
#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Data_FPhysicalAttackData_h_23_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPhysicalAttackData_Statics; \
	GAME2DCPLUSPLUS_API static class UScriptStruct* StaticStruct(); \
	typedef FAttackData Super;


struct FPhysicalAttackData;
// ********** End ScriptStruct FPhysicalAttackData *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Data_FPhysicalAttackData_h

// ********** Begin Enum EPhysicalDamageType *******************************************************
#define FOREACH_ENUM_EPHYSICALDAMAGETYPE(op) \
	op(EPhysicalDamageType::Tranchant) \
	op(EPhysicalDamageType::Contondant) \
	op(EPhysicalDamageType::Perforant) 

enum class EPhysicalDamageType : uint8;
template<> struct TIsUEnumClass<EPhysicalDamageType> { enum { Value = true }; };
template<> GAME2DCPLUSPLUS_NON_ATTRIBUTED_API UEnum* StaticEnum<EPhysicalDamageType>();
// ********** End Enum EPhysicalDamageType *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
