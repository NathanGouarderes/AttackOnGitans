// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game2DCPlusPlus/Data/Enums/ECreatureSegmentType.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeECreatureSegmentType() {}

// ********** Begin Cross Module References ********************************************************
GAME2DCPLUSPLUS_API UEnum* Z_Construct_UEnum_Game2DCPlusPlus_ECreatureSegmentType();
UPackage* Z_Construct_UPackage__Script_Game2DCPlusPlus();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ECreatureSegmentType ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECreatureSegmentType;
static UEnum* ECreatureSegmentType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECreatureSegmentType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECreatureSegmentType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Game2DCPlusPlus_ECreatureSegmentType, (UObject*)Z_Construct_UPackage__Script_Game2DCPlusPlus(), TEXT("ECreatureSegmentType"));
	}
	return Z_Registration_Info_UEnum_ECreatureSegmentType.OuterSingleton;
}
template<> GAME2DCPLUSPLUS_NON_ATTRIBUTED_API UEnum* StaticEnum<ECreatureSegmentType>()
{
	return ECreatureSegmentType_StaticEnum();
}
struct Z_Construct_UEnum_Game2DCPlusPlus_ECreatureSegmentType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Arm.DisplayName", "Arm" },
		{ "Arm.Name", "ECreatureSegmentType::Arm" },
		{ "BlueprintType", "true" },
		{ "Core.DisplayName", "Core" },
		{ "Core.Name", "ECreatureSegmentType::Core" },
		{ "Custom.DisplayName", "Custom" },
		{ "Custom.Name", "ECreatureSegmentType::Custom" },
		{ "Head.DisplayName", "Head" },
		{ "Head.Name", "ECreatureSegmentType::Head" },
		{ "Leg.DisplayName", "Leg" },
		{ "Leg.Name", "ECreatureSegmentType::Leg" },
		{ "ModuleRelativePath", "Data/Enums/ECreatureSegmentType.h" },
		{ "Tail.DisplayName", "Tail" },
		{ "Tail.Name", "ECreatureSegmentType::Tail" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECreatureSegmentType::Core", (int64)ECreatureSegmentType::Core },
		{ "ECreatureSegmentType::Leg", (int64)ECreatureSegmentType::Leg },
		{ "ECreatureSegmentType::Arm", (int64)ECreatureSegmentType::Arm },
		{ "ECreatureSegmentType::Tail", (int64)ECreatureSegmentType::Tail },
		{ "ECreatureSegmentType::Head", (int64)ECreatureSegmentType::Head },
		{ "ECreatureSegmentType::Custom", (int64)ECreatureSegmentType::Custom },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Game2DCPlusPlus_ECreatureSegmentType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Game2DCPlusPlus,
	nullptr,
	"ECreatureSegmentType",
	"ECreatureSegmentType",
	Z_Construct_UEnum_Game2DCPlusPlus_ECreatureSegmentType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Game2DCPlusPlus_ECreatureSegmentType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Game2DCPlusPlus_ECreatureSegmentType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Game2DCPlusPlus_ECreatureSegmentType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Game2DCPlusPlus_ECreatureSegmentType()
{
	if (!Z_Registration_Info_UEnum_ECreatureSegmentType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECreatureSegmentType.InnerSingleton, Z_Construct_UEnum_Game2DCPlusPlus_ECreatureSegmentType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECreatureSegmentType.InnerSingleton;
}
// ********** End Enum ECreatureSegmentType ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Data_Enums_ECreatureSegmentType_h__Script_Game2DCPlusPlus_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECreatureSegmentType_StaticEnum, TEXT("ECreatureSegmentType"), &Z_Registration_Info_UEnum_ECreatureSegmentType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4097868822U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Data_Enums_ECreatureSegmentType_h__Script_Game2DCPlusPlus_2228502356(TEXT("/Script/Game2DCPlusPlus"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Data_Enums_ECreatureSegmentType_h__Script_Game2DCPlusPlus_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Data_Enums_ECreatureSegmentType_h__Script_Game2DCPlusPlus_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
