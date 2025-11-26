// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Stand/StandAnimationComponent.h"
#include "Game2DCPlusPlus/Data/FStandData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeStandAnimationComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UStandAnimationComponent();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UStandAnimationComponent_NoRegister();
GAME2DCPLUSPLUS_API UScriptStruct* Z_Construct_UScriptStruct_FStandData();
UPackage* Z_Construct_UPackage__Script_Game2DCPlusPlus();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UStandAnimationComponent *************************************************
void UStandAnimationComponent::StaticRegisterNativesUStandAnimationComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UStandAnimationComponent;
UClass* UStandAnimationComponent::GetPrivateStaticClass()
{
	using TClass = UStandAnimationComponent;
	if (!Z_Registration_Info_UClass_UStandAnimationComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("StandAnimationComponent"),
			Z_Registration_Info_UClass_UStandAnimationComponent.InnerSingleton,
			StaticRegisterNativesUStandAnimationComponent,
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
	return Z_Registration_Info_UClass_UStandAnimationComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UStandAnimationComponent_NoRegister()
{
	return UStandAnimationComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UStandAnimationComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/Stand/StandAnimationComponent.h" },
		{ "ModuleRelativePath", "Components/Stand/StandAnimationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StandDataTable_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stand" },
		{ "ModuleRelativePath", "Components/Stand/StandAnimationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StandData_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stand" },
		{ "ModuleRelativePath", "Components/Stand/StandAnimationComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StandDataTable;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StandData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStandAnimationComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStandAnimationComponent_Statics::NewProp_StandDataTable = { "StandDataTable", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStandAnimationComponent, StandDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StandDataTable_MetaData), NewProp_StandDataTable_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStandAnimationComponent_Statics::NewProp_StandData = { "StandData", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStandAnimationComponent, StandData), Z_Construct_UScriptStruct_FStandData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StandData_MetaData), NewProp_StandData_MetaData) }; // 1741236492
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStandAnimationComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStandAnimationComponent_Statics::NewProp_StandDataTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStandAnimationComponent_Statics::NewProp_StandData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStandAnimationComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStandAnimationComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Game2DCPlusPlus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStandAnimationComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStandAnimationComponent_Statics::ClassParams = {
	&UStandAnimationComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UStandAnimationComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UStandAnimationComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStandAnimationComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UStandAnimationComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStandAnimationComponent()
{
	if (!Z_Registration_Info_UClass_UStandAnimationComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStandAnimationComponent.OuterSingleton, Z_Construct_UClass_UStandAnimationComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStandAnimationComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UStandAnimationComponent);
UStandAnimationComponent::~UStandAnimationComponent() {}
// ********** End Class UStandAnimationComponent ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_Stand_StandAnimationComponent_h__Script_Game2DCPlusPlus_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStandAnimationComponent, UStandAnimationComponent::StaticClass, TEXT("UStandAnimationComponent"), &Z_Registration_Info_UClass_UStandAnimationComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStandAnimationComponent), 2357020588U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_Stand_StandAnimationComponent_h__Script_Game2DCPlusPlus_2500245364(TEXT("/Script/Game2DCPlusPlus"),
	Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_Stand_StandAnimationComponent_h__Script_Game2DCPlusPlus_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_Stand_StandAnimationComponent_h__Script_Game2DCPlusPlus_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
