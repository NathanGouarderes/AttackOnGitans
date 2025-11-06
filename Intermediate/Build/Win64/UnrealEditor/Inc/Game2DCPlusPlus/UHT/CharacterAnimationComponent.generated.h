// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/CharacterAnimationComponent.h"

#ifdef GAME2DCPLUSPLUS_CharacterAnimationComponent_generated_h
#error "CharacterAnimationComponent.generated.h already included, missing '#pragma once' in CharacterAnimationComponent.h"
#endif
#define GAME2DCPLUSPLUS_CharacterAnimationComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPaperFlipbook;
struct FBeamAttackData;

// ********** Begin Class UCharacterAnimationComponent *********************************************
#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_CharacterAnimationComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPlayChangingBeamAnimation); \
	DECLARE_FUNCTION(execPlayAnimation);


struct Z_Construct_UClass_UCharacterAnimationComponent_Statics;
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UCharacterAnimationComponent_NoRegister();

#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_CharacterAnimationComponent_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCharacterAnimationComponent(); \
	friend struct ::Z_Construct_UClass_UCharacterAnimationComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAME2DCPLUSPLUS_API UClass* ::Z_Construct_UClass_UCharacterAnimationComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UCharacterAnimationComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Game2DCPlusPlus"), Z_Construct_UClass_UCharacterAnimationComponent_NoRegister) \
	DECLARE_SERIALIZER(UCharacterAnimationComponent)


#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_CharacterAnimationComponent_h_30_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCharacterAnimationComponent(UCharacterAnimationComponent&&) = delete; \
	UCharacterAnimationComponent(const UCharacterAnimationComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterAnimationComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterAnimationComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCharacterAnimationComponent) \
	NO_API virtual ~UCharacterAnimationComponent();


#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_CharacterAnimationComponent_h_27_PROLOG
#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_CharacterAnimationComponent_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_CharacterAnimationComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_CharacterAnimationComponent_h_30_INCLASS_NO_PURE_DECLS \
	FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_CharacterAnimationComponent_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCharacterAnimationComponent;

// ********** End Class UCharacterAnimationComponent ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_CharacterAnimationComponent_h

// ********** Begin Enum ERole *********************************************************************
#define FOREACH_ENUM_EROLE(op) \
	op(ERole::Player) \
	op(ERole::Enemy) \
	op(ERole::Boss) \
	op(ERole::NPC) 

enum class ERole : uint8;
template<> struct TIsUEnumClass<ERole> { enum { Value = true }; };
template<> GAME2DCPLUSPLUS_NON_ATTRIBUTED_API UEnum* StaticEnum<ERole>();
// ********** End Enum ERole ***********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
