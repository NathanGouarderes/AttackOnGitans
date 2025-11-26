// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game2DCPlusPlus/Data/FAttackData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFAttackData() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
GAME2DCPLUSPLUS_API UEnum* Z_Construct_UEnum_Game2DCPlusPlus_EDamageTypeEnum();
GAME2DCPLUSPLUS_API UScriptStruct* Z_Construct_UScriptStruct_FAttackData();
PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
UPackage* Z_Construct_UPackage__Script_Game2DCPlusPlus();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EDamageTypeEnum ***********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDamageTypeEnum;
static UEnum* EDamageTypeEnum_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDamageTypeEnum.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDamageTypeEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Game2DCPlusPlus_EDamageTypeEnum, (UObject*)Z_Construct_UPackage__Script_Game2DCPlusPlus(), TEXT("EDamageTypeEnum"));
	}
	return Z_Registration_Info_UEnum_EDamageTypeEnum.OuterSingleton;
}
template<> GAME2DCPLUSPLUS_NON_ATTRIBUTED_API UEnum* StaticEnum<EDamageTypeEnum>()
{
	return EDamageTypeEnum_StaticEnum();
}
struct Z_Construct_UEnum_Game2DCPlusPlus_EDamageTypeEnum_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Fire.DisplayName", "Fire" },
		{ "Fire.Name", "EDamageTypeEnum::Fire" },
		{ "Ice.DisplayName", "Ice" },
		{ "Ice.Name", "EDamageTypeEnum::Ice" },
		{ "Ki.DisplayName", "Ki" },
		{ "Ki.Name", "EDamageTypeEnum::Ki" },
		{ "Magic.DisplayName", "Magic" },
		{ "Magic.Name", "EDamageTypeEnum::Magic" },
		{ "ModuleRelativePath", "Data/FAttackData.h" },
		{ "Physical.DisplayName", "Physical" },
		{ "Physical.Name", "EDamageTypeEnum::Physical" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDamageTypeEnum::Physical", (int64)EDamageTypeEnum::Physical },
		{ "EDamageTypeEnum::Fire", (int64)EDamageTypeEnum::Fire },
		{ "EDamageTypeEnum::Ice", (int64)EDamageTypeEnum::Ice },
		{ "EDamageTypeEnum::Magic", (int64)EDamageTypeEnum::Magic },
		{ "EDamageTypeEnum::Ki", (int64)EDamageTypeEnum::Ki },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Game2DCPlusPlus_EDamageTypeEnum_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Game2DCPlusPlus,
	nullptr,
	"EDamageTypeEnum",
	"EDamageTypeEnum",
	Z_Construct_UEnum_Game2DCPlusPlus_EDamageTypeEnum_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Game2DCPlusPlus_EDamageTypeEnum_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Game2DCPlusPlus_EDamageTypeEnum_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Game2DCPlusPlus_EDamageTypeEnum_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Game2DCPlusPlus_EDamageTypeEnum()
{
	if (!Z_Registration_Info_UEnum_EDamageTypeEnum.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDamageTypeEnum.InnerSingleton, Z_Construct_UEnum_Game2DCPlusPlus_EDamageTypeEnum_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDamageTypeEnum.InnerSingleton;
}
// ********** End Enum EDamageTypeEnum *************************************************************

// ********** Begin ScriptStruct FAttackData *******************************************************
static_assert(std::is_polymorphic<FAttackData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FAttackData cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAttackData;
class UScriptStruct* FAttackData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAttackData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAttackData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAttackData, (UObject*)Z_Construct_UPackage__Script_Game2DCPlusPlus(), TEXT("AttackData"));
	}
	return Z_Registration_Info_UScriptStruct_FAttackData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FAttackData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Data/FAttackData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackName_MetaData[] = {
		{ "Category", "AttackData" },
		{ "ModuleRelativePath", "Data/FAttackData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputAction_MetaData[] = {
		{ "Category", "AttackData" },
		{ "ModuleRelativePath", "Data/FAttackData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresMovement_MetaData[] = {
		{ "Category", "AttackData" },
		{ "ModuleRelativePath", "Data/FAttackData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresAirborne_MetaData[] = {
		{ "Category", "AttackData" },
		{ "ModuleRelativePath", "Data/FAttackData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresCrouch_MetaData[] = {
		{ "Category", "AttackData" },
		{ "ModuleRelativePath", "Data/FAttackData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresStandActive_MetaData[] = {
		{ "Category", "AttackData" },
		{ "ModuleRelativePath", "Data/FAttackData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresKiCharging_MetaData[] = {
		{ "Category", "AttackData" },
		{ "ModuleRelativePath", "Data/FAttackData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresKiCharged_MetaData[] = {
		{ "Category", "AttackData" },
		{ "ModuleRelativePath", "Data/FAttackData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[] = {
		{ "Category", "AttackData" },
		{ "ModuleRelativePath", "Data/FAttackData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[] = {
		{ "Category", "AttackData" },
		{ "ModuleRelativePath", "Data/FAttackData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartupTime_MetaData[] = {
		{ "Category", "AttackData" },
		{ "ModuleRelativePath", "Data/FAttackData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveTime_MetaData[] = {
		{ "Category", "AttackData" },
		{ "ModuleRelativePath", "Data/FAttackData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bParryable_MetaData[] = {
		{ "Category", "AttackData" },
		{ "ModuleRelativePath", "Data/FAttackData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBlockable_MetaData[] = {
		{ "Category", "AttackData" },
		{ "ModuleRelativePath", "Data/FAttackData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDodgeable_MetaData[] = {
		{ "Category", "AttackData" },
		{ "ModuleRelativePath", "Data/FAttackData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartupMs_MetaData[] = {
		{ "Category", "AttackData" },
		{ "ModuleRelativePath", "Data/FAttackData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveMs_MetaData[] = {
		{ "Category", "AttackData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// frame data\n" },
#endif
		{ "ModuleRelativePath", "Data/FAttackData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "frame data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecoveryMs_MetaData[] = {
		{ "Category", "AttackData" },
		{ "ModuleRelativePath", "Data/FAttackData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoiseDamage_MetaData[] = {
		{ "Category", "AttackData" },
		{ "ModuleRelativePath", "Data/FAttackData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChipDamage_MetaData[] = {
		{ "Category", "AttackData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// pour stagger/guardbreak\n" },
#endif
		{ "ModuleRelativePath", "Data/FAttackData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "pour stagger/guardbreak" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KnockbackStrength_MetaData[] = {
		{ "Category", "AttackData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// d\xef\xbf\xbdg\xef\xbf\xbdt traversant la garde\n" },
#endif
		{ "ModuleRelativePath", "Data/FAttackData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "d\xef\xbf\xbdg\xef\xbf\xbdt traversant la garde" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KnockupStrength_MetaData[] = {
		{ "Category", "AttackData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// X/Z\n" },
#endif
		{ "ModuleRelativePath", "Data/FAttackData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "X/Z" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MomentumMassScale_MetaData[] = {
		{ "Category", "AttackData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// sauts a\xef\xbf\xbdriens DBZ\n" },
#endif
		{ "ModuleRelativePath", "Data/FAttackData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "sauts a\xef\xbf\xbdriens DBZ" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParryWindowMs_MetaData[] = {
		{ "Category", "AttackData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Parry/Dodge\n" },
#endif
		{ "ModuleRelativePath", "Data/FAttackData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Parry/Dodge" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerfectParryWindowMs_MetaData[] = {
		{ "Category", "AttackData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// timing standard\n" },
#endif
		{ "ModuleRelativePath", "Data/FAttackData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "timing standard" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DodgeIFrameMs_MetaData[] = {
		{ "Category", "AttackData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// timing parfait\n" },
#endif
		{ "ModuleRelativePath", "Data/FAttackData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "timing parfait" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerfectDodgeIFrameMs_MetaData[] = {
		{ "Category", "AttackData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// invincibilit\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Data/FAttackData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "invincibilit\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeDilationOnPerfect_MetaData[] = {
		{ "Category", "AttackData" },
		{ "ModuleRelativePath", "Data/FAttackData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsBeam_MetaData[] = {
		{ "Category", "AttackData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Beams\n" },
#endif
		{ "ModuleRelativePath", "Data/FAttackData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Beams" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeflectYawDegreesOnPerfect_MetaData[] = {
		{ "Category", "AttackData" },
		{ "ModuleRelativePath", "Data/FAttackData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeflectDepthOffsetY_MetaData[] = {
		{ "Category", "AttackData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// bascule vers Y\n" },
#endif
		{ "ModuleRelativePath", "Data/FAttackData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "bascule vers Y" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeflectLifetimeAfterMs_MetaData[] = {
		{ "Category", "AttackData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbdprofondeur\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Data/FAttackData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbdprofondeur\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBreaksWalls_MetaData[] = {
		{ "Category", "AttackData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Interaction d\xef\xbf\xbd""cor\n" },
#endif
		{ "ModuleRelativePath", "Data/FAttackData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Interaction d\xef\xbf\xbd""cor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanBuryTarget_MetaData[] = {
		{ "Category", "AttackData" },
		{ "ModuleRelativePath", "Data/FAttackData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuryDepthZ_MetaData[] = {
		{ "Category", "AttackData" },
		{ "ModuleRelativePath", "Data/FAttackData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TerrainDamage_MetaData[] = {
		{ "Category", "AttackData" },
		{ "ModuleRelativePath", "Data/FAttackData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestructibleChannel_MetaData[] = {
		{ "Category", "AttackData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// option : cat\xef\xbf\xbdgorie de d\xef\xbf\xbd""cor vis\xef\xbf\xbd""e\n" },
#endif
		{ "ModuleRelativePath", "Data/FAttackData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "option : cat\xef\xbf\xbdgorie de d\xef\xbf\xbd""cor vis\xef\xbf\xbd""e" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[] = {
		{ "Category", "AttackData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(EditAnywhere, BlueprintReadOnly)\n//float RecoveryTime;\n" },
#endif
		{ "ModuleRelativePath", "Data/FAttackData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadOnly)\nfloat RecoveryTime;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[] = {
		{ "Category", "AttackData" },
		{ "ModuleRelativePath", "Data/FAttackData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceSockets_MetaData[] = {
		{ "Category", "AttackData" },
		{ "ModuleRelativePath", "Data/FAttackData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_AttackName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InputAction;
	static void NewProp_bRequiresMovement_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresMovement;
	static void NewProp_bRequiresAirborne_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresAirborne;
	static void NewProp_bRequiresCrouch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresCrouch;
	static void NewProp_bRequiresStandActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresStandActive;
	static void NewProp_bRequiresKiCharging_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresKiCharging;
	static void NewProp_bRequiresKiCharged_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresKiCharged;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Range;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartupTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ActiveTime;
	static void NewProp_bParryable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bParryable;
	static void NewProp_bBlockable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlockable;
	static void NewProp_bDodgeable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDodgeable;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartupMs;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ActiveMs;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RecoveryMs;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PoiseDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ChipDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_KnockbackStrength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_KnockupStrength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MomentumMassScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ParryWindowMs;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PerfectParryWindowMs;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DodgeIFrameMs;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PerfectDodgeIFrameMs;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeDilationOnPerfect;
	static void NewProp_bIsBeam_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsBeam;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeflectYawDegreesOnPerfect;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeflectDepthOffsetY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeflectLifetimeAfterMs;
	static void NewProp_bBreaksWalls_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBreaksWalls;
	static void NewProp_bCanBuryTarget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanBuryTarget;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BuryDepthZ;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TerrainDamage;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DestructibleChannel;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Animation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DamageType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DamageType;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TraceSockets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TraceSockets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAttackData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_AttackName = { "AttackName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttackData, AttackName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackName_MetaData), NewProp_AttackName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttackData, InputAction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputAction_MetaData), NewProp_InputAction_MetaData) };
void Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_bRequiresMovement_SetBit(void* Obj)
{
	((FAttackData*)Obj)->bRequiresMovement = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_bRequiresMovement = { "bRequiresMovement", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAttackData), &Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_bRequiresMovement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequiresMovement_MetaData), NewProp_bRequiresMovement_MetaData) };
void Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_bRequiresAirborne_SetBit(void* Obj)
{
	((FAttackData*)Obj)->bRequiresAirborne = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_bRequiresAirborne = { "bRequiresAirborne", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAttackData), &Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_bRequiresAirborne_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequiresAirborne_MetaData), NewProp_bRequiresAirborne_MetaData) };
void Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_bRequiresCrouch_SetBit(void* Obj)
{
	((FAttackData*)Obj)->bRequiresCrouch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_bRequiresCrouch = { "bRequiresCrouch", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAttackData), &Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_bRequiresCrouch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequiresCrouch_MetaData), NewProp_bRequiresCrouch_MetaData) };
void Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_bRequiresStandActive_SetBit(void* Obj)
{
	((FAttackData*)Obj)->bRequiresStandActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_bRequiresStandActive = { "bRequiresStandActive", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAttackData), &Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_bRequiresStandActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequiresStandActive_MetaData), NewProp_bRequiresStandActive_MetaData) };
void Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_bRequiresKiCharging_SetBit(void* Obj)
{
	((FAttackData*)Obj)->bRequiresKiCharging = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_bRequiresKiCharging = { "bRequiresKiCharging", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAttackData), &Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_bRequiresKiCharging_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequiresKiCharging_MetaData), NewProp_bRequiresKiCharging_MetaData) };
void Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_bRequiresKiCharged_SetBit(void* Obj)
{
	((FAttackData*)Obj)->bRequiresKiCharged = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_bRequiresKiCharged = { "bRequiresKiCharged", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAttackData), &Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_bRequiresKiCharged_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequiresKiCharged_MetaData), NewProp_bRequiresKiCharged_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttackData, Damage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damage_MetaData), NewProp_Damage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttackData, Range), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Range_MetaData), NewProp_Range_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_StartupTime = { "StartupTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttackData, StartupTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartupTime_MetaData), NewProp_StartupTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_ActiveTime = { "ActiveTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttackData, ActiveTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveTime_MetaData), NewProp_ActiveTime_MetaData) };
void Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_bParryable_SetBit(void* Obj)
{
	((FAttackData*)Obj)->bParryable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_bParryable = { "bParryable", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAttackData), &Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_bParryable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bParryable_MetaData), NewProp_bParryable_MetaData) };
void Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_bBlockable_SetBit(void* Obj)
{
	((FAttackData*)Obj)->bBlockable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_bBlockable = { "bBlockable", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAttackData), &Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_bBlockable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBlockable_MetaData), NewProp_bBlockable_MetaData) };
void Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_bDodgeable_SetBit(void* Obj)
{
	((FAttackData*)Obj)->bDodgeable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_bDodgeable = { "bDodgeable", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAttackData), &Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_bDodgeable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDodgeable_MetaData), NewProp_bDodgeable_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_StartupMs = { "StartupMs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttackData, StartupMs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartupMs_MetaData), NewProp_StartupMs_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_ActiveMs = { "ActiveMs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttackData, ActiveMs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveMs_MetaData), NewProp_ActiveMs_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_RecoveryMs = { "RecoveryMs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttackData, RecoveryMs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecoveryMs_MetaData), NewProp_RecoveryMs_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_PoiseDamage = { "PoiseDamage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttackData, PoiseDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoiseDamage_MetaData), NewProp_PoiseDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_ChipDamage = { "ChipDamage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttackData, ChipDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChipDamage_MetaData), NewProp_ChipDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_KnockbackStrength = { "KnockbackStrength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttackData, KnockbackStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KnockbackStrength_MetaData), NewProp_KnockbackStrength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_KnockupStrength = { "KnockupStrength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttackData, KnockupStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KnockupStrength_MetaData), NewProp_KnockupStrength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_MomentumMassScale = { "MomentumMassScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttackData, MomentumMassScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MomentumMassScale_MetaData), NewProp_MomentumMassScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_ParryWindowMs = { "ParryWindowMs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttackData, ParryWindowMs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParryWindowMs_MetaData), NewProp_ParryWindowMs_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_PerfectParryWindowMs = { "PerfectParryWindowMs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttackData, PerfectParryWindowMs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerfectParryWindowMs_MetaData), NewProp_PerfectParryWindowMs_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_DodgeIFrameMs = { "DodgeIFrameMs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttackData, DodgeIFrameMs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DodgeIFrameMs_MetaData), NewProp_DodgeIFrameMs_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_PerfectDodgeIFrameMs = { "PerfectDodgeIFrameMs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttackData, PerfectDodgeIFrameMs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerfectDodgeIFrameMs_MetaData), NewProp_PerfectDodgeIFrameMs_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_TimeDilationOnPerfect = { "TimeDilationOnPerfect", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttackData, TimeDilationOnPerfect), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeDilationOnPerfect_MetaData), NewProp_TimeDilationOnPerfect_MetaData) };
void Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_bIsBeam_SetBit(void* Obj)
{
	((FAttackData*)Obj)->bIsBeam = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_bIsBeam = { "bIsBeam", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAttackData), &Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_bIsBeam_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsBeam_MetaData), NewProp_bIsBeam_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_DeflectYawDegreesOnPerfect = { "DeflectYawDegreesOnPerfect", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttackData, DeflectYawDegreesOnPerfect), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeflectYawDegreesOnPerfect_MetaData), NewProp_DeflectYawDegreesOnPerfect_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_DeflectDepthOffsetY = { "DeflectDepthOffsetY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttackData, DeflectDepthOffsetY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeflectDepthOffsetY_MetaData), NewProp_DeflectDepthOffsetY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_DeflectLifetimeAfterMs = { "DeflectLifetimeAfterMs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttackData, DeflectLifetimeAfterMs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeflectLifetimeAfterMs_MetaData), NewProp_DeflectLifetimeAfterMs_MetaData) };
void Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_bBreaksWalls_SetBit(void* Obj)
{
	((FAttackData*)Obj)->bBreaksWalls = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_bBreaksWalls = { "bBreaksWalls", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAttackData), &Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_bBreaksWalls_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBreaksWalls_MetaData), NewProp_bBreaksWalls_MetaData) };
void Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_bCanBuryTarget_SetBit(void* Obj)
{
	((FAttackData*)Obj)->bCanBuryTarget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_bCanBuryTarget = { "bCanBuryTarget", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAttackData), &Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_bCanBuryTarget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanBuryTarget_MetaData), NewProp_bCanBuryTarget_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_BuryDepthZ = { "BuryDepthZ", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttackData, BuryDepthZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuryDepthZ_MetaData), NewProp_BuryDepthZ_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_TerrainDamage = { "TerrainDamage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttackData, TerrainDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TerrainDamage_MetaData), NewProp_TerrainDamage_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_DestructibleChannel = { "DestructibleChannel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttackData, DestructibleChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestructibleChannel_MetaData), NewProp_DestructibleChannel_MetaData) }; // 756624936
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttackData, Animation), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Animation_MetaData), NewProp_Animation_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_DamageType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttackData, DamageType), Z_Construct_UEnum_Game2DCPlusPlus_EDamageTypeEnum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageType_MetaData), NewProp_DamageType_MetaData) }; // 2221864232
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_TraceSockets_Inner = { "TraceSockets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_TraceSockets = { "TraceSockets", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttackData, TraceSockets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceSockets_MetaData), NewProp_TraceSockets_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAttackData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_AttackName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_InputAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_bRequiresMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_bRequiresAirborne,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_bRequiresCrouch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_bRequiresStandActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_bRequiresKiCharging,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_bRequiresKiCharged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_Range,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_StartupTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_ActiveTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_bParryable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_bBlockable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_bDodgeable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_StartupMs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_ActiveMs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_RecoveryMs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_PoiseDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_ChipDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_KnockbackStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_KnockupStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_MomentumMassScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_ParryWindowMs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_PerfectParryWindowMs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_DodgeIFrameMs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_PerfectDodgeIFrameMs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_TimeDilationOnPerfect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_bIsBeam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_DeflectYawDegreesOnPerfect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_DeflectDepthOffsetY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_DeflectLifetimeAfterMs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_bBreaksWalls,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_bCanBuryTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_BuryDepthZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_TerrainDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_DestructibleChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_Animation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_DamageType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_DamageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_TraceSockets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_TraceSockets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttackData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAttackData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Game2DCPlusPlus,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"AttackData",
	Z_Construct_UScriptStruct_FAttackData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttackData_Statics::PropPointers),
	sizeof(FAttackData),
	alignof(FAttackData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttackData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAttackData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAttackData()
{
	if (!Z_Registration_Info_UScriptStruct_FAttackData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAttackData.InnerSingleton, Z_Construct_UScriptStruct_FAttackData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FAttackData.InnerSingleton;
}
// ********** End ScriptStruct FAttackData *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Data_FAttackData_h__Script_Game2DCPlusPlus_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDamageTypeEnum_StaticEnum, TEXT("EDamageTypeEnum"), &Z_Registration_Info_UEnum_EDamageTypeEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2221864232U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAttackData::StaticStruct, Z_Construct_UScriptStruct_FAttackData_Statics::NewStructOps, TEXT("AttackData"), &Z_Registration_Info_UScriptStruct_FAttackData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAttackData), 3263392156U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Data_FAttackData_h__Script_Game2DCPlusPlus_3799079002(TEXT("/Script/Game2DCPlusPlus"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Data_FAttackData_h__Script_Game2DCPlusPlus_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Data_FAttackData_h__Script_Game2DCPlusPlus_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Data_FAttackData_h__Script_Game2DCPlusPlus_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Data_FAttackData_h__Script_Game2DCPlusPlus_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
