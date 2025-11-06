// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/MyStandBase.h"

#ifdef GAME2DCPLUSPLUS_MyStandBase_generated_h
#error "MyStandBase.generated.h already included, missing '#pragma once' in MyStandBase.h"
#endif
#define GAME2DCPLUSPLUS_MyStandBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class AMyStandBase *************************************************************
#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Abilities_MyStandBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit); \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execUpdateStandPosition);


struct Z_Construct_UClass_AMyStandBase_Statics;
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_AMyStandBase_NoRegister();

#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Abilities_MyStandBase_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyStandBase(); \
	friend struct ::Z_Construct_UClass_AMyStandBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAME2DCPLUSPLUS_API UClass* ::Z_Construct_UClass_AMyStandBase_NoRegister(); \
public: \
	DECLARE_CLASS2(AMyStandBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Game2DCPlusPlus"), Z_Construct_UClass_AMyStandBase_NoRegister) \
	DECLARE_SERIALIZER(AMyStandBase)


#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Abilities_MyStandBase_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMyStandBase(AMyStandBase&&) = delete; \
	AMyStandBase(const AMyStandBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyStandBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyStandBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyStandBase) \
	NO_API virtual ~AMyStandBase();


#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Abilities_MyStandBase_h_15_PROLOG
#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Abilities_MyStandBase_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Abilities_MyStandBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Abilities_MyStandBase_h_18_INCLASS_NO_PURE_DECLS \
	FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Abilities_MyStandBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMyStandBase;

// ********** End Class AMyStandBase ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Abilities_MyStandBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
