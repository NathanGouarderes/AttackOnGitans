// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/CharacterCombatComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FAttackData;
struct FHitResult;
#ifdef GAME2DCPLUSPLUS_CharacterCombatComponent_generated_h
#error "CharacterCombatComponent.generated.h already included, missing '#pragma once' in CharacterCombatComponent.h"
#endif
#define GAME2DCPLUSPLUS_CharacterCombatComponent_generated_h

#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_5_Source_Game2DCPlusPlus_Components_CharacterCombatComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsAttacking); \
	DECLARE_FUNCTION(execDoWeaponTrace); \
	DECLARE_FUNCTION(execUpdateHitboxFromSockets); \
	DECLARE_FUNCTION(execOnSwordOverlap);


#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_5_Source_Game2DCPlusPlus_Components_CharacterCombatComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCharacterCombatComponent(); \
	friend struct Z_Construct_UClass_UCharacterCombatComponent_Statics; \
public: \
	DECLARE_CLASS(UCharacterCombatComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Game2DCPlusPlus"), NO_API) \
	DECLARE_SERIALIZER(UCharacterCombatComponent)


#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_5_Source_Game2DCPlusPlus_Components_CharacterCombatComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCharacterCombatComponent(UCharacterCombatComponent&&); \
	UCharacterCombatComponent(const UCharacterCombatComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterCombatComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterCombatComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCharacterCombatComponent) \
	NO_API virtual ~UCharacterCombatComponent();


#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_5_Source_Game2DCPlusPlus_Components_CharacterCombatComponent_h_16_PROLOG
#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_5_Source_Game2DCPlusPlus_Components_CharacterCombatComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_5_Source_Game2DCPlusPlus_Components_CharacterCombatComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_5_Source_Game2DCPlusPlus_Components_CharacterCombatComponent_h_19_INCLASS_NO_PURE_DECLS \
	FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_5_Source_Game2DCPlusPlus_Components_CharacterCombatComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAME2DCPLUSPLUS_API UClass* StaticClass<class UCharacterCombatComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_5_Source_Game2DCPlusPlus_Components_CharacterCombatComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
