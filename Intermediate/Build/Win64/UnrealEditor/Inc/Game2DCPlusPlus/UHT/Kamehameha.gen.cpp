// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Beams/Kamehameha.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeKamehameha() {}

// ********** Begin Cross Module References ********************************************************
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_ABeamBase();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_AKamehameha();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_AKamehameha_NoRegister();
UPackage* Z_Construct_UPackage__Script_Game2DCPlusPlus();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AKamehameha **************************************************************
void AKamehameha::StaticRegisterNativesAKamehameha()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AKamehameha;
UClass* AKamehameha::GetPrivateStaticClass()
{
	using TClass = AKamehameha;
	if (!Z_Registration_Info_UClass_AKamehameha.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("Kamehameha"),
			Z_Registration_Info_UClass_AKamehameha.InnerSingleton,
			StaticRegisterNativesAKamehameha,
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
	return Z_Registration_Info_UClass_AKamehameha.InnerSingleton;
}
UClass* Z_Construct_UClass_AKamehameha_NoRegister()
{
	return AKamehameha::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AKamehameha_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Abilities/Beams/Kamehameha.h" },
		{ "ModuleRelativePath", "Abilities/Beams/Kamehameha.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKamehameha>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AKamehameha_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABeamBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Game2DCPlusPlus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKamehameha_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AKamehameha_Statics::ClassParams = {
	&AKamehameha::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AKamehameha_Statics::Class_MetaDataParams), Z_Construct_UClass_AKamehameha_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AKamehameha()
{
	if (!Z_Registration_Info_UClass_AKamehameha.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AKamehameha.OuterSingleton, Z_Construct_UClass_AKamehameha_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AKamehameha.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AKamehameha);
AKamehameha::~AKamehameha() {}
// ********** End Class AKamehameha ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Abilities_Beams_Kamehameha_h__Script_Game2DCPlusPlus_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AKamehameha, AKamehameha::StaticClass, TEXT("AKamehameha"), &Z_Registration_Info_UClass_AKamehameha, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AKamehameha), 1999908033U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Abilities_Beams_Kamehameha_h__Script_Game2DCPlusPlus_4281146023(TEXT("/Script/Game2DCPlusPlus"),
	Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Abilities_Beams_Kamehameha_h__Script_Game2DCPlusPlus_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Abilities_Beams_Kamehameha_h__Script_Game2DCPlusPlus_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
