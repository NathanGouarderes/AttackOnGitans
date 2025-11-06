// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Projectiles/MyProjectileBase.h"

#ifdef GAME2DCPLUSPLUS_MyProjectileBase_generated_h
#error "MyProjectileBase.generated.h already included, missing '#pragma once' in MyProjectileBase.h"
#endif
#define GAME2DCPLUSPLUS_MyProjectileBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class AMyProjectileBase ********************************************************
#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Abilities_Projectiles_MyProjectileBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit); \
	DECLARE_FUNCTION(execOnOverlapBegin);


struct Z_Construct_UClass_AMyProjectileBase_Statics;
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_AMyProjectileBase_NoRegister();

#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Abilities_Projectiles_MyProjectileBase_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyProjectileBase(); \
	friend struct ::Z_Construct_UClass_AMyProjectileBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAME2DCPLUSPLUS_API UClass* ::Z_Construct_UClass_AMyProjectileBase_NoRegister(); \
public: \
	DECLARE_CLASS2(AMyProjectileBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Game2DCPlusPlus"), Z_Construct_UClass_AMyProjectileBase_NoRegister) \
	DECLARE_SERIALIZER(AMyProjectileBase)


#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Abilities_Projectiles_MyProjectileBase_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMyProjectileBase(AMyProjectileBase&&) = delete; \
	AMyProjectileBase(const AMyProjectileBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyProjectileBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProjectileBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyProjectileBase) \
	NO_API virtual ~AMyProjectileBase();


#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Abilities_Projectiles_MyProjectileBase_h_11_PROLOG
#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Abilities_Projectiles_MyProjectileBase_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Abilities_Projectiles_MyProjectileBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Abilities_Projectiles_MyProjectileBase_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Abilities_Projectiles_MyProjectileBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMyProjectileBase;

// ********** End Class AMyProjectileBase **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Abilities_Projectiles_MyProjectileBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
