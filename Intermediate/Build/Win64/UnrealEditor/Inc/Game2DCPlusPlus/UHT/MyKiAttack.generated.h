// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/MyKiAttack.h"

#ifdef GAME2DCPLUSPLUS_MyKiAttack_generated_h
#error "MyKiAttack.generated.h already included, missing '#pragma once' in MyKiAttack.h"
#endif
#define GAME2DCPLUSPLUS_MyKiAttack_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AMyKiAttack **************************************************************
struct Z_Construct_UClass_AMyKiAttack_Statics;
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_AMyKiAttack_NoRegister();

#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Abilities_MyKiAttack_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyKiAttack(); \
	friend struct ::Z_Construct_UClass_AMyKiAttack_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAME2DCPLUSPLUS_API UClass* ::Z_Construct_UClass_AMyKiAttack_NoRegister(); \
public: \
	DECLARE_CLASS2(AMyKiAttack, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Game2DCPlusPlus"), Z_Construct_UClass_AMyKiAttack_NoRegister) \
	DECLARE_SERIALIZER(AMyKiAttack)


#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Abilities_MyKiAttack_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMyKiAttack(AMyKiAttack&&) = delete; \
	AMyKiAttack(const AMyKiAttack&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyKiAttack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyKiAttack); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyKiAttack) \
	NO_API virtual ~AMyKiAttack();


#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Abilities_MyKiAttack_h_17_PROLOG
#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Abilities_MyKiAttack_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Abilities_MyKiAttack_h_20_INCLASS_NO_PURE_DECLS \
	FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Abilities_MyKiAttack_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMyKiAttack;

// ********** End Class AMyKiAttack ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Abilities_MyKiAttack_h

// ********** Begin Enum EKiAttackType *************************************************************
#define FOREACH_ENUM_EKIATTACKTYPE(op) \
	op(EKiAttackType::Projectile) \
	op(EKiAttackType::Beam) 

enum class EKiAttackType : uint8;
template<> struct TIsUEnumClass<EKiAttackType> { enum { Value = true }; };
template<> GAME2DCPLUSPLUS_NON_ATTRIBUTED_API UEnum* StaticEnum<EKiAttackType>();
// ********** End Enum EKiAttackType ***************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
