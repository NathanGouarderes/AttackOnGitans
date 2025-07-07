// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/FAttackData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAME2DCPLUSPLUS_FAttackData_generated_h
#error "FAttackData.generated.h already included, missing '#pragma once' in FAttackData.h"
#endif
#define GAME2DCPLUSPLUS_FAttackData_generated_h

#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_5_Source_Game2DCPlusPlus_Data_FAttackData_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAttackData_Statics; \
	GAME2DCPLUSPLUS_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> GAME2DCPLUSPLUS_API UScriptStruct* StaticStruct<struct FAttackData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_5_Source_Game2DCPlusPlus_Data_FAttackData_h


#define FOREACH_ENUM_EDAMAGETYPEENUM(op) \
	op(EDamageTypeEnum::Physical) \
	op(EDamageTypeEnum::Fire) \
	op(EDamageTypeEnum::Ice) \
	op(EDamageTypeEnum::Magic) 

enum class EDamageTypeEnum : uint8;
template<> struct TIsUEnumClass<EDamageTypeEnum> { enum { Value = true }; };
template<> GAME2DCPLUSPLUS_API UEnum* StaticEnum<EDamageTypeEnum>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
