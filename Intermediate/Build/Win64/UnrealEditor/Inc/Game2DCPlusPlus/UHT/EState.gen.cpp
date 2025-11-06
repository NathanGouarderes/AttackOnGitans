// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game2DCPlusPlus/Data/Enums/EState.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeEState() {}

// ********** Begin Cross Module References ********************************************************
GAME2DCPLUSPLUS_API UEnum* Z_Construct_UEnum_Game2DCPlusPlus_EState();
UPackage* Z_Construct_UPackage__Script_Game2DCPlusPlus();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EState ********************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EState;
static UEnum* EState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Game2DCPlusPlus_EState, (UObject*)Z_Construct_UPackage__Script_Game2DCPlusPlus(), TEXT("EState"));
	}
	return Z_Registration_Info_UEnum_EState.OuterSingleton;
}
template<> GAME2DCPLUSPLUS_NON_ATTRIBUTED_API UEnum* StaticEnum<EState>()
{
	return EState_StaticEnum();
}
struct Z_Construct_UEnum_Game2DCPlusPlus_EState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Attacking.DisplayName", "Attacking" },
		{ "Attacking.Name", "EState::Attacking" },
		{ "Blocking.DisplayName", "Blocking" },
		{ "Blocking.Name", "EState::Blocking" },
		{ "BlueprintType", "true" },
		{ "ChargingBeam.DisplayName", "Charging Beam" },
		{ "ChargingBeam.Name", "EState::ChargingBeam" },
		{ "ChargingKi.DisplayName", "Charging Ki" },
		{ "ChargingKi.Name", "EState::ChargingKi" },
		{ "Dead.DisplayName", "Dead" },
		{ "Dead.Name", "EState::Dead" },
		{ "Dodging.DisplayName", "Dodging" },
		{ "Dodging.Name", "EState::Dodging" },
		{ "FiringBeam.DisplayName", "Firing Beam" },
		{ "FiringBeam.Name", "EState::FiringBeam" },
		{ "Idle.DisplayName", "Idle" },
		{ "Idle.Name", "EState::Idle" },
		{ "Jumping.DisplayName", "Jumping" },
		{ "Jumping.Name", "EState::Jumping" },
		{ "ModuleRelativePath", "Data/Enums/EState.h" },
		{ "Stunned.DisplayName", "Stunned" },
		{ "Stunned.Name", "EState::Stunned" },
		{ "UsingMagic.DisplayName", "Using Magic" },
		{ "UsingMagic.Name", "EState::UsingMagic" },
		{ "UsingStand.DisplayName", "Using Stand" },
		{ "UsingStand.Name", "EState::UsingStand" },
		{ "Walking.DisplayName", "Walking" },
		{ "Walking.Name", "EState::Walking" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EState::Idle", (int64)EState::Idle },
		{ "EState::Walking", (int64)EState::Walking },
		{ "EState::Jumping", (int64)EState::Jumping },
		{ "EState::Dodging", (int64)EState::Dodging },
		{ "EState::Attacking", (int64)EState::Attacking },
		{ "EState::Blocking", (int64)EState::Blocking },
		{ "EState::ChargingKi", (int64)EState::ChargingKi },
		{ "EState::ChargingBeam", (int64)EState::ChargingBeam },
		{ "EState::FiringBeam", (int64)EState::FiringBeam },
		{ "EState::UsingMagic", (int64)EState::UsingMagic },
		{ "EState::UsingStand", (int64)EState::UsingStand },
		{ "EState::Stunned", (int64)EState::Stunned },
		{ "EState::Dead", (int64)EState::Dead },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Game2DCPlusPlus_EState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Game2DCPlusPlus,
	nullptr,
	"EState",
	"EState",
	Z_Construct_UEnum_Game2DCPlusPlus_EState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Game2DCPlusPlus_EState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Game2DCPlusPlus_EState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Game2DCPlusPlus_EState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Game2DCPlusPlus_EState()
{
	if (!Z_Registration_Info_UEnum_EState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EState.InnerSingleton, Z_Construct_UEnum_Game2DCPlusPlus_EState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EState.InnerSingleton;
}
// ********** End Enum EState **********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Data_Enums_EState_h__Script_Game2DCPlusPlus_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EState_StaticEnum, TEXT("EState"), &Z_Registration_Info_UEnum_EState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1516219444U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Data_Enums_EState_h__Script_Game2DCPlusPlus_3721012864(TEXT("/Script/Game2DCPlusPlus"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Data_Enums_EState_h__Script_Game2DCPlusPlus_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Data_Enums_EState_h__Script_Game2DCPlusPlus_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
