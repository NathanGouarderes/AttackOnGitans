// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FighterLifeCycleComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFighterLifeCycleComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UFighterLifeCycleComponent();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UFighterLifeCycleComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Game2DCPlusPlus();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UFighterLifeCycleComponent ***********************************************
void UFighterLifeCycleComponent::StaticRegisterNativesUFighterLifeCycleComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UFighterLifeCycleComponent;
UClass* UFighterLifeCycleComponent::GetPrivateStaticClass()
{
	using TClass = UFighterLifeCycleComponent;
	if (!Z_Registration_Info_UClass_UFighterLifeCycleComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("FighterLifeCycleComponent"),
			Z_Registration_Info_UClass_UFighterLifeCycleComponent.InnerSingleton,
			StaticRegisterNativesUFighterLifeCycleComponent,
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
	return Z_Registration_Info_UClass_UFighterLifeCycleComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UFighterLifeCycleComponent_NoRegister()
{
	return UFighterLifeCycleComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFighterLifeCycleComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/FighterLifeCycleComponent.h" },
		{ "ModuleRelativePath", "Components/FighterLifeCycleComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFighterLifeCycleComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFighterLifeCycleComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Game2DCPlusPlus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFighterLifeCycleComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFighterLifeCycleComponent_Statics::ClassParams = {
	&UFighterLifeCycleComponent::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFighterLifeCycleComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UFighterLifeCycleComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFighterLifeCycleComponent()
{
	if (!Z_Registration_Info_UClass_UFighterLifeCycleComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFighterLifeCycleComponent.OuterSingleton, Z_Construct_UClass_UFighterLifeCycleComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFighterLifeCycleComponent.OuterSingleton;
}
UFighterLifeCycleComponent::UFighterLifeCycleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UFighterLifeCycleComponent);
UFighterLifeCycleComponent::~UFighterLifeCycleComponent() {}
// ********** End Class UFighterLifeCycleComponent *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_FighterLifeCycleComponent_h__Script_Game2DCPlusPlus_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFighterLifeCycleComponent, UFighterLifeCycleComponent::StaticClass, TEXT("UFighterLifeCycleComponent"), &Z_Registration_Info_UClass_UFighterLifeCycleComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFighterLifeCycleComponent), 3586262878U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_FighterLifeCycleComponent_h__Script_Game2DCPlusPlus_557272581(TEXT("/Script/Game2DCPlusPlus"),
	Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_FighterLifeCycleComponent_h__Script_Game2DCPlusPlus_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_FighterLifeCycleComponent_h__Script_Game2DCPlusPlus_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
