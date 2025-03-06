// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyEnemyBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef GAME2DCPLUSPLUS_MyEnemyBase_generated_h
#error "MyEnemyBase.generated.h already included, missing '#pragma once' in MyEnemyBase.h"
#endif
#define GAME2DCPLUSPLUS_MyEnemyBase_generated_h

#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_MyEnemyBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_MyEnemyBase_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyEnemyBase(); \
	friend struct Z_Construct_UClass_AMyEnemyBase_Statics; \
public: \
	DECLARE_CLASS(AMyEnemyBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Game2DCPlusPlus"), NO_API) \
	DECLARE_SERIALIZER(AMyEnemyBase)


#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_MyEnemyBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMyEnemyBase(AMyEnemyBase&&); \
	AMyEnemyBase(const AMyEnemyBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyEnemyBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyEnemyBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyEnemyBase) \
	NO_API virtual ~AMyEnemyBase();


#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_MyEnemyBase_h_14_PROLOG
#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_MyEnemyBase_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_MyEnemyBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_MyEnemyBase_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_MyEnemyBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAME2DCPLUSPLUS_API UClass* StaticClass<class AMyEnemyBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_MyEnemyBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
