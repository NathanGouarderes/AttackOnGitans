// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/UCharacterStateComponent.h"

#ifdef GAME2DCPLUSPLUS_UCharacterStateComponent_generated_h
#error "UCharacterStateComponent.generated.h already included, missing '#pragma once' in UCharacterStateComponent.h"
#endif
#define GAME2DCPLUSPLUS_UCharacterStateComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
enum class EState : uint8;
struct FAttackData;
struct FHitResult;

// ********** Begin Class UCharacterStateComponent *************************************************
#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_UCharacterStateComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsBeamActive); \
	DECLARE_FUNCTION(execIsInState); \
	DECLARE_FUNCTION(execTryResolveDefence); \
	DECLARE_FUNCTION(execResetState); \
	DECLARE_FUNCTION(execSetState); \
	DECLARE_FUNCTION(execCanEnterState);


struct Z_Construct_UClass_UCharacterStateComponent_Statics;
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UCharacterStateComponent_NoRegister();

#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_UCharacterStateComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCharacterStateComponent(); \
	friend struct ::Z_Construct_UClass_UCharacterStateComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAME2DCPLUSPLUS_API UClass* ::Z_Construct_UClass_UCharacterStateComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UCharacterStateComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Game2DCPlusPlus"), Z_Construct_UClass_UCharacterStateComponent_NoRegister) \
	DECLARE_SERIALIZER(UCharacterStateComponent)


#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_UCharacterStateComponent_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCharacterStateComponent(UCharacterStateComponent&&) = delete; \
	UCharacterStateComponent(const UCharacterStateComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterStateComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterStateComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCharacterStateComponent) \
	NO_API virtual ~UCharacterStateComponent();


#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_UCharacterStateComponent_h_12_PROLOG
#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_UCharacterStateComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_UCharacterStateComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_UCharacterStateComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_UCharacterStateComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCharacterStateComponent;

// ********** End Class UCharacterStateComponent ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_UCharacterStateComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
