// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game2DCPlusPlus/Visuals/KiAura.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeKiAura() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_AKiAura();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_AKiAura_NoRegister();
PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbookComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Game2DCPlusPlus();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AKiAura ******************************************************************
void AKiAura::StaticRegisterNativesAKiAura()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AKiAura;
UClass* AKiAura::GetPrivateStaticClass()
{
	using TClass = AKiAura;
	if (!Z_Registration_Info_UClass_AKiAura.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("KiAura"),
			Z_Registration_Info_UClass_AKiAura.InnerSingleton,
			StaticRegisterNativesAKiAura,
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
	return Z_Registration_Info_UClass_AKiAura.InnerSingleton;
}
UClass* Z_Construct_UClass_AKiAura_NoRegister()
{
	return AKiAura::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AKiAura_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Visuals/KiAura.h" },
		{ "ModuleRelativePath", "Visuals/KiAura.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AuraFlipbook_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Aura" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Visuals/KiAura.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AuraFlipbookAsset_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Aura" },
		{ "ModuleRelativePath", "Visuals/KiAura.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AuraEffect_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Aura" },
		{ "ModuleRelativePath", "Visuals/KiAura.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AuraChargingSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Visuals/KiAura.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AuraChargingAudioComponent_MetaData[] = {
		{ "Category", "Sound" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Visuals/KiAura.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AuraComponentInstance_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Visuals/KiAura.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AuraFlipbook;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AuraFlipbookAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AuraEffect;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AuraChargingSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AuraChargingAudioComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AuraComponentInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKiAura>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKiAura_Statics::NewProp_AuraFlipbook = { "AuraFlipbook", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKiAura, AuraFlipbook), Z_Construct_UClass_UPaperFlipbookComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AuraFlipbook_MetaData), NewProp_AuraFlipbook_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKiAura_Statics::NewProp_AuraFlipbookAsset = { "AuraFlipbookAsset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKiAura, AuraFlipbookAsset), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AuraFlipbookAsset_MetaData), NewProp_AuraFlipbookAsset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKiAura_Statics::NewProp_AuraEffect = { "AuraEffect", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKiAura, AuraEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AuraEffect_MetaData), NewProp_AuraEffect_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKiAura_Statics::NewProp_AuraChargingSound = { "AuraChargingSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKiAura, AuraChargingSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AuraChargingSound_MetaData), NewProp_AuraChargingSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKiAura_Statics::NewProp_AuraChargingAudioComponent = { "AuraChargingAudioComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKiAura, AuraChargingAudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AuraChargingAudioComponent_MetaData), NewProp_AuraChargingAudioComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKiAura_Statics::NewProp_AuraComponentInstance = { "AuraComponentInstance", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKiAura, AuraComponentInstance), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AuraComponentInstance_MetaData), NewProp_AuraComponentInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AKiAura_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKiAura_Statics::NewProp_AuraFlipbook,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKiAura_Statics::NewProp_AuraFlipbookAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKiAura_Statics::NewProp_AuraEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKiAura_Statics::NewProp_AuraChargingSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKiAura_Statics::NewProp_AuraChargingAudioComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKiAura_Statics::NewProp_AuraComponentInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKiAura_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AKiAura_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Game2DCPlusPlus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKiAura_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AKiAura_Statics::ClassParams = {
	&AKiAura::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AKiAura_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AKiAura_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AKiAura_Statics::Class_MetaDataParams), Z_Construct_UClass_AKiAura_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AKiAura()
{
	if (!Z_Registration_Info_UClass_AKiAura.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AKiAura.OuterSingleton, Z_Construct_UClass_AKiAura_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AKiAura.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AKiAura);
AKiAura::~AKiAura() {}
// ********** End Class AKiAura ********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Visuals_KiAura_h__Script_Game2DCPlusPlus_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AKiAura, AKiAura::StaticClass, TEXT("AKiAura"), &Z_Registration_Info_UClass_AKiAura, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AKiAura), 2561035400U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Visuals_KiAura_h__Script_Game2DCPlusPlus_1609979554(TEXT("/Script/Game2DCPlusPlus"),
	Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Visuals_KiAura_h__Script_Game2DCPlusPlus_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Visuals_KiAura_h__Script_Game2DCPlusPlus_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
