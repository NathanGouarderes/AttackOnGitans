// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyStandBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef GAME2DCPLUSPLUS_MyStandBase_generated_h
#error "MyStandBase.generated.h already included, missing '#pragma once' in MyStandBase.h"
#endif
#define GAME2DCPLUSPLUS_MyStandBase_generated_h

#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_MyStandBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_MyStandBase_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyStandBase(); \
	friend struct Z_Construct_UClass_AMyStandBase_Statics; \
public: \
	DECLARE_CLASS(AMyStandBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Game2DCPlusPlus"), NO_API) \
	DECLARE_SERIALIZER(AMyStandBase)


#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_MyStandBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMyStandBase(AMyStandBase&&); \
	AMyStandBase(const AMyStandBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyStandBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyStandBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyStandBase) \
	NO_API virtual ~AMyStandBase();


#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_MyStandBase_h_11_PROLOG
#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_MyStandBase_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_MyStandBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_MyStandBase_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_MyStandBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAME2DCPLUSPLUS_API UClass* StaticClass<class AMyStandBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_MyStandBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
