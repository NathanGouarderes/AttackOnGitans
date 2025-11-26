// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game2DCPlusPlus/Data/FStandData.h"
#include "Game2DCPlusPlus/Data/FAttackData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFStandData() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_AMyStandBase_NoRegister();
GAME2DCPLUSPLUS_API UScriptStruct* Z_Construct_UScriptStruct_FAttackData();
GAME2DCPLUSPLUS_API UScriptStruct* Z_Construct_UScriptStruct_FStandData();
PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
UPackage* Z_Construct_UPackage__Script_Game2DCPlusPlus();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FStandData ********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FStandData;
class UScriptStruct* FStandData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FStandData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FStandData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStandData, (UObject*)Z_Construct_UPackage__Script_Game2DCPlusPlus(), TEXT("StandData"));
	}
	return Z_Registration_Info_UScriptStruct_FStandData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FStandData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Data/FStandData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Base_MetaData[] = {
		{ "Category", "StandData" },
		{ "ModuleRelativePath", "Data/FStandData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StandAttackSet_MetaData[] = {
		{ "Category", "Stand|Data" },
		{ "ModuleRelativePath", "Data/FStandData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowingDistance_MetaData[] = {
		{ "Category", "StandData" },
		{ "ModuleRelativePath", "Data/FStandData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowingSpeed_MetaData[] = {
		{ "Category", "StandData" },
		{ "ModuleRelativePath", "Data/FStandData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageTickInterval_MetaData[] = {
		{ "Category", "StandData" },
		{ "ModuleRelativePath", "Data/FStandData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageCooldown_MetaData[] = {
		{ "Category", "StandData" },
		{ "ModuleRelativePath", "Data/FStandData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StandIdleAnimation_MetaData[] = {
		{ "Category", "StandData" },
		{ "ModuleRelativePath", "Data/FStandData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StandAttackAnimation_MetaData[] = {
		{ "Category", "StandData" },
		{ "ModuleRelativePath", "Data/FStandData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StandBlockAnimation_MetaData[] = {
		{ "Category", "StandData" },
		{ "ModuleRelativePath", "Data/FStandData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerStandOutAnimation_MetaData[] = {
		{ "Category", "StandData" },
		{ "ModuleRelativePath", "Data/FStandData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemyStandOutAnimation_MetaData[] = {
		{ "Category", "StandData" },
		{ "ModuleRelativePath", "Data/FStandData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StandClass_MetaData[] = {
		{ "Category", "StandData" },
		{ "ModuleRelativePath", "Data/FStandData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Base;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_StandAttackSet;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FollowingDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FollowingSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageTickInterval;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageCooldown;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_StandIdleAnimation;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_StandAttackAnimation;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_StandBlockAnimation;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PlayerStandOutAnimation;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_EnemyStandOutAnimation;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_StandClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStandData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStandData_Statics::NewProp_Base = { "Base", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStandData, Base), Z_Construct_UScriptStruct_FAttackData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Base_MetaData), NewProp_Base_MetaData) }; // 3263392156
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FStandData_Statics::NewProp_StandAttackSet = { "StandAttackSet", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStandData, StandAttackSet), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StandAttackSet_MetaData), NewProp_StandAttackSet_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStandData_Statics::NewProp_FollowingDistance = { "FollowingDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStandData, FollowingDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowingDistance_MetaData), NewProp_FollowingDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStandData_Statics::NewProp_FollowingSpeed = { "FollowingSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStandData, FollowingSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowingSpeed_MetaData), NewProp_FollowingSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStandData_Statics::NewProp_DamageTickInterval = { "DamageTickInterval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStandData, DamageTickInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageTickInterval_MetaData), NewProp_DamageTickInterval_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStandData_Statics::NewProp_DamageCooldown = { "DamageCooldown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStandData, DamageCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageCooldown_MetaData), NewProp_DamageCooldown_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FStandData_Statics::NewProp_StandIdleAnimation = { "StandIdleAnimation", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStandData, StandIdleAnimation), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StandIdleAnimation_MetaData), NewProp_StandIdleAnimation_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FStandData_Statics::NewProp_StandAttackAnimation = { "StandAttackAnimation", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStandData, StandAttackAnimation), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StandAttackAnimation_MetaData), NewProp_StandAttackAnimation_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FStandData_Statics::NewProp_StandBlockAnimation = { "StandBlockAnimation", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStandData, StandBlockAnimation), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StandBlockAnimation_MetaData), NewProp_StandBlockAnimation_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FStandData_Statics::NewProp_PlayerStandOutAnimation = { "PlayerStandOutAnimation", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStandData, PlayerStandOutAnimation), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerStandOutAnimation_MetaData), NewProp_PlayerStandOutAnimation_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FStandData_Statics::NewProp_EnemyStandOutAnimation = { "EnemyStandOutAnimation", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStandData, EnemyStandOutAnimation), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemyStandOutAnimation_MetaData), NewProp_EnemyStandOutAnimation_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FStandData_Statics::NewProp_StandClass = { "StandClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStandData, StandClass), Z_Construct_UClass_AMyStandBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StandClass_MetaData), NewProp_StandClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStandData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStandData_Statics::NewProp_Base,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStandData_Statics::NewProp_StandAttackSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStandData_Statics::NewProp_FollowingDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStandData_Statics::NewProp_FollowingSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStandData_Statics::NewProp_DamageTickInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStandData_Statics::NewProp_DamageCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStandData_Statics::NewProp_StandIdleAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStandData_Statics::NewProp_StandAttackAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStandData_Statics::NewProp_StandBlockAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStandData_Statics::NewProp_PlayerStandOutAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStandData_Statics::NewProp_EnemyStandOutAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStandData_Statics::NewProp_StandClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStandData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStandData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Game2DCPlusPlus,
	nullptr,
	&NewStructOps,
	"StandData",
	Z_Construct_UScriptStruct_FStandData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStandData_Statics::PropPointers),
	sizeof(FStandData),
	alignof(FStandData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStandData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStandData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStandData()
{
	if (!Z_Registration_Info_UScriptStruct_FStandData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FStandData.InnerSingleton, Z_Construct_UScriptStruct_FStandData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FStandData.InnerSingleton;
}
// ********** End ScriptStruct FStandData **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Data_FStandData_h__Script_Game2DCPlusPlus_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FStandData::StaticStruct, Z_Construct_UScriptStruct_FStandData_Statics::NewStructOps, TEXT("StandData"), &Z_Registration_Info_UScriptStruct_FStandData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStandData), 1741236492U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Data_FStandData_h__Script_Game2DCPlusPlus_922969902(TEXT("/Script/Game2DCPlusPlus"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Data_FStandData_h__Script_Game2DCPlusPlus_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Data_FStandData_h__Script_Game2DCPlusPlus_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
