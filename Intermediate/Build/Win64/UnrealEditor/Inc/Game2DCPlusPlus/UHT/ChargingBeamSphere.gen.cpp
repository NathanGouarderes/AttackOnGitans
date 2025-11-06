// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Beams/ChargingBeamSphere.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeChargingBeamSphere() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_AChargingBeamSphere();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_AChargingBeamSphere_NoRegister();
PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbookComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Game2DCPlusPlus();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AChargingBeamSphere ******************************************************
void AChargingBeamSphere::StaticRegisterNativesAChargingBeamSphere()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AChargingBeamSphere;
UClass* AChargingBeamSphere::GetPrivateStaticClass()
{
	using TClass = AChargingBeamSphere;
	if (!Z_Registration_Info_UClass_AChargingBeamSphere.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ChargingBeamSphere"),
			Z_Registration_Info_UClass_AChargingBeamSphere.InnerSingleton,
			StaticRegisterNativesAChargingBeamSphere,
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
	return Z_Registration_Info_UClass_AChargingBeamSphere.InnerSingleton;
}
UClass* Z_Construct_UClass_AChargingBeamSphere_NoRegister()
{
	return AChargingBeamSphere::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AChargingBeamSphere_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Abilities/Beams/ChargingBeamSphere.h" },
		{ "ModuleRelativePath", "Abilities/Beams/ChargingBeamSphere.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlipbookComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Abilities/Beams/ChargingBeamSphere.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChargingFlipbook_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Abilities/Beams/ChargingBeamSphere.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FlipbookComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChargingFlipbook;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChargingBeamSphere>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChargingBeamSphere_Statics::NewProp_FlipbookComponent = { "FlipbookComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChargingBeamSphere, FlipbookComponent), Z_Construct_UClass_UPaperFlipbookComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlipbookComponent_MetaData), NewProp_FlipbookComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChargingBeamSphere_Statics::NewProp_ChargingFlipbook = { "ChargingFlipbook", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChargingBeamSphere, ChargingFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChargingFlipbook_MetaData), NewProp_ChargingFlipbook_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AChargingBeamSphere_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChargingBeamSphere_Statics::NewProp_FlipbookComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChargingBeamSphere_Statics::NewProp_ChargingFlipbook,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AChargingBeamSphere_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AChargingBeamSphere_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Game2DCPlusPlus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AChargingBeamSphere_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AChargingBeamSphere_Statics::ClassParams = {
	&AChargingBeamSphere::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AChargingBeamSphere_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AChargingBeamSphere_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AChargingBeamSphere_Statics::Class_MetaDataParams), Z_Construct_UClass_AChargingBeamSphere_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AChargingBeamSphere()
{
	if (!Z_Registration_Info_UClass_AChargingBeamSphere.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AChargingBeamSphere.OuterSingleton, Z_Construct_UClass_AChargingBeamSphere_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AChargingBeamSphere.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AChargingBeamSphere);
AChargingBeamSphere::~AChargingBeamSphere() {}
// ********** End Class AChargingBeamSphere ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Abilities_Beams_ChargingBeamSphere_h__Script_Game2DCPlusPlus_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AChargingBeamSphere, AChargingBeamSphere::StaticClass, TEXT("AChargingBeamSphere"), &Z_Registration_Info_UClass_AChargingBeamSphere, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AChargingBeamSphere), 1075020589U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Abilities_Beams_ChargingBeamSphere_h__Script_Game2DCPlusPlus_3414270057(TEXT("/Script/Game2DCPlusPlus"),
	Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Abilities_Beams_ChargingBeamSphere_h__Script_Game2DCPlusPlus_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Abilities_Beams_ChargingBeamSphere_h__Script_Game2DCPlusPlus_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
