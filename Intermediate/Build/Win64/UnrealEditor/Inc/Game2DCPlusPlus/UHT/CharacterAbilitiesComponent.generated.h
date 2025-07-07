// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/CharacterAbilitiesComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAME2DCPLUSPLUS_CharacterAbilitiesComponent_generated_h
#error "CharacterAbilitiesComponent.generated.h already included, missing '#pragma once' in CharacterAbilitiesComponent.h"
#endif
#define GAME2DCPLUSPLUS_CharacterAbilitiesComponent_generated_h

#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_5_Source_Game2DCPlusPlus_Components_CharacterAbilitiesComponent_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCharacterAbilitiesComponent(); \
	friend struct Z_Construct_UClass_UCharacterAbilitiesComponent_Statics; \
public: \
	DECLARE_CLASS(UCharacterAbilitiesComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Game2DCPlusPlus"), NO_API) \
	DECLARE_SERIALIZER(UCharacterAbilitiesComponent)


#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_5_Source_Game2DCPlusPlus_Components_CharacterAbilitiesComponent_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCharacterAbilitiesComponent(UCharacterAbilitiesComponent&&); \
	UCharacterAbilitiesComponent(const UCharacterAbilitiesComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterAbilitiesComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterAbilitiesComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCharacterAbilitiesComponent) \
	NO_API virtual ~UCharacterAbilitiesComponent();


#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_5_Source_Game2DCPlusPlus_Components_CharacterAbilitiesComponent_h_22_PROLOG
#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_5_Source_Game2DCPlusPlus_Components_CharacterAbilitiesComponent_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_5_Source_Game2DCPlusPlus_Components_CharacterAbilitiesComponent_h_25_INCLASS_NO_PURE_DECLS \
	FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_5_Source_Game2DCPlusPlus_Components_CharacterAbilitiesComponent_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAME2DCPLUSPLUS_API UClass* StaticClass<class UCharacterAbilitiesComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_5_Source_Game2DCPlusPlus_Components_CharacterAbilitiesComponent_h


#define FOREACH_ENUM_EPROJECTILETYPE(op) \
	op(EProjectileType::Kamehameha) \
	op(EProjectileType::Fireball) 

enum class EProjectileType : uint8;
template<> struct TIsUEnumClass<EProjectileType> { enum { Value = true }; };
template<> GAME2DCPLUSPLUS_API UEnum* StaticEnum<EProjectileType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
