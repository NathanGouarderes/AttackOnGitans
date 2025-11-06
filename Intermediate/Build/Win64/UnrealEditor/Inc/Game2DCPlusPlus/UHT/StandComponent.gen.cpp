// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StandComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeStandComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_AMyStandBase_NoRegister();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UStandComponent();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UStandComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Game2DCPlusPlus();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UStandComponent **********************************************************
void UStandComponent::StaticRegisterNativesUStandComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UStandComponent;
UClass* UStandComponent::GetPrivateStaticClass()
{
	using TClass = UStandComponent;
	if (!Z_Registration_Info_UClass_UStandComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("StandComponent"),
			Z_Registration_Info_UClass_UStandComponent.InnerSingleton,
			StaticRegisterNativesUStandComponent,
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
	return Z_Registration_Info_UClass_UStandComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UStandComponent_NoRegister()
{
	return UStandComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UStandComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/StandComponent.h" },
		{ "ModuleRelativePath", "Components/StandComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StandClass_MetaData[] = {
		{ "Category", "Stand" },
		{ "ModuleRelativePath", "Components/StandComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_StandClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStandComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UStandComponent_Statics::NewProp_StandClass = { "StandClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStandComponent, StandClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_AMyStandBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StandClass_MetaData), NewProp_StandClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStandComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStandComponent_Statics::NewProp_StandClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStandComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStandComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Game2DCPlusPlus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStandComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStandComponent_Statics::ClassParams = {
	&UStandComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UStandComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UStandComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStandComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UStandComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStandComponent()
{
	if (!Z_Registration_Info_UClass_UStandComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStandComponent.OuterSingleton, Z_Construct_UClass_UStandComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStandComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UStandComponent);
UStandComponent::~UStandComponent() {}
// ********** End Class UStandComponent ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_StandComponent_h__Script_Game2DCPlusPlus_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStandComponent, UStandComponent::StaticClass, TEXT("UStandComponent"), &Z_Registration_Info_UClass_UStandComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStandComponent), 164829U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_StandComponent_h__Script_Game2DCPlusPlus_4170187734(TEXT("/Script/Game2DCPlusPlus"),
	Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_StandComponent_h__Script_Game2DCPlusPlus_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_StandComponent_h__Script_Game2DCPlusPlus_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
