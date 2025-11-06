// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game2DCPlusPlus/Data/FProjectileData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFProjectileData() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_AMyProjectileBase_NoRegister();
GAME2DCPLUSPLUS_API UEnum* Z_Construct_UEnum_Game2DCPlusPlus_EProjectilCategory();
GAME2DCPLUSPLUS_API UEnum* Z_Construct_UEnum_Game2DCPlusPlus_EProjectileType();
GAME2DCPLUSPLUS_API UScriptStruct* Z_Construct_UScriptStruct_FAttackData();
GAME2DCPLUSPLUS_API UScriptStruct* Z_Construct_UScriptStruct_FProjectileData();
UPackage* Z_Construct_UPackage__Script_Game2DCPlusPlus();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EProjectilCategory ********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EProjectilCategory;
static UEnum* EProjectilCategory_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EProjectilCategory.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EProjectilCategory.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Game2DCPlusPlus_EProjectilCategory, (UObject*)Z_Construct_UPackage__Script_Game2DCPlusPlus(), TEXT("EProjectilCategory"));
	}
	return Z_Registration_Info_UEnum_EProjectilCategory.OuterSingleton;
}
template<> GAME2DCPLUSPLUS_NON_ATTRIBUTED_API UEnum* StaticEnum<EProjectilCategory>()
{
	return EProjectilCategory_StaticEnum();
}
struct Z_Construct_UEnum_Game2DCPlusPlus_EProjectilCategory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Ki.DisplayName", "Ki" },
		{ "Ki.Name", "EProjectilCategory::Ki" },
		{ "Magic.DisplayName", "Magic" },
		{ "Magic.Name", "EProjectilCategory::Magic" },
		{ "ModuleRelativePath", "Data/FProjectileData.h" },
		{ "Physic.DisplayName", "Physic" },
		{ "Physic.Name", "EProjectilCategory::Physic" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EProjectilCategory::Ki", (int64)EProjectilCategory::Ki },
		{ "EProjectilCategory::Magic", (int64)EProjectilCategory::Magic },
		{ "EProjectilCategory::Physic", (int64)EProjectilCategory::Physic },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Game2DCPlusPlus_EProjectilCategory_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Game2DCPlusPlus,
	nullptr,
	"EProjectilCategory",
	"EProjectilCategory",
	Z_Construct_UEnum_Game2DCPlusPlus_EProjectilCategory_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Game2DCPlusPlus_EProjectilCategory_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Game2DCPlusPlus_EProjectilCategory_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Game2DCPlusPlus_EProjectilCategory_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Game2DCPlusPlus_EProjectilCategory()
{
	if (!Z_Registration_Info_UEnum_EProjectilCategory.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EProjectilCategory.InnerSingleton, Z_Construct_UEnum_Game2DCPlusPlus_EProjectilCategory_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EProjectilCategory.InnerSingleton;
}
// ********** End Enum EProjectilCategory **********************************************************

// ********** Begin Enum EProjectileType ***********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EProjectileType;
static UEnum* EProjectileType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EProjectileType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EProjectileType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Game2DCPlusPlus_EProjectileType, (UObject*)Z_Construct_UPackage__Script_Game2DCPlusPlus(), TEXT("EProjectileType"));
	}
	return Z_Registration_Info_UEnum_EProjectileType.OuterSingleton;
}
template<> GAME2DCPLUSPLUS_NON_ATTRIBUTED_API UEnum* StaticEnum<EProjectileType>()
{
	return EProjectileType_StaticEnum();
}
struct Z_Construct_UEnum_Game2DCPlusPlus_EProjectileType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Kamehameha.Name", "EProjectileType::Kamehameha" },
		{ "Kiball.Name", "EProjectileType::Kiball" },
		{ "Kienzan.Name", "EProjectileType::Kienzan" },
		{ "ModuleRelativePath", "Data/FProjectileData.h" },
		{ "None.Name", "EProjectileType::None" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EProjectileType::Kamehameha", (int64)EProjectileType::Kamehameha },
		{ "EProjectileType::Kiball", (int64)EProjectileType::Kiball },
		{ "EProjectileType::Kienzan", (int64)EProjectileType::Kienzan },
		{ "EProjectileType::None", (int64)EProjectileType::None },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Game2DCPlusPlus_EProjectileType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Game2DCPlusPlus,
	nullptr,
	"EProjectileType",
	"EProjectileType",
	Z_Construct_UEnum_Game2DCPlusPlus_EProjectileType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Game2DCPlusPlus_EProjectileType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Game2DCPlusPlus_EProjectileType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Game2DCPlusPlus_EProjectileType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Game2DCPlusPlus_EProjectileType()
{
	if (!Z_Registration_Info_UEnum_EProjectileType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EProjectileType.InnerSingleton, Z_Construct_UEnum_Game2DCPlusPlus_EProjectileType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EProjectileType.InnerSingleton;
}
// ********** End Enum EProjectileType *************************************************************

// ********** Begin ScriptStruct FProjectileData ***************************************************
static_assert(std::is_polymorphic<FProjectileData>() == std::is_polymorphic<FAttackData>(), "USTRUCT FProjectileData cannot be polymorphic unless super FAttackData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FProjectileData;
class UScriptStruct* FProjectileData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FProjectileData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FProjectileData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProjectileData, (UObject*)Z_Construct_UPackage__Script_Game2DCPlusPlus(), TEXT("ProjectileData"));
	}
	return Z_Registration_Info_UScriptStruct_FProjectileData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FProjectileData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Data/FProjectileData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "ProjectileData" },
		{ "ModuleRelativePath", "Data/FProjectileData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileCategory_MetaData[] = {
		{ "Category", "ProjectileData" },
		{ "ModuleRelativePath", "Data/FProjectileData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "Category", "ProjectileData" },
		{ "ModuleRelativePath", "Data/FProjectileData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LifeSpan_MetaData[] = {
		{ "Category", "ProjectileData" },
		{ "ModuleRelativePath", "Data/FProjectileData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GravityScale_MetaData[] = {
		{ "Category", "ProjectileData" },
		{ "ModuleRelativePath", "Data/FProjectileData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cost_MetaData[] = {
		{ "Category", "ProjectileData" },
		{ "ModuleRelativePath", "Data/FProjectileData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanPierce_MetaData[] = {
		{ "Category", "ProjectileData" },
		{ "ModuleRelativePath", "Data/FProjectileData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExplodesOnImpact_MetaData[] = {
		{ "Category", "ProjectileData" },
		{ "ModuleRelativePath", "Data/FProjectileData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExplosionRadius_MetaData[] = {
		{ "Category", "ProjectileData" },
		{ "ModuleRelativePath", "Data/FProjectileData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ProjectileCategory_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ProjectileCategory;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LifeSpan;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GravityScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Cost;
	static void NewProp_bCanPierce_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanPierce;
	static void NewProp_bExplodesOnImpact_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExplodesOnImpact;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExplosionRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProjectileData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileData, ProjectileClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_AMyProjectileBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileClass_MetaData), NewProp_ProjectileClass_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_ProjectileCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_ProjectileCategory = { "ProjectileCategory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileData, ProjectileCategory), Z_Construct_UEnum_Game2DCPlusPlus_EProjectilCategory, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileCategory_MetaData), NewProp_ProjectileCategory_MetaData) }; // 4100140611
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileData, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_LifeSpan = { "LifeSpan", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileData, LifeSpan), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LifeSpan_MetaData), NewProp_LifeSpan_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_GravityScale = { "GravityScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileData, GravityScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GravityScale_MetaData), NewProp_GravityScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_Cost = { "Cost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileData, Cost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cost_MetaData), NewProp_Cost_MetaData) };
void Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_bCanPierce_SetBit(void* Obj)
{
	((FProjectileData*)Obj)->bCanPierce = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_bCanPierce = { "bCanPierce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FProjectileData), &Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_bCanPierce_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanPierce_MetaData), NewProp_bCanPierce_MetaData) };
void Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_bExplodesOnImpact_SetBit(void* Obj)
{
	((FProjectileData*)Obj)->bExplodesOnImpact = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_bExplodesOnImpact = { "bExplodesOnImpact", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FProjectileData), &Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_bExplodesOnImpact_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExplodesOnImpact_MetaData), NewProp_bExplodesOnImpact_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_ExplosionRadius = { "ExplosionRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileData, ExplosionRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExplosionRadius_MetaData), NewProp_ExplosionRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProjectileData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_ProjectileClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_ProjectileCategory_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_ProjectileCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_LifeSpan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_GravityScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_Cost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_bCanPierce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_bExplodesOnImpact,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_ExplosionRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProjectileData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Game2DCPlusPlus,
	Z_Construct_UScriptStruct_FAttackData,
	&NewStructOps,
	"ProjectileData",
	Z_Construct_UScriptStruct_FProjectileData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileData_Statics::PropPointers),
	sizeof(FProjectileData),
	alignof(FProjectileData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProjectileData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProjectileData()
{
	if (!Z_Registration_Info_UScriptStruct_FProjectileData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FProjectileData.InnerSingleton, Z_Construct_UScriptStruct_FProjectileData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FProjectileData.InnerSingleton;
}
// ********** End ScriptStruct FProjectileData *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Data_FProjectileData_h__Script_Game2DCPlusPlus_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EProjectilCategory_StaticEnum, TEXT("EProjectilCategory"), &Z_Registration_Info_UEnum_EProjectilCategory, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4100140611U) },
		{ EProjectileType_StaticEnum, TEXT("EProjectileType"), &Z_Registration_Info_UEnum_EProjectileType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 431823742U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FProjectileData::StaticStruct, Z_Construct_UScriptStruct_FProjectileData_Statics::NewStructOps, TEXT("ProjectileData"), &Z_Registration_Info_UScriptStruct_FProjectileData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProjectileData), 529344939U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Data_FProjectileData_h__Script_Game2DCPlusPlus_2053879064(TEXT("/Script/Game2DCPlusPlus"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Data_FProjectileData_h__Script_Game2DCPlusPlus_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Data_FProjectileData_h__Script_Game2DCPlusPlus_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Data_FProjectileData_h__Script_Game2DCPlusPlus_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Data_FProjectileData_h__Script_Game2DCPlusPlus_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
