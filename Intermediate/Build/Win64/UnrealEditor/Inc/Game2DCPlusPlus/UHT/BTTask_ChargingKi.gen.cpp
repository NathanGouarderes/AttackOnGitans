// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BTTask_ChargingKi.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBTTask_ChargingKi() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UBTTask_ChargingKi();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UBTTask_ChargingKi_NoRegister();
UPackage* Z_Construct_UPackage__Script_Game2DCPlusPlus();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBTTask_ChargingKi *******************************************************
void UBTTask_ChargingKi::StaticRegisterNativesUBTTask_ChargingKi()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBTTask_ChargingKi;
UClass* UBTTask_ChargingKi::GetPrivateStaticClass()
{
	using TClass = UBTTask_ChargingKi;
	if (!Z_Registration_Info_UClass_UBTTask_ChargingKi.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("BTTask_ChargingKi"),
			Z_Registration_Info_UClass_UBTTask_ChargingKi.InnerSingleton,
			StaticRegisterNativesUBTTask_ChargingKi,
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
	return Z_Registration_Info_UClass_UBTTask_ChargingKi.InnerSingleton;
}
UClass* Z_Construct_UClass_UBTTask_ChargingKi_NoRegister()
{
	return UBTTask_ChargingKi::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBTTask_ChargingKi_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Tasks/BTTask_ChargingKi.h" },
		{ "ModuleRelativePath", "Tasks/BTTask_ChargingKi.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_ChargingKi>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBTTask_ChargingKi_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_Game2DCPlusPlus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ChargingKi_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_ChargingKi_Statics::ClassParams = {
	&UBTTask_ChargingKi::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ChargingKi_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_ChargingKi_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_ChargingKi()
{
	if (!Z_Registration_Info_UClass_UBTTask_ChargingKi.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_ChargingKi.OuterSingleton, Z_Construct_UClass_UBTTask_ChargingKi_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_ChargingKi.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UBTTask_ChargingKi);
UBTTask_ChargingKi::~UBTTask_ChargingKi() {}
// ********** End Class UBTTask_ChargingKi *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Tasks_BTTask_ChargingKi_h__Script_Game2DCPlusPlus_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_ChargingKi, UBTTask_ChargingKi::StaticClass, TEXT("UBTTask_ChargingKi"), &Z_Registration_Info_UClass_UBTTask_ChargingKi, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_ChargingKi), 3027182536U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Tasks_BTTask_ChargingKi_h__Script_Game2DCPlusPlus_3669860550(TEXT("/Script/Game2DCPlusPlus"),
	Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Tasks_BTTask_ChargingKi_h__Script_Game2DCPlusPlus_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Tasks_BTTask_ChargingKi_h__Script_Game2DCPlusPlus_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
