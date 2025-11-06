// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Beams/BeamBase.h"

#ifdef GAME2DCPLUSPLUS_BeamBase_generated_h
#error "BeamBase.generated.h already included, missing '#pragma once' in BeamBase.h"
#endif
#define GAME2DCPLUSPLUS_BeamBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class ABeamBase ****************************************************************
#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Abilities_Beams_BeamBase_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execApplyBeamDamage); \
	DECLARE_FUNCTION(execOnBeamOverlap); \
	DECLARE_FUNCTION(execPerformBeamTraceAndDamage); \
	DECLARE_FUNCTION(execStopBeam); \
	DECLARE_FUNCTION(execReleaseBeam); \
	DECLARE_FUNCTION(execStartChargingBeam);


struct Z_Construct_UClass_ABeamBase_Statics;
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_ABeamBase_NoRegister();

#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Abilities_Beams_BeamBase_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABeamBase(); \
	friend struct ::Z_Construct_UClass_ABeamBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAME2DCPLUSPLUS_API UClass* ::Z_Construct_UClass_ABeamBase_NoRegister(); \
public: \
	DECLARE_CLASS2(ABeamBase, AMyKiAttack, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Game2DCPlusPlus"), Z_Construct_UClass_ABeamBase_NoRegister) \
	DECLARE_SERIALIZER(ABeamBase)


#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Abilities_Beams_BeamBase_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ABeamBase(ABeamBase&&) = delete; \
	ABeamBase(const ABeamBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABeamBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABeamBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABeamBase) \
	NO_API virtual ~ABeamBase();


#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Abilities_Beams_BeamBase_h_18_PROLOG
#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Abilities_Beams_BeamBase_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Abilities_Beams_BeamBase_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Abilities_Beams_BeamBase_h_21_INCLASS_NO_PURE_DECLS \
	FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Abilities_Beams_BeamBase_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ABeamBase;

// ********** End Class ABeamBase ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Abilities_Beams_BeamBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
