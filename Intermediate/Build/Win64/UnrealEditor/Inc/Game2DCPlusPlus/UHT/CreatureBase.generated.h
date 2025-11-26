// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Creatures/CreatureBase.h"

#ifdef GAME2DCPLUSPLUS_CreatureBase_generated_h
#error "CreatureBase.generated.h already included, missing '#pragma once' in CreatureBase.h"
#endif
#define GAME2DCPLUSPLUS_CreatureBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACreatureBase ************************************************************
#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Creatures_CreatureBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGenerateCreature);


struct Z_Construct_UClass_ACreatureBase_Statics;
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_ACreatureBase_NoRegister();

#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Creatures_CreatureBase_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACreatureBase(); \
	friend struct ::Z_Construct_UClass_ACreatureBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAME2DCPLUSPLUS_API UClass* ::Z_Construct_UClass_ACreatureBase_NoRegister(); \
public: \
	DECLARE_CLASS2(ACreatureBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Game2DCPlusPlus"), Z_Construct_UClass_ACreatureBase_NoRegister) \
	DECLARE_SERIALIZER(ACreatureBase)


#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Creatures_CreatureBase_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACreatureBase(ACreatureBase&&) = delete; \
	ACreatureBase(const ACreatureBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACreatureBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACreatureBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACreatureBase) \
	NO_API virtual ~ACreatureBase();


#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Creatures_CreatureBase_h_11_PROLOG
#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Creatures_CreatureBase_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Creatures_CreatureBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Creatures_CreatureBase_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Creatures_CreatureBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACreatureBase;

// ********** End Class ACreatureBase **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Creatures_CreatureBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
