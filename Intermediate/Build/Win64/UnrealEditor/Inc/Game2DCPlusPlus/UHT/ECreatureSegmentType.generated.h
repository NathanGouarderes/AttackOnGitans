// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/Enums/ECreatureSegmentType.h"

#ifdef GAME2DCPLUSPLUS_ECreatureSegmentType_generated_h
#error "ECreatureSegmentType.generated.h already included, missing '#pragma once' in ECreatureSegmentType.h"
#endif
#define GAME2DCPLUSPLUS_ECreatureSegmentType_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Data_Enums_ECreatureSegmentType_h

// ********** Begin Enum ECreatureSegmentType ******************************************************
#define FOREACH_ENUM_ECREATURESEGMENTTYPE(op) \
	op(ECreatureSegmentType::Core) \
	op(ECreatureSegmentType::Leg) \
	op(ECreatureSegmentType::Arm) \
	op(ECreatureSegmentType::Tail) \
	op(ECreatureSegmentType::Head) \
	op(ECreatureSegmentType::Custom) 

enum class ECreatureSegmentType : uint8;
template<> struct TIsUEnumClass<ECreatureSegmentType> { enum { Value = true }; };
template<> GAME2DCPLUSPLUS_NON_ATTRIBUTED_API UEnum* StaticEnum<ECreatureSegmentType>();
// ********** End Enum ECreatureSegmentType ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
