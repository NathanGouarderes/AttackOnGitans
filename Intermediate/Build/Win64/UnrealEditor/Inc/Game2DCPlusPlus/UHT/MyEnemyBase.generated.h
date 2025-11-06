// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Enemies/MyEnemyBase.h"

#ifdef GAME2DCPLUSPLUS_MyEnemyBase_generated_h
#error "MyEnemyBase.generated.h already included, missing '#pragma once' in MyEnemyBase.h"
#endif
#define GAME2DCPLUSPLUS_MyEnemyBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class AMyEnemyBase *************************************************************
#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Enemies_MyEnemyBase_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlapBegin);


struct Z_Construct_UClass_AMyEnemyBase_Statics;
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_AMyEnemyBase_NoRegister();

#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Enemies_MyEnemyBase_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyEnemyBase(); \
	friend struct ::Z_Construct_UClass_AMyEnemyBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAME2DCPLUSPLUS_API UClass* ::Z_Construct_UClass_AMyEnemyBase_NoRegister(); \
public: \
	DECLARE_CLASS2(AMyEnemyBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Game2DCPlusPlus"), Z_Construct_UClass_AMyEnemyBase_NoRegister) \
	DECLARE_SERIALIZER(AMyEnemyBase) \
	virtual UObject* _getUObject() const override { return const_cast<AMyEnemyBase*>(this); }


#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Enemies_MyEnemyBase_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMyEnemyBase(AMyEnemyBase&&) = delete; \
	AMyEnemyBase(const AMyEnemyBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyEnemyBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyEnemyBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyEnemyBase) \
	NO_API virtual ~AMyEnemyBase();


#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Enemies_MyEnemyBase_h_21_PROLOG
#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Enemies_MyEnemyBase_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Enemies_MyEnemyBase_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Enemies_MyEnemyBase_h_24_INCLASS_NO_PURE_DECLS \
	FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Enemies_MyEnemyBase_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMyEnemyBase;

// ********** End Class AMyEnemyBase ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Enemies_MyEnemyBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
