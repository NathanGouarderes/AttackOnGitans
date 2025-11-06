// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/HitboxComponent.h"

#ifdef GAME2DCPLUSPLUS_HitboxComponent_generated_h
#error "HitboxComponent.generated.h already included, missing '#pragma once' in HitboxComponent.h"
#endif
#define GAME2DCPLUSPLUS_HitboxComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Delegate FOnCustomHit **********************************************************
#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_HitboxComponent_h_20_DELEGATE \
static void FOnCustomHit_DelegateWrapper(const FMulticastScriptDelegate& OnCustomHit, AActor* Self, AActor* Other);


// ********** End Delegate FOnCustomHit ************************************************************

// ********** Begin Class UHitboxComponent *********************************************************
#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_HitboxComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHitInternal);


struct Z_Construct_UClass_UHitboxComponent_Statics;
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UHitboxComponent_NoRegister();

#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_HitboxComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHitboxComponent(); \
	friend struct ::Z_Construct_UClass_UHitboxComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAME2DCPLUSPLUS_API UClass* ::Z_Construct_UClass_UHitboxComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UHitboxComponent, UBoxComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Game2DCPlusPlus"), Z_Construct_UClass_UHitboxComponent_NoRegister) \
	DECLARE_SERIALIZER(UHitboxComponent)


#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_HitboxComponent_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHitboxComponent(UHitboxComponent&&) = delete; \
	UHitboxComponent(const UHitboxComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHitboxComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHitboxComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHitboxComponent) \
	NO_API virtual ~UHitboxComponent();


#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_HitboxComponent_h_12_PROLOG
#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_HitboxComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_HitboxComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_HitboxComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_HitboxComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHitboxComponent;

// ********** End Class UHitboxComponent ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_HitboxComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
