// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/CharacterCombatComponent.h"

#ifdef GAME2DCPLUSPLUS_CharacterCombatComponent_generated_h
#error "CharacterCombatComponent.generated.h already included, missing '#pragma once' in CharacterCombatComponent.h"
#endif
#define GAME2DCPLUSPLUS_CharacterCombatComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FAttackData;
struct FHitResult;

// ********** Begin Class UCharacterCombatComponent ************************************************
#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_CharacterCombatComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsAttacking); \
	DECLARE_FUNCTION(execDoWeaponTrace); \
	DECLARE_FUNCTION(execUpdateHitboxFromSockets); \
	DECLARE_FUNCTION(execOnSwordOverlap);


struct Z_Construct_UClass_UCharacterCombatComponent_Statics;
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UCharacterCombatComponent_NoRegister();

#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_CharacterCombatComponent_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCharacterCombatComponent(); \
	friend struct ::Z_Construct_UClass_UCharacterCombatComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAME2DCPLUSPLUS_API UClass* ::Z_Construct_UClass_UCharacterCombatComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UCharacterCombatComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Game2DCPlusPlus"), Z_Construct_UClass_UCharacterCombatComponent_NoRegister) \
	DECLARE_SERIALIZER(UCharacterCombatComponent)


#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_CharacterCombatComponent_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCharacterCombatComponent(UCharacterCombatComponent&&) = delete; \
	UCharacterCombatComponent(const UCharacterCombatComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterCombatComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterCombatComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCharacterCombatComponent) \
	NO_API virtual ~UCharacterCombatComponent();


#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_CharacterCombatComponent_h_18_PROLOG
#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_CharacterCombatComponent_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_CharacterCombatComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_CharacterCombatComponent_h_21_INCLASS_NO_PURE_DECLS \
	FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_CharacterCombatComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCharacterCombatComponent;

// ********** End Class UCharacterCombatComponent **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_CharacterCombatComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
