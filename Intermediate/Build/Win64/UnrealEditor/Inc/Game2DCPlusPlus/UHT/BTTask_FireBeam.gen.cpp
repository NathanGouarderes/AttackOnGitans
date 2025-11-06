// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BTTask_FireBeam.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBTTask_FireBeam() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UBTTask_FireBeam();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UBTTask_FireBeam_NoRegister();
UPackage* Z_Construct_UPackage__Script_Game2DCPlusPlus();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBTTask_FireBeam *********************************************************
void UBTTask_FireBeam::StaticRegisterNativesUBTTask_FireBeam()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBTTask_FireBeam;
UClass* UBTTask_FireBeam::GetPrivateStaticClass()
{
	using TClass = UBTTask_FireBeam;
	if (!Z_Registration_Info_UClass_UBTTask_FireBeam.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("BTTask_FireBeam"),
			Z_Registration_Info_UClass_UBTTask_FireBeam.InnerSingleton,
			StaticRegisterNativesUBTTask_FireBeam,
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
	return Z_Registration_Info_UClass_UBTTask_FireBeam.InnerSingleton;
}
UClass* Z_Construct_UClass_UBTTask_FireBeam_NoRegister()
{
	return UBTTask_FireBeam::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBTTask_FireBeam_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Tasks/BTTask_FireBeam.h" },
		{ "ModuleRelativePath", "Tasks/BTTask_FireBeam.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_FireBeam>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBTTask_FireBeam_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_Game2DCPlusPlus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FireBeam_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_FireBeam_Statics::ClassParams = {
	&UBTTask_FireBeam::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FireBeam_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_FireBeam_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_FireBeam()
{
	if (!Z_Registration_Info_UClass_UBTTask_FireBeam.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_FireBeam.OuterSingleton, Z_Construct_UClass_UBTTask_FireBeam_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_FireBeam.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UBTTask_FireBeam);
UBTTask_FireBeam::~UBTTask_FireBeam() {}
// ********** End Class UBTTask_FireBeam ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Tasks_BTTask_FireBeam_h__Script_Game2DCPlusPlus_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_FireBeam, UBTTask_FireBeam::StaticClass, TEXT("UBTTask_FireBeam"), &Z_Registration_Info_UClass_UBTTask_FireBeam, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_FireBeam), 1356095508U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Tasks_BTTask_FireBeam_h__Script_Game2DCPlusPlus_3506423987(TEXT("/Script/Game2DCPlusPlus"),
	Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Tasks_BTTask_FireBeam_h__Script_Game2DCPlusPlus_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Tasks_BTTask_FireBeam_h__Script_Game2DCPlusPlus_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
