// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Stand/StandAbilitiesComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeStandAbilitiesComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UStandAbilitiesComponent();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UStandAbilitiesComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Game2DCPlusPlus();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UStandAbilitiesComponent *************************************************
void UStandAbilitiesComponent::StaticRegisterNativesUStandAbilitiesComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UStandAbilitiesComponent;
UClass* UStandAbilitiesComponent::GetPrivateStaticClass()
{
	using TClass = UStandAbilitiesComponent;
	if (!Z_Registration_Info_UClass_UStandAbilitiesComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("StandAbilitiesComponent"),
			Z_Registration_Info_UClass_UStandAbilitiesComponent.InnerSingleton,
			StaticRegisterNativesUStandAbilitiesComponent,
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
	return Z_Registration_Info_UClass_UStandAbilitiesComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UStandAbilitiesComponent_NoRegister()
{
	return UStandAbilitiesComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UStandAbilitiesComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/Stand/StandAbilitiesComponent.h" },
		{ "ModuleRelativePath", "Components/Stand/StandAbilitiesComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStandAbilitiesComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UStandAbilitiesComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Game2DCPlusPlus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStandAbilitiesComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStandAbilitiesComponent_Statics::ClassParams = {
	&UStandAbilitiesComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStandAbilitiesComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UStandAbilitiesComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStandAbilitiesComponent()
{
	if (!Z_Registration_Info_UClass_UStandAbilitiesComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStandAbilitiesComponent.OuterSingleton, Z_Construct_UClass_UStandAbilitiesComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStandAbilitiesComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UStandAbilitiesComponent);
UStandAbilitiesComponent::~UStandAbilitiesComponent() {}
// ********** End Class UStandAbilitiesComponent ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_Stand_StandAbilitiesComponent_h__Script_Game2DCPlusPlus_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStandAbilitiesComponent, UStandAbilitiesComponent::StaticClass, TEXT("UStandAbilitiesComponent"), &Z_Registration_Info_UClass_UStandAbilitiesComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStandAbilitiesComponent), 286208388U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_Stand_StandAbilitiesComponent_h__Script_Game2DCPlusPlus_606641574(TEXT("/Script/Game2DCPlusPlus"),
	Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_Stand_StandAbilitiesComponent_h__Script_Game2DCPlusPlus_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_Stand_StandAbilitiesComponent_h__Script_Game2DCPlusPlus_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
