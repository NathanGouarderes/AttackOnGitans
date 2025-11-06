// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game2DCPlusPlus/Data/FPhysicalAttackData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFPhysicalAttackData() {}

// ********** Begin Cross Module References ********************************************************
GAME2DCPLUSPLUS_API UEnum* Z_Construct_UEnum_Game2DCPlusPlus_EPhysicalDamageType();
GAME2DCPLUSPLUS_API UScriptStruct* Z_Construct_UScriptStruct_FAttackData();
GAME2DCPLUSPLUS_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicalAttackData();
UPackage* Z_Construct_UPackage__Script_Game2DCPlusPlus();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPhysicalDamageType *******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPhysicalDamageType;
static UEnum* EPhysicalDamageType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPhysicalDamageType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPhysicalDamageType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Game2DCPlusPlus_EPhysicalDamageType, (UObject*)Z_Construct_UPackage__Script_Game2DCPlusPlus(), TEXT("EPhysicalDamageType"));
	}
	return Z_Registration_Info_UEnum_EPhysicalDamageType.OuterSingleton;
}
template<> GAME2DCPLUSPLUS_NON_ATTRIBUTED_API UEnum* StaticEnum<EPhysicalDamageType>()
{
	return EPhysicalDamageType_StaticEnum();
}
struct Z_Construct_UEnum_Game2DCPlusPlus_EPhysicalDamageType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Contondant.Name", "EPhysicalDamageType::Contondant" },
		{ "ModuleRelativePath", "Data/FPhysicalAttackData.h" },
		{ "Perforant.Name", "EPhysicalDamageType::Perforant" },
		{ "Tranchant.Name", "EPhysicalDamageType::Tranchant" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPhysicalDamageType::Tranchant", (int64)EPhysicalDamageType::Tranchant },
		{ "EPhysicalDamageType::Contondant", (int64)EPhysicalDamageType::Contondant },
		{ "EPhysicalDamageType::Perforant", (int64)EPhysicalDamageType::Perforant },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Game2DCPlusPlus_EPhysicalDamageType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Game2DCPlusPlus,
	nullptr,
	"EPhysicalDamageType",
	"EPhysicalDamageType",
	Z_Construct_UEnum_Game2DCPlusPlus_EPhysicalDamageType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Game2DCPlusPlus_EPhysicalDamageType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Game2DCPlusPlus_EPhysicalDamageType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Game2DCPlusPlus_EPhysicalDamageType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Game2DCPlusPlus_EPhysicalDamageType()
{
	if (!Z_Registration_Info_UEnum_EPhysicalDamageType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPhysicalDamageType.InnerSingleton, Z_Construct_UEnum_Game2DCPlusPlus_EPhysicalDamageType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPhysicalDamageType.InnerSingleton;
}
// ********** End Enum EPhysicalDamageType *********************************************************

// ********** Begin ScriptStruct FPhysicalAttackData ***********************************************
static_assert(std::is_polymorphic<FPhysicalAttackData>() == std::is_polymorphic<FAttackData>(), "USTRUCT FPhysicalAttackData cannot be polymorphic unless super FAttackData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPhysicalAttackData;
class UScriptStruct* FPhysicalAttackData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPhysicalAttackData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPhysicalAttackData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhysicalAttackData, (UObject*)Z_Construct_UPackage__Script_Game2DCPlusPlus(), TEXT("PhysicalAttackData"));
	}
	return Z_Registration_Info_UScriptStruct_FPhysicalAttackData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FPhysicalAttackData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Data/FPhysicalAttackData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicalDamageType_MetaData[] = {
		{ "Category", "PhysicalAttackData" },
		{ "ModuleRelativePath", "Data/FPhysicalAttackData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KnockbackForce_MetaData[] = {
		{ "Category", "PhysicalAttackData" },
		{ "ModuleRelativePath", "Data/FPhysicalAttackData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaminaCost_MetaData[] = {
		{ "Category", "PhysicalAttackData" },
		{ "ModuleRelativePath", "Data/FPhysicalAttackData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_PhysicalDamageType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PhysicalDamageType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_KnockbackForce;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StaminaCost;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhysicalAttackData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPhysicalAttackData_Statics::NewProp_PhysicalDamageType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPhysicalAttackData_Statics::NewProp_PhysicalDamageType = { "PhysicalDamageType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPhysicalAttackData, PhysicalDamageType), Z_Construct_UEnum_Game2DCPlusPlus_EPhysicalDamageType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicalDamageType_MetaData), NewProp_PhysicalDamageType_MetaData) }; // 1593699289
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhysicalAttackData_Statics::NewProp_KnockbackForce = { "KnockbackForce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPhysicalAttackData, KnockbackForce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KnockbackForce_MetaData), NewProp_KnockbackForce_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhysicalAttackData_Statics::NewProp_StaminaCost = { "StaminaCost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPhysicalAttackData, StaminaCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaminaCost_MetaData), NewProp_StaminaCost_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPhysicalAttackData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicalAttackData_Statics::NewProp_PhysicalDamageType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicalAttackData_Statics::NewProp_PhysicalDamageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicalAttackData_Statics::NewProp_KnockbackForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicalAttackData_Statics::NewProp_StaminaCost,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalAttackData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPhysicalAttackData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Game2DCPlusPlus,
	Z_Construct_UScriptStruct_FAttackData,
	&NewStructOps,
	"PhysicalAttackData",
	Z_Construct_UScriptStruct_FPhysicalAttackData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalAttackData_Statics::PropPointers),
	sizeof(FPhysicalAttackData),
	alignof(FPhysicalAttackData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalAttackData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPhysicalAttackData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPhysicalAttackData()
{
	if (!Z_Registration_Info_UScriptStruct_FPhysicalAttackData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPhysicalAttackData.InnerSingleton, Z_Construct_UScriptStruct_FPhysicalAttackData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FPhysicalAttackData.InnerSingleton;
}
// ********** End ScriptStruct FPhysicalAttackData *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Data_FPhysicalAttackData_h__Script_Game2DCPlusPlus_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPhysicalDamageType_StaticEnum, TEXT("EPhysicalDamageType"), &Z_Registration_Info_UEnum_EPhysicalDamageType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1593699289U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPhysicalAttackData::StaticStruct, Z_Construct_UScriptStruct_FPhysicalAttackData_Statics::NewStructOps, TEXT("PhysicalAttackData"), &Z_Registration_Info_UScriptStruct_FPhysicalAttackData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPhysicalAttackData), 3516274757U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Data_FPhysicalAttackData_h__Script_Game2DCPlusPlus_1140120477(TEXT("/Script/Game2DCPlusPlus"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Data_FPhysicalAttackData_h__Script_Game2DCPlusPlus_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Data_FPhysicalAttackData_h__Script_Game2DCPlusPlus_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Data_FPhysicalAttackData_h__Script_Game2DCPlusPlus_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Data_FPhysicalAttackData_h__Script_Game2DCPlusPlus_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
