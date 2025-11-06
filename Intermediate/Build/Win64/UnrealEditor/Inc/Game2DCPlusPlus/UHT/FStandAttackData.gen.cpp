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
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
GAME2DCPLUSPLUS_API UEnum* Z_Construct_UEnum_Game2DCPlusPlus_EDamageTypeEnum();
GAME2DCPLUSPLUS_API UScriptStruct* Z_Construct_UScriptStruct_FStandAttackData();
PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
UPackage* Z_Construct_UPackage__Script_Game2DCPlusPlus();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FStandAttackData **************************************************
static_assert(std::is_polymorphic<FStandAttackData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FStandAttackData cannot be polymorphic unless super FTableRowBase is polymorphic");
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackName_MetaData[] = {
		{ "Category", "StandAttackData" },
		{ "ModuleRelativePath", "Data/FStandAttackData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[] = {
		{ "Category", "StandAttackData" },
		{ "ModuleRelativePath", "Data/FStandAttackData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[] = {
		{ "Category", "StandAttackData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(EditAnywhere, BlueprintReadOnly)\n//float RecoveryTime;\n" },
#endif
		{ "ModuleRelativePath", "Data/FStandAttackData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadOnly)\nfloat RecoveryTime;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[] = {
		{ "Category", "StandAttackData" },
		{ "ModuleRelativePath", "Data/FStandAttackData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceSockets_MetaData[] = {
		{ "Category", "StandAttackData" },
		{ "ModuleRelativePath", "Data/FStandAttackData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_AttackName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Animation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DamageType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DamageType;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TraceSockets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TraceSockets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStandAttackData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStandAttackData_Statics::NewProp_AttackName = { "AttackName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStandAttackData, AttackName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackName_MetaData), NewProp_AttackName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStandAttackData_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStandAttackData, Damage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damage_MetaData), NewProp_Damage_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FStandAttackData_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStandAttackData, Animation), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Animation_MetaData), NewProp_Animation_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStandAttackData_Statics::NewProp_DamageType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStandAttackData_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStandAttackData, DamageType), Z_Construct_UEnum_Game2DCPlusPlus_EDamageTypeEnum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageType_MetaData), NewProp_DamageType_MetaData) }; // 2221864232
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStandAttackData_Statics::NewProp_TraceSockets_Inner = { "TraceSockets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStandAttackData_Statics::NewProp_TraceSockets = { "TraceSockets", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStandAttackData, TraceSockets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceSockets_MetaData), NewProp_TraceSockets_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStandAttackData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStandAttackData_Statics::NewProp_AttackName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStandAttackData_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStandAttackData_Statics::NewProp_Animation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStandAttackData_Statics::NewProp_DamageType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStandAttackData_Statics::NewProp_DamageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStandAttackData_Statics::NewProp_TraceSockets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStandAttackData_Statics::NewProp_TraceSockets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStandAttackData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStandAttackData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Game2DCPlusPlus,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"StandAttackData",
	Z_Construct_UScriptStruct_FStandAttackData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStandAttackData_Statics::PropPointers),
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
		{ FStandAttackData::StaticStruct, Z_Construct_UScriptStruct_FStandAttackData_Statics::NewStructOps, TEXT("StandAttackData"), &Z_Registration_Info_UScriptStruct_FStandAttackData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStandAttackData), 3183201521U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Data_FStandAttackData_h__Script_Game2DCPlusPlus_4054608252(TEXT("/Script/Game2DCPlusPlus"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Data_FStandAttackData_h__Script_Game2DCPlusPlus_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Data_FStandAttackData_h__Script_Game2DCPlusPlus_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
