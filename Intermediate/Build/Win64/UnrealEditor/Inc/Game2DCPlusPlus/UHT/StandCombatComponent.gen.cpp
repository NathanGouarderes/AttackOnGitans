// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Stand/StandCombatComponent.h"
#include "Game2DCPlusPlus/Data/FStandAttackData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeStandCombatComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UStandCombatComponent();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UStandCombatComponent_NoRegister();
GAME2DCPLUSPLUS_API UScriptStruct* Z_Construct_UScriptStruct_FStandAttackData();
UPackage* Z_Construct_UPackage__Script_Game2DCPlusPlus();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UStandCombatComponent ****************************************************
void UStandCombatComponent::StaticRegisterNativesUStandCombatComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UStandCombatComponent;
UClass* UStandCombatComponent::GetPrivateStaticClass()
{
	using TClass = UStandCombatComponent;
	if (!Z_Registration_Info_UClass_UStandCombatComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("StandCombatComponent"),
			Z_Registration_Info_UClass_UStandCombatComponent.InnerSingleton,
			StaticRegisterNativesUStandCombatComponent,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UStandCombatComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UStandCombatComponent_NoRegister()
{
	return UStandCombatComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UStandCombatComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/Stand/StandCombatComponent.h" },
		{ "ModuleRelativePath", "Components/Stand/StandCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StandAttackDataTable_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "StandAttack" },
		{ "ModuleRelativePath", "Components/Stand/StandCombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StandAttackData_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "StandAttack" },
		{ "ModuleRelativePath", "Components/Stand/StandCombatComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_StandAttackDataTable;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StandAttackData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStandCombatComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UStandCombatComponent_Statics::NewProp_StandAttackDataTable = { "StandAttackDataTable", nullptr, (EPropertyFlags)0x0014000000020015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStandCombatComponent, StandAttackDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StandAttackDataTable_MetaData), NewProp_StandAttackDataTable_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStandCombatComponent_Statics::NewProp_StandAttackData = { "StandAttackData", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStandCombatComponent, StandAttackData), Z_Construct_UScriptStruct_FStandAttackData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StandAttackData_MetaData), NewProp_StandAttackData_MetaData) }; // 3183201521
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStandCombatComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStandCombatComponent_Statics::NewProp_StandAttackDataTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStandCombatComponent_Statics::NewProp_StandAttackData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStandCombatComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStandCombatComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Game2DCPlusPlus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStandCombatComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStandCombatComponent_Statics::ClassParams = {
	&UStandCombatComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UStandCombatComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UStandCombatComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStandCombatComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UStandCombatComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStandCombatComponent()
{
	if (!Z_Registration_Info_UClass_UStandCombatComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStandCombatComponent.OuterSingleton, Z_Construct_UClass_UStandCombatComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStandCombatComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UStandCombatComponent);
UStandCombatComponent::~UStandCombatComponent() {}
// ********** End Class UStandCombatComponent ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_Stand_StandCombatComponent_h__Script_Game2DCPlusPlus_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStandCombatComponent, UStandCombatComponent::StaticClass, TEXT("UStandCombatComponent"), &Z_Registration_Info_UClass_UStandCombatComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStandCombatComponent), 2571374975U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_Stand_StandCombatComponent_h__Script_Game2DCPlusPlus_2175078554(TEXT("/Script/Game2DCPlusPlus"),
	Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_Stand_StandCombatComponent_h__Script_Game2DCPlusPlus_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_Stand_StandCombatComponent_h__Script_Game2DCPlusPlus_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
