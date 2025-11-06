// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game2DCPlusPlus/Data/FBeamAttackData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFBeamAttackData() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_ABeamBase_NoRegister();
GAME2DCPLUSPLUS_API UScriptStruct* Z_Construct_UScriptStruct_FAttackData();
GAME2DCPLUSPLUS_API UScriptStruct* Z_Construct_UScriptStruct_FBeamAttackData();
PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
UPackage* Z_Construct_UPackage__Script_Game2DCPlusPlus();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FBeamAttackData ***************************************************
static_assert(std::is_polymorphic<FBeamAttackData>() == std::is_polymorphic<FAttackData>(), "USTRUCT FBeamAttackData cannot be polymorphic unless super FAttackData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FBeamAttackData;
class UScriptStruct* FBeamAttackData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FBeamAttackData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FBeamAttackData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBeamAttackData, (UObject*)Z_Construct_UPackage__Script_Game2DCPlusPlus(), TEXT("BeamAttackData"));
	}
	return Z_Registration_Info_UScriptStruct_FBeamAttackData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FBeamAttackData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Data/FBeamAttackData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KiCostPerSecond_MetaData[] = {
		{ "Category", "BeamAttackData" },
		{ "ModuleRelativePath", "Data/FBeamAttackData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrowthRate_MetaData[] = {
		{ "Category", "BeamAttackData" },
		{ "ModuleRelativePath", "Data/FBeamAttackData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLength_MetaData[] = {
		{ "Category", "BeamAttackData" },
		{ "ModuleRelativePath", "Data/FBeamAttackData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageTickInterval_MetaData[] = {
		{ "Category", "BeamAttackData" },
		{ "ModuleRelativePath", "Data/FBeamAttackData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageCooldown_MetaData[] = {
		{ "Category", "BeamAttackData" },
		{ "ModuleRelativePath", "Data/FBeamAttackData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStopIfMoving_MetaData[] = {
		{ "Category", "BeamAttackData" },
		{ "ModuleRelativePath", "Data/FBeamAttackData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCharginBeamAnimation_MetaData[] = {
		{ "Category", "BeamAttackData" },
		{ "ModuleRelativePath", "Data/FBeamAttackData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemyCharginBeamAnimation_MetaData[] = {
		{ "Category", "BeamAttackData" },
		{ "ModuleRelativePath", "Data/FBeamAttackData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChargingSphereAnimation_MetaData[] = {
		{ "Category", "BeamAttackData" },
		{ "ModuleRelativePath", "Data/FBeamAttackData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BeamClass_MetaData[] = {
		{ "Category", "BeamAttackData" },
		{ "ModuleRelativePath", "Data/FBeamAttackData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChargeSockets_MetaData[] = {
		{ "Category", "BeamAttackData" },
		{ "ModuleRelativePath", "Data/FBeamAttackData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_KiCostPerSecond;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GrowthRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageTickInterval;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageCooldown;
	static void NewProp_bStopIfMoving_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopIfMoving;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PlayerCharginBeamAnimation;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_EnemyCharginBeamAnimation;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ChargingSphereAnimation;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_BeamClass;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ChargeSockets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBeamAttackData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBeamAttackData_Statics::NewProp_KiCostPerSecond = { "KiCostPerSecond", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBeamAttackData, KiCostPerSecond), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KiCostPerSecond_MetaData), NewProp_KiCostPerSecond_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBeamAttackData_Statics::NewProp_GrowthRate = { "GrowthRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBeamAttackData, GrowthRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrowthRate_MetaData), NewProp_GrowthRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBeamAttackData_Statics::NewProp_MaxLength = { "MaxLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBeamAttackData, MaxLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLength_MetaData), NewProp_MaxLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBeamAttackData_Statics::NewProp_DamageTickInterval = { "DamageTickInterval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBeamAttackData, DamageTickInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageTickInterval_MetaData), NewProp_DamageTickInterval_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBeamAttackData_Statics::NewProp_DamageCooldown = { "DamageCooldown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBeamAttackData, DamageCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageCooldown_MetaData), NewProp_DamageCooldown_MetaData) };
void Z_Construct_UScriptStruct_FBeamAttackData_Statics::NewProp_bStopIfMoving_SetBit(void* Obj)
{
	((FBeamAttackData*)Obj)->bStopIfMoving = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBeamAttackData_Statics::NewProp_bStopIfMoving = { "bStopIfMoving", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FBeamAttackData), &Z_Construct_UScriptStruct_FBeamAttackData_Statics::NewProp_bStopIfMoving_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStopIfMoving_MetaData), NewProp_bStopIfMoving_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FBeamAttackData_Statics::NewProp_PlayerCharginBeamAnimation = { "PlayerCharginBeamAnimation", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBeamAttackData, PlayerCharginBeamAnimation), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerCharginBeamAnimation_MetaData), NewProp_PlayerCharginBeamAnimation_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FBeamAttackData_Statics::NewProp_EnemyCharginBeamAnimation = { "EnemyCharginBeamAnimation", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBeamAttackData, EnemyCharginBeamAnimation), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemyCharginBeamAnimation_MetaData), NewProp_EnemyCharginBeamAnimation_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FBeamAttackData_Statics::NewProp_ChargingSphereAnimation = { "ChargingSphereAnimation", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBeamAttackData, ChargingSphereAnimation), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChargingSphereAnimation_MetaData), NewProp_ChargingSphereAnimation_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FBeamAttackData_Statics::NewProp_BeamClass = { "BeamClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBeamAttackData, BeamClass), Z_Construct_UClass_ABeamBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BeamClass_MetaData), NewProp_BeamClass_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBeamAttackData_Statics::NewProp_ChargeSockets = { "ChargeSockets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBeamAttackData, ChargeSockets), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChargeSockets_MetaData), NewProp_ChargeSockets_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBeamAttackData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBeamAttackData_Statics::NewProp_KiCostPerSecond,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBeamAttackData_Statics::NewProp_GrowthRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBeamAttackData_Statics::NewProp_MaxLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBeamAttackData_Statics::NewProp_DamageTickInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBeamAttackData_Statics::NewProp_DamageCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBeamAttackData_Statics::NewProp_bStopIfMoving,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBeamAttackData_Statics::NewProp_PlayerCharginBeamAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBeamAttackData_Statics::NewProp_EnemyCharginBeamAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBeamAttackData_Statics::NewProp_ChargingSphereAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBeamAttackData_Statics::NewProp_BeamClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBeamAttackData_Statics::NewProp_ChargeSockets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBeamAttackData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBeamAttackData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Game2DCPlusPlus,
	Z_Construct_UScriptStruct_FAttackData,
	&NewStructOps,
	"BeamAttackData",
	Z_Construct_UScriptStruct_FBeamAttackData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBeamAttackData_Statics::PropPointers),
	sizeof(FBeamAttackData),
	alignof(FBeamAttackData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBeamAttackData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBeamAttackData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBeamAttackData()
{
	if (!Z_Registration_Info_UScriptStruct_FBeamAttackData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FBeamAttackData.InnerSingleton, Z_Construct_UScriptStruct_FBeamAttackData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FBeamAttackData.InnerSingleton;
}
// ********** End ScriptStruct FBeamAttackData *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Data_FBeamAttackData_h__Script_Game2DCPlusPlus_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBeamAttackData::StaticStruct, Z_Construct_UScriptStruct_FBeamAttackData_Statics::NewStructOps, TEXT("BeamAttackData"), &Z_Registration_Info_UScriptStruct_FBeamAttackData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBeamAttackData), 1982421153U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Data_FBeamAttackData_h__Script_Game2DCPlusPlus_2564974885(TEXT("/Script/Game2DCPlusPlus"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Data_FBeamAttackData_h__Script_Game2DCPlusPlus_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Data_FBeamAttackData_h__Script_Game2DCPlusPlus_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
