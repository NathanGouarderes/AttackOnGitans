// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game2DCPlusPlus/Data/FCharacterData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFCharacterData() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_AMyStandBase_NoRegister();
GAME2DCPLUSPLUS_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterData();
UPackage* Z_Construct_UPackage__Script_Game2DCPlusPlus();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FCharacterData ****************************************************
static_assert(std::is_polymorphic<FCharacterData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCharacterData cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCharacterData;
class UScriptStruct* FCharacterData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCharacterData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCharacterData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterData, (UObject*)Z_Construct_UPackage__Script_Game2DCPlusPlus(), TEXT("CharacterData"));
	}
	return Z_Registration_Info_UScriptStruct_FCharacterData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCharacterData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Data/FCharacterData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterName_MetaData[] = {
		{ "Category", "CharacterData" },
		{ "ModuleRelativePath", "Data/FCharacterData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsKiUser_MetaData[] = {
		{ "Category", "CharacterData" },
		{ "ModuleRelativePath", "Data/FCharacterData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsStandUser_MetaData[] = {
		{ "Category", "CharacterData" },
		{ "ModuleRelativePath", "Data/FCharacterData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDevilFruitUser_MetaData[] = {
		{ "Category", "CharacterData" },
		{ "ModuleRelativePath", "Data/FCharacterData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsManaUser_MetaData[] = {
		{ "Category", "CharacterData" },
		{ "ModuleRelativePath", "Data/FCharacterData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsPlayer_MetaData[] = {
		{ "Category", "CharacterData" },
		{ "ModuleRelativePath", "Data/FCharacterData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsEnnemy_MetaData[] = {
		{ "Category", "CharacterData" },
		{ "ModuleRelativePath", "Data/FCharacterData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StandClass_MetaData[] = {
		{ "Category", "CharacterData" },
		{ "ModuleRelativePath", "Data/FCharacterData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackDataSet_MetaData[] = {
		{ "Category", "CharacterData" },
		{ "ModuleRelativePath", "Data/FCharacterData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StandName_MetaData[] = {
		{ "Category", "CharacterData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Des donn\xef\xbf\xbd""es suppl\xef\xbf\xbdmentaires\n" },
#endif
		{ "ModuleRelativePath", "Data/FCharacterData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Des donn\xef\xbf\xbd""es suppl\xef\xbf\xbdmentaires" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterName;
	static void NewProp_bIsKiUser_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsKiUser;
	static void NewProp_bIsStandUser_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsStandUser;
	static void NewProp_bIsDevilFruitUser_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDevilFruitUser;
	static void NewProp_bIsManaUser_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsManaUser;
	static void NewProp_bIsPlayer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPlayer;
	static void NewProp_bIsEnnemy_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnnemy;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_StandClass;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_AttackDataSet;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StandName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterData, CharacterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterName_MetaData), NewProp_CharacterName_MetaData) };
void Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_bIsKiUser_SetBit(void* Obj)
{
	((FCharacterData*)Obj)->bIsKiUser = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_bIsKiUser = { "bIsKiUser", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCharacterData), &Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_bIsKiUser_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsKiUser_MetaData), NewProp_bIsKiUser_MetaData) };
void Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_bIsStandUser_SetBit(void* Obj)
{
	((FCharacterData*)Obj)->bIsStandUser = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_bIsStandUser = { "bIsStandUser", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCharacterData), &Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_bIsStandUser_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsStandUser_MetaData), NewProp_bIsStandUser_MetaData) };
void Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_bIsDevilFruitUser_SetBit(void* Obj)
{
	((FCharacterData*)Obj)->bIsDevilFruitUser = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_bIsDevilFruitUser = { "bIsDevilFruitUser", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCharacterData), &Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_bIsDevilFruitUser_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDevilFruitUser_MetaData), NewProp_bIsDevilFruitUser_MetaData) };
void Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_bIsManaUser_SetBit(void* Obj)
{
	((FCharacterData*)Obj)->bIsManaUser = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_bIsManaUser = { "bIsManaUser", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCharacterData), &Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_bIsManaUser_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsManaUser_MetaData), NewProp_bIsManaUser_MetaData) };
void Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_bIsPlayer_SetBit(void* Obj)
{
	((FCharacterData*)Obj)->bIsPlayer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_bIsPlayer = { "bIsPlayer", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCharacterData), &Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_bIsPlayer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsPlayer_MetaData), NewProp_bIsPlayer_MetaData) };
void Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_bIsEnnemy_SetBit(void* Obj)
{
	((FCharacterData*)Obj)->bIsEnnemy = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_bIsEnnemy = { "bIsEnnemy", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCharacterData), &Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_bIsEnnemy_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsEnnemy_MetaData), NewProp_bIsEnnemy_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_StandClass = { "StandClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterData, StandClass), Z_Construct_UClass_AMyStandBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StandClass_MetaData), NewProp_StandClass_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_AttackDataSet = { "AttackDataSet", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterData, AttackDataSet), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackDataSet_MetaData), NewProp_AttackDataSet_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_StandName = { "StandName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterData, StandName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StandName_MetaData), NewProp_StandName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_CharacterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_bIsKiUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_bIsStandUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_bIsDevilFruitUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_bIsManaUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_bIsPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_bIsEnnemy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_StandClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_AttackDataSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_StandName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Game2DCPlusPlus,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"CharacterData",
	Z_Construct_UScriptStruct_FCharacterData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterData_Statics::PropPointers),
	sizeof(FCharacterData),
	alignof(FCharacterData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCharacterData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCharacterData()
{
	if (!Z_Registration_Info_UScriptStruct_FCharacterData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCharacterData.InnerSingleton, Z_Construct_UScriptStruct_FCharacterData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCharacterData.InnerSingleton;
}
// ********** End ScriptStruct FCharacterData ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Data_FCharacterData_h__Script_Game2DCPlusPlus_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCharacterData::StaticStruct, Z_Construct_UScriptStruct_FCharacterData_Statics::NewStructOps, TEXT("CharacterData"), &Z_Registration_Info_UScriptStruct_FCharacterData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCharacterData), 3358070478U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Data_FCharacterData_h__Script_Game2DCPlusPlus_2717200933(TEXT("/Script/Game2DCPlusPlus"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Data_FCharacterData_h__Script_Game2DCPlusPlus_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Data_FCharacterData_h__Script_Game2DCPlusPlus_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
