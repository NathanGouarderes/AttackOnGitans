// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game2DCPlusPlus/Data/FAnimationData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFAnimationData() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
GAME2DCPLUSPLUS_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationData();
PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
UPackage* Z_Construct_UPackage__Script_Game2DCPlusPlus();
// End Cross Module References

// Begin ScriptStruct FAnimationData
static_assert(std::is_polymorphic<FAnimationData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FAnimationData cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimationData;
class UScriptStruct* FAnimationData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimationData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimationData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimationData, (UObject*)Z_Construct_UPackage__Script_Game2DCPlusPlus(), TEXT("AnimationData"));
	}
	return Z_Registration_Info_UScriptStruct_AnimationData.OuterSingleton;
}
template<> GAME2DCPLUSPLUS_API UScriptStruct* StaticStruct<FAnimationData>()
{
	return FAnimationData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimationData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "Data/FAnimationData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationName_MetaData[] = {
		{ "Category", "AnimationData" },
		{ "ModuleRelativePath", "Data/FAnimationData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerAnimation_MetaData[] = {
		{ "Category", "AnimationData" },
		{ "ModuleRelativePath", "Data/FAnimationData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemyAnimation_MetaData[] = {
		{ "Category", "AnimationData" },
		{ "ModuleRelativePath", "Data/FAnimationData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceSockets_MetaData[] = {
		{ "Category", "AnimationData" },
		{ "ModuleRelativePath", "Data/FAnimationData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_AnimationName;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PlayerAnimation;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_EnemyAnimation;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TraceSockets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TraceSockets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimationData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimationData_Statics::NewProp_AnimationName = { "AnimationName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationData, AnimationName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationName_MetaData), NewProp_AnimationName_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FAnimationData_Statics::NewProp_PlayerAnimation = { "PlayerAnimation", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationData, PlayerAnimation), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerAnimation_MetaData), NewProp_PlayerAnimation_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FAnimationData_Statics::NewProp_EnemyAnimation = { "EnemyAnimation", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationData, EnemyAnimation), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemyAnimation_MetaData), NewProp_EnemyAnimation_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimationData_Statics::NewProp_TraceSockets_Inner = { "TraceSockets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimationData_Statics::NewProp_TraceSockets = { "TraceSockets", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationData, TraceSockets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceSockets_MetaData), NewProp_TraceSockets_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimationData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationData_Statics::NewProp_AnimationName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationData_Statics::NewProp_PlayerAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationData_Statics::NewProp_EnemyAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationData_Statics::NewProp_TraceSockets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationData_Statics::NewProp_TraceSockets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimationData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Game2DCPlusPlus,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"AnimationData",
	Z_Construct_UScriptStruct_FAnimationData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationData_Statics::PropPointers),
	sizeof(FAnimationData),
	alignof(FAnimationData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimationData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimationData()
{
	if (!Z_Registration_Info_UScriptStruct_AnimationData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimationData.InnerSingleton, Z_Construct_UScriptStruct_FAnimationData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimationData.InnerSingleton;
}
// End ScriptStruct FAnimationData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_5_Source_Game2DCPlusPlus_Data_FAnimationData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimationData::StaticStruct, Z_Construct_UScriptStruct_FAnimationData_Statics::NewStructOps, TEXT("AnimationData"), &Z_Registration_Info_UScriptStruct_AnimationData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimationData), 1994944193U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_5_Source_Game2DCPlusPlus_Data_FAnimationData_h_1153886806(TEXT("/Script/Game2DCPlusPlus"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_5_Source_Game2DCPlusPlus_Data_FAnimationData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_5_Source_Game2DCPlusPlus_Data_FAnimationData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
