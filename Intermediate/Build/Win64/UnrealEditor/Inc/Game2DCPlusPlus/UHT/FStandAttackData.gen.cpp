// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game2DCPlusPlus/Data/FStandAttackData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFStandAttackData() {}

// ********** Begin Cross Module References ********************************************************
GAME2DCPLUSPLUS_API UScriptStruct* Z_Construct_UScriptStruct_FAttackData();
GAME2DCPLUSPLUS_API UScriptStruct* Z_Construct_UScriptStruct_FStandAttackData();
UPackage* Z_Construct_UPackage__Script_Game2DCPlusPlus();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FStandAttackData **************************************************
static_assert(std::is_polymorphic<FStandAttackData>() == std::is_polymorphic<FAttackData>(), "USTRUCT FStandAttackData cannot be polymorphic unless super FAttackData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FStandAttackData;
class UScriptStruct* FStandAttackData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FStandAttackData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FStandAttackData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStandAttackData, (UObject*)Z_Construct_UPackage__Script_Game2DCPlusPlus(), TEXT("StandAttackData"));
	}
	return Z_Registration_Info_UScriptStruct_FStandAttackData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FStandAttackData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Data/FStandAttackData.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStandAttackData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStandAttackData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Game2DCPlusPlus,
	Z_Construct_UScriptStruct_FAttackData,
	&NewStructOps,
	"StandAttackData",
	nullptr,
	0,
	sizeof(FStandAttackData),
	alignof(FStandAttackData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStandAttackData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStandAttackData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStandAttackData()
{
	if (!Z_Registration_Info_UScriptStruct_FStandAttackData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FStandAttackData.InnerSingleton, Z_Construct_UScriptStruct_FStandAttackData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FStandAttackData.InnerSingleton;
}
// ********** End ScriptStruct FStandAttackData ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Data_FStandAttackData_h__Script_Game2DCPlusPlus_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FStandAttackData::StaticStruct, Z_Construct_UScriptStruct_FStandAttackData_Statics::NewStructOps, TEXT("StandAttackData"), &Z_Registration_Info_UScriptStruct_FStandAttackData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStandAttackData), 2707009961U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Data_FStandAttackData_h__Script_Game2DCPlusPlus_2449407151(TEXT("/Script/Game2DCPlusPlus"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Data_FStandAttackData_h__Script_Game2DCPlusPlus_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Data_FStandAttackData_h__Script_Game2DCPlusPlus_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
