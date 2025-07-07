// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game2DCPlusPlus/Data/FAttackData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFAttackData() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
GAME2DCPLUSPLUS_API UEnum* Z_Construct_UEnum_Game2DCPlusPlus_EDamageTypeEnum();
GAME2DCPLUSPLUS_API UScriptStruct* Z_Construct_UScriptStruct_FAttackData();
PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
UPackage* Z_Construct_UPackage__Script_Game2DCPlusPlus();
// End Cross Module References

// Begin Enum EDamageTypeEnum
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDamageTypeEnum;
static UEnum* EDamageTypeEnum_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDamageTypeEnum.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDamageTypeEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Game2DCPlusPlus_EDamageTypeEnum, (UObject*)Z_Construct_UPackage__Script_Game2DCPlusPlus(), TEXT("EDamageTypeEnum"));
	}
	return Z_Registration_Info_UEnum_EDamageTypeEnum.OuterSingleton;
}
template<> GAME2DCPLUSPLUS_API UEnum* StaticEnum<EDamageTypeEnum>()
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
// End Enum EDamageTypeEnum

// Begin ScriptStruct FAttackData
static_assert(std::is_polymorphic<FAttackData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FAttackData cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AttackData;
class UScriptStruct* FAttackData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AttackData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AttackData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAttackData, (UObject*)Z_Construct_UPackage__Script_Game2DCPlusPlus(), TEXT("AttackData"));
	}
	return Z_Registration_Info_UScriptStruct_AttackData.OuterSingleton;
}
template<> GAME2DCPLUSPLUS_API UScriptStruct* StaticStruct<FAttackData>()
{
	return FAttackData::StaticStruct();
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecoveryTime_MetaData[] = {
		{ "Category", "AttackData" },
		{ "ModuleRelativePath", "Data/FAttackData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[] = {
		{ "Category", "AttackData" },
		{ "ModuleRelativePath", "Data/FAttackData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[] = {
		{ "Category", "AttackData" },
		{ "ModuleRelativePath", "Data/FAttackData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerAnimation_MetaData[] = {
		{ "Category", "AttackData" },
		{ "ModuleRelativePath", "Data/FAttackData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemyAnimation_MetaData[] = {
		{ "Category", "AttackData" },
		{ "ModuleRelativePath", "Data/FAttackData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceSockets_MetaData[] = {
		{ "Category", "AttackData" },
		{ "ModuleRelativePath", "Data/FAttackData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_AttackName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Range;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartupTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ActiveTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RecoveryTime;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Animation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DamageType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DamageType;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PlayerAnimation;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_EnemyAnimation;
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttackData, Damage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damage_MetaData), NewProp_Damage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttackData, Range), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Range_MetaData), NewProp_Range_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_StartupTime = { "StartupTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttackData, StartupTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartupTime_MetaData), NewProp_StartupTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_ActiveTime = { "ActiveTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttackData, ActiveTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveTime_MetaData), NewProp_ActiveTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_RecoveryTime = { "RecoveryTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttackData, RecoveryTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecoveryTime_MetaData), NewProp_RecoveryTime_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttackData, Animation), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Animation_MetaData), NewProp_Animation_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_DamageType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttackData, DamageType), Z_Construct_UEnum_Game2DCPlusPlus_EDamageTypeEnum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageType_MetaData), NewProp_DamageType_MetaData) }; // 2753486681
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_PlayerAnimation = { "PlayerAnimation", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttackData, PlayerAnimation), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerAnimation_MetaData), NewProp_PlayerAnimation_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_EnemyAnimation = { "EnemyAnimation", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttackData, EnemyAnimation), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemyAnimation_MetaData), NewProp_EnemyAnimation_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_TraceSockets_Inner = { "TraceSockets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_TraceSockets = { "TraceSockets", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttackData, TraceSockets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceSockets_MetaData), NewProp_TraceSockets_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAttackData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_AttackName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_Range,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_StartupTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_ActiveTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_RecoveryTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_Animation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_DamageType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_DamageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_PlayerAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackData_Statics::NewProp_EnemyAnimation,
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
	if (!Z_Registration_Info_UScriptStruct_AttackData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AttackData.InnerSingleton, Z_Construct_UScriptStruct_FAttackData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AttackData.InnerSingleton;
}
// End ScriptStruct FAttackData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_5_Source_Game2DCPlusPlus_Data_FAttackData_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDamageTypeEnum_StaticEnum, TEXT("EDamageTypeEnum"), &Z_Registration_Info_UEnum_EDamageTypeEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2753486681U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAttackData::StaticStruct, Z_Construct_UScriptStruct_FAttackData_Statics::NewStructOps, TEXT("AttackData"), &Z_Registration_Info_UScriptStruct_AttackData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAttackData), 3363663188U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_5_Source_Game2DCPlusPlus_Data_FAttackData_h_1089654307(TEXT("/Script/Game2DCPlusPlus"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_5_Source_Game2DCPlusPlus_Data_FAttackData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_5_Source_Game2DCPlusPlus_Data_FAttackData_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_5_Source_Game2DCPlusPlus_Data_FAttackData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_5_Source_Game2DCPlusPlus_Data_FAttackData_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
