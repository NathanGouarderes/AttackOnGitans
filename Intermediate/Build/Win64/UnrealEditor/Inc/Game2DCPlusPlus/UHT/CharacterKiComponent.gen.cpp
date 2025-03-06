// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game2DCPlusPlus/CharacterKiComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterKiComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_AKiAura_NoRegister();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_AMyCharacter_NoRegister();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UCharacterKiComponent();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UCharacterKiComponent_NoRegister();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UKiBarWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_Game2DCPlusPlus();
// End Cross Module References

// Begin Class UCharacterKiComponent
void UCharacterKiComponent::StaticRegisterNativesUCharacterKiComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterKiComponent);
UClass* Z_Construct_UClass_UCharacterKiComponent_NoRegister()
{
	return UCharacterKiComponent::StaticClass();
}
struct Z_Construct_UClass_UCharacterKiComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "CharacterKiComponent.h" },
		{ "ModuleRelativePath", "CharacterKiComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxKi_MetaData[] = {
		{ "Category", "Ki Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbdtat du Ki */" },
#endif
		{ "ModuleRelativePath", "CharacterKiComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbdtat du Ki" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentKi_MetaData[] = {
		{ "Category", "Ki Stats" },
		{ "ModuleRelativePath", "CharacterKiComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KiLoadSpeed_MetaData[] = {
		{ "Category", "Ki Stats" },
		{ "ModuleRelativePath", "CharacterKiComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerCharacter_MetaData[] = {
		{ "ModuleRelativePath", "CharacterKiComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KiBarWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CharacterKiComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KiBarWidgetClass_MetaData[] = {
		{ "Category", "Ki" },
		{ "ModuleRelativePath", "CharacterKiComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KiAuraClass_MetaData[] = {
		{ "Category", "Ki" },
		{ "ModuleRelativePath", "CharacterKiComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KiAura_MetaData[] = {
		{ "ModuleRelativePath", "CharacterKiComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxKi;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentKi;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_KiLoadSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KiBarWidget;
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterKiComponent_Statics::NewProp_MaxKi = { "MaxKi", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterKiComponent, MaxKi), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxKi_MetaData), NewProp_MaxKi_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterKiComponent_Statics::NewProp_CurrentKi = { "CurrentKi", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterKiComponent, CurrentKi), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentKi_MetaData), NewProp_CurrentKi_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterKiComponent_Statics::NewProp_KiLoadSpeed = { "KiLoadSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterKiComponent, KiLoadSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KiLoadSpeed_MetaData), NewProp_KiLoadSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterKiComponent_Statics::NewProp_OwnerCharacter = { "OwnerCharacter", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterKiComponent, OwnerCharacter), Z_Construct_UClass_AMyCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerCharacter_MetaData), NewProp_OwnerCharacter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterKiComponent_Statics::NewProp_KiBarWidget = { "KiBarWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterKiComponent, KiBarWidget), Z_Construct_UClass_UKiBarWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KiBarWidget_MetaData), NewProp_KiBarWidget_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCharacterKiComponent_Statics::NewProp_KiBarWidgetClass = { "KiBarWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterKiComponent, KiBarWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UKiBarWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KiBarWidgetClass_MetaData), NewProp_KiBarWidgetClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCharacterKiComponent_Statics::NewProp_KiAuraClass = { "KiAuraClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterKiComponent, KiAuraClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AKiAura_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KiAuraClass_MetaData), NewProp_KiAuraClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterKiComponent_Statics::NewProp_KiAura = { "KiAura", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterKiComponent, KiAura), Z_Construct_UClass_AKiAura_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KiAura_MetaData), NewProp_KiAura_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterKiComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterKiComponent_Statics::NewProp_MaxKi,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterKiComponent_Statics::NewProp_CurrentKi,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterKiComponent_Statics::NewProp_KiLoadSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterKiComponent_Statics::NewProp_OwnerCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterKiComponent_Statics::NewProp_KiBarWidget,
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
template<> GAME2DCPLUSPLUS_API UClass* StaticClass<UCharacterKiComponent>()
{
	return UCharacterKiComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterKiComponent);
UCharacterKiComponent::~UCharacterKiComponent() {}
// End Class UCharacterKiComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_CharacterKiComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterKiComponent, UCharacterKiComponent::StaticClass, TEXT("UCharacterKiComponent"), &Z_Registration_Info_UClass_UCharacterKiComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterKiComponent), 2412030065U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_CharacterKiComponent_h_3159582426(TEXT("/Script/Game2DCPlusPlus"),
	Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_CharacterKiComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_CharacterKiComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
