// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CharacterKiComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCharacterKiComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_AFighterCharacters_NoRegister();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_AKiAura_NoRegister();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UCharacterKiComponent();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UCharacterKiComponent_NoRegister();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UKiBarWidget_NoRegister();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UStatsComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Game2DCPlusPlus();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCharacterKiComponent ****************************************************
void UCharacterKiComponent::StaticRegisterNativesUCharacterKiComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCharacterKiComponent;
UClass* UCharacterKiComponent::GetPrivateStaticClass()
{
	using TClass = UCharacterKiComponent;
	if (!Z_Registration_Info_UClass_UCharacterKiComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CharacterKiComponent"),
			Z_Registration_Info_UClass_UCharacterKiComponent.InnerSingleton,
			StaticRegisterNativesUCharacterKiComponent,
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
	return Z_Registration_Info_UClass_UCharacterKiComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UCharacterKiComponent_NoRegister()
{
	return UCharacterKiComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCharacterKiComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/CharacterKiComponent.h" },
		{ "ModuleRelativePath", "Components/CharacterKiComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Components/CharacterKiComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KiBarWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Components/CharacterKiComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatsComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Components/CharacterKiComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KiBarWidgetClass_MetaData[] = {
		{ "Category", "Ki" },
		{ "ModuleRelativePath", "Components/CharacterKiComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KiAuraClass_MetaData[] = {
		{ "Category", "Ki" },
		{ "ModuleRelativePath", "Components/CharacterKiComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KiAura_MetaData[] = {
		{ "ModuleRelativePath", "Components/CharacterKiComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KiBarWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StatsComponent;
	static const UECodeGen_Private::FClassPropertyParams NewProp_KiBarWidgetClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_KiAuraClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KiAura;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterKiComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterKiComponent_Statics::NewProp_OwnerCharacter = { "OwnerCharacter", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterKiComponent, OwnerCharacter), Z_Construct_UClass_AFighterCharacters_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerCharacter_MetaData), NewProp_OwnerCharacter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterKiComponent_Statics::NewProp_KiBarWidget = { "KiBarWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterKiComponent, KiBarWidget), Z_Construct_UClass_UKiBarWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KiBarWidget_MetaData), NewProp_KiBarWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterKiComponent_Statics::NewProp_StatsComponent = { "StatsComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterKiComponent, StatsComponent), Z_Construct_UClass_UStatsComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatsComponent_MetaData), NewProp_StatsComponent_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCharacterKiComponent_Statics::NewProp_KiBarWidgetClass = { "KiBarWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterKiComponent, KiBarWidgetClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UKiBarWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KiBarWidgetClass_MetaData), NewProp_KiBarWidgetClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCharacterKiComponent_Statics::NewProp_KiAuraClass = { "KiAuraClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterKiComponent, KiAuraClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_AKiAura_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KiAuraClass_MetaData), NewProp_KiAuraClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterKiComponent_Statics::NewProp_KiAura = { "KiAura", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterKiComponent, KiAura), Z_Construct_UClass_AKiAura_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KiAura_MetaData), NewProp_KiAura_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterKiComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterKiComponent_Statics::NewProp_OwnerCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterKiComponent_Statics::NewProp_KiBarWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterKiComponent_Statics::NewProp_StatsComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterKiComponent_Statics::NewProp_KiBarWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterKiComponent_Statics::NewProp_KiAuraClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterKiComponent_Statics::NewProp_KiAura,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterKiComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCharacterKiComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Game2DCPlusPlus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterKiComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterKiComponent_Statics::ClassParams = {
	&UCharacterKiComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCharacterKiComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterKiComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterKiComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterKiComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacterKiComponent()
{
	if (!Z_Registration_Info_UClass_UCharacterKiComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterKiComponent.OuterSingleton, Z_Construct_UClass_UCharacterKiComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterKiComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCharacterKiComponent);
UCharacterKiComponent::~UCharacterKiComponent() {}
// ********** End Class UCharacterKiComponent ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_CharacterKiComponent_h__Script_Game2DCPlusPlus_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterKiComponent, UCharacterKiComponent::StaticClass, TEXT("UCharacterKiComponent"), &Z_Registration_Info_UClass_UCharacterKiComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterKiComponent), 4022344065U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_CharacterKiComponent_h__Script_Game2DCPlusPlus_402841904(TEXT("/Script/Game2DCPlusPlus"),
	Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_CharacterKiComponent_h__Script_Game2DCPlusPlus_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Components_CharacterKiComponent_h__Script_Game2DCPlusPlus_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
