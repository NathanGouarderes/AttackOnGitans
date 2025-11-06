// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game2DCPlusPlus/FistCombatRow.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFistCombatRow() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
GAME2DCPLUSPLUS_API UScriptStruct* Z_Construct_UScriptStruct_FFistCombatRow();
PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
UPackage* Z_Construct_UPackage__Script_Game2DCPlusPlus();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FFistCombatRow ****************************************************
static_assert(std::is_polymorphic<FFistCombatRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FFistCombatRow cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FFistCombatRow;
class UScriptStruct* FFistCombatRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FFistCombatRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FFistCombatRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFistCombatRow, (UObject*)Z_Construct_UPackage__Script_Game2DCPlusPlus(), TEXT("FistCombatRow"));
	}
	return Z_Registration_Info_UScriptStruct_FFistCombatRow.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FFistCombatRow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "FistCombatRow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PunchAnimation_MetaData[] = {
		{ "Category", "FistCombatRow" },
		{ "ModuleRelativePath", "FistCombatRow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[] = {
		{ "Category", "FistCombatRow" },
		{ "ModuleRelativePath", "FistCombatRow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[] = {
		{ "Category", "FistCombatRow" },
		{ "ModuleRelativePath", "FistCombatRow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartupTime_MetaData[] = {
		{ "Category", "FistCombatRow" },
		{ "ModuleRelativePath", "FistCombatRow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecoveryTime_MetaData[] = {
		{ "Category", "FistCombatRow" },
		{ "ModuleRelativePath", "FistCombatRow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartFrame_MetaData[] = {
		{ "Category", "FistCombatRow" },
		{ "ModuleRelativePath", "FistCombatRow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndFrame_MetaData[] = {
		{ "Category", "FistCombatRow" },
		{ "ModuleRelativePath", "FistCombatRow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartSocketName_MetaData[] = {
		{ "Category", "FistCombatRow" },
		{ "ModuleRelativePath", "FistCombatRow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndSocketName_MetaData[] = {
		{ "Category", "FistCombatRow" },
		{ "ModuleRelativePath", "FistCombatRow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitboxThickness_MetaData[] = {
		{ "Category", "FistCombatRow" },
		{ "ModuleRelativePath", "FistCombatRow.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PunchAnimation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Range;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartupTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RecoveryTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartFrame;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EndFrame;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StartSocketName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EndSocketName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HitboxThickness;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFistCombatRow>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFistCombatRow_Statics::NewProp_PunchAnimation = { "PunchAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFistCombatRow, PunchAnimation), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PunchAnimation_MetaData), NewProp_PunchAnimation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFistCombatRow_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFistCombatRow, Damage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damage_MetaData), NewProp_Damage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFistCombatRow_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFistCombatRow, Range), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Range_MetaData), NewProp_Range_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFistCombatRow_Statics::NewProp_StartupTime = { "StartupTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFistCombatRow, StartupTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartupTime_MetaData), NewProp_StartupTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFistCombatRow_Statics::NewProp_RecoveryTime = { "RecoveryTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFistCombatRow, RecoveryTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecoveryTime_MetaData), NewProp_RecoveryTime_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFistCombatRow_Statics::NewProp_StartFrame = { "StartFrame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFistCombatRow, StartFrame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartFrame_MetaData), NewProp_StartFrame_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFistCombatRow_Statics::NewProp_EndFrame = { "EndFrame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFistCombatRow, EndFrame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndFrame_MetaData), NewProp_EndFrame_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFistCombatRow_Statics::NewProp_StartSocketName = { "StartSocketName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFistCombatRow, StartSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartSocketName_MetaData), NewProp_StartSocketName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFistCombatRow_Statics::NewProp_EndSocketName = { "EndSocketName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFistCombatRow, EndSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndSocketName_MetaData), NewProp_EndSocketName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFistCombatRow_Statics::NewProp_HitboxThickness = { "HitboxThickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFistCombatRow, HitboxThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitboxThickness_MetaData), NewProp_HitboxThickness_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFistCombatRow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFistCombatRow_Statics::NewProp_PunchAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFistCombatRow_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFistCombatRow_Statics::NewProp_Range,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFistCombatRow_Statics::NewProp_StartupTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFistCombatRow_Statics::NewProp_RecoveryTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFistCombatRow_Statics::NewProp_StartFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFistCombatRow_Statics::NewProp_EndFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFistCombatRow_Statics::NewProp_StartSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFistCombatRow_Statics::NewProp_EndSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFistCombatRow_Statics::NewProp_HitboxThickness,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFistCombatRow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFistCombatRow_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Game2DCPlusPlus,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"FistCombatRow",
	Z_Construct_UScriptStruct_FFistCombatRow_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFistCombatRow_Statics::PropPointers),
	sizeof(FFistCombatRow),
	alignof(FFistCombatRow),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFistCombatRow_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFistCombatRow_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFistCombatRow()
{
	if (!Z_Registration_Info_UScriptStruct_FFistCombatRow.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FFistCombatRow.InnerSingleton, Z_Construct_UScriptStruct_FFistCombatRow_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FFistCombatRow.InnerSingleton;
}
// ********** End ScriptStruct FFistCombatRow ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_FistCombatRow_h__Script_Game2DCPlusPlus_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFistCombatRow::StaticStruct, Z_Construct_UScriptStruct_FFistCombatRow_Statics::NewStructOps, TEXT("FistCombatRow"), &Z_Registration_Info_UScriptStruct_FFistCombatRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFistCombatRow), 3891029134U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_FistCombatRow_h__Script_Game2DCPlusPlus_1897624470(TEXT("/Script/Game2DCPlusPlus"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_FistCombatRow_h__Script_Game2DCPlusPlus_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_FistCombatRow_h__Script_Game2DCPlusPlus_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
