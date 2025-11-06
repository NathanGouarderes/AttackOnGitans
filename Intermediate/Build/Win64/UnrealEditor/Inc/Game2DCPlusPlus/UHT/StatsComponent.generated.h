// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/StatsComponent.h"

#ifdef GAME2DCPLUSPLUS_StatsComponent_generated_h
#error "StatsComponent.generated.h already included, missing '#pragma once' in StatsComponent.h"
#endif
#define GAME2DCPLUSPLUS_StatsComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UStatsComponent **********************************************************
#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_StatsComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsDead); \
	DECLARE_FUNCTION(execHeal); \
	DECLARE_FUNCTION(execApplyDamages);


struct Z_Construct_UClass_UStatsComponent_Statics;
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UStatsComponent_NoRegister();

#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_StatsComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStatsComponent(); \
	friend struct ::Z_Construct_UClass_UStatsComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAME2DCPLUSPLUS_API UClass* ::Z_Construct_UClass_UStatsComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UStatsComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Game2DCPlusPlus"), Z_Construct_UClass_UStatsComponent_NoRegister) \
	DECLARE_SERIALIZER(UStatsComponent)


#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_StatsComponent_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStatsComponent(UStatsComponent&&) = delete; \
	UStatsComponent(const UStatsComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStatsComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStatsComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStatsComponent) \
	NO_API virtual ~UStatsComponent();


#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_StatsComponent_h_11_PROLOG
#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_StatsComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_StatsComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_StatsComponent_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_StatsComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStatsComponent;

// ********** End Class UStatsComponent ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_StatsComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
