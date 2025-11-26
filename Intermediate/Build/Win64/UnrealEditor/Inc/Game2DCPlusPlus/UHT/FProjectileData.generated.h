// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/FProjectileData.h"

#ifdef GAME2DCPLUSPLUS_FProjectileData_generated_h
#error "FProjectileData.generated.h already included, missing '#pragma once' in FProjectileData.h"
#endif
#define GAME2DCPLUSPLUS_FProjectileData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FProjectileData ***************************************************
struct Z_Construct_UScriptStruct_FProjectileData_Statics;
#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Data_FProjectileData_h_31_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FProjectileData_Statics; \
	GAME2DCPLUSPLUS_API static class UScriptStruct* StaticStruct(); \
	typedef FAttackData Super;


struct FProjectileData;
// ********** End ScriptStruct FProjectileData *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Data_FProjectileData_h

// ********** Begin Enum EProjectilCategory ********************************************************
#define FOREACH_ENUM_EPROJECTILCATEGORY(op) \
	op(EProjectilCategory::Ki) \
	op(EProjectilCategory::Magic) \
	op(EProjectilCategory::Physic) 

enum class EProjectilCategory : uint8;
template<> struct TIsUEnumClass<EProjectilCategory> { enum { Value = true }; };
template<> GAME2DCPLUSPLUS_NON_ATTRIBUTED_API UEnum* StaticEnum<EProjectilCategory>();
// ********** End Enum EProjectilCategory **********************************************************

// ********** Begin Enum EProjectileType ***********************************************************
#define FOREACH_ENUM_EPROJECTILETYPE(op) \
	op(EProjectileType::Kamehameha) \
	op(EProjectileType::Kiball) \
	op(EProjectileType::Kienzan) \
	op(EProjectileType::None) 

enum class EProjectileType : uint8;
template<> struct TIsUEnumClass<EProjectileType> { enum { Value = true }; };
template<> GAME2DCPLUSPLUS_NON_ATTRIBUTED_API UEnum* StaticEnum<EProjectileType>();
// ********** End Enum EProjectileType *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
