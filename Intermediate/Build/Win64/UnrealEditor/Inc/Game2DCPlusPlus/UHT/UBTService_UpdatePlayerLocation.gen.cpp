// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game2DCPlusPlus/BTServices/UBTService_UpdatePlayerLocation.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUBTService_UpdatePlayerLocation() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UBTService();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UUBTService_UpdatePlayerLocation();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UUBTService_UpdatePlayerLocation_NoRegister();
UPackage* Z_Construct_UPackage__Script_Game2DCPlusPlus();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UUBTService_UpdatePlayerLocation *****************************************
void UUBTService_UpdatePlayerLocation::StaticRegisterNativesUUBTService_UpdatePlayerLocation()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UUBTService_UpdatePlayerLocation;
UClass* UUBTService_UpdatePlayerLocation::GetPrivateStaticClass()
{
	using TClass = UUBTService_UpdatePlayerLocation;
	if (!Z_Registration_Info_UClass_UUBTService_UpdatePlayerLocation.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("UBTService_UpdatePlayerLocation"),
			Z_Registration_Info_UClass_UUBTService_UpdatePlayerLocation.InnerSingleton,
			StaticRegisterNativesUUBTService_UpdatePlayerLocation,
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
	return Z_Registration_Info_UClass_UUBTService_UpdatePlayerLocation.InnerSingleton;
}
UClass* Z_Construct_UClass_UUBTService_UpdatePlayerLocation_NoRegister()
{
	return UUBTService_UpdatePlayerLocation::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UUBTService_UpdatePlayerLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BTServices/UBTService_UpdatePlayerLocation.h" },
		{ "ModuleRelativePath", "BTServices/UBTService_UpdatePlayerLocation.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUBTService_UpdatePlayerLocation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UUBTService_UpdatePlayerLocation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTService,
	(UObject* (*)())Z_Construct_UPackage__Script_Game2DCPlusPlus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUBTService_UpdatePlayerLocation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUBTService_UpdatePlayerLocation_Statics::ClassParams = {
	&UUBTService_UpdatePlayerLocation::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUBTService_UpdatePlayerLocation_Statics::Class_MetaDataParams), Z_Construct_UClass_UUBTService_UpdatePlayerLocation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUBTService_UpdatePlayerLocation()
{
	if (!Z_Registration_Info_UClass_UUBTService_UpdatePlayerLocation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUBTService_UpdatePlayerLocation.OuterSingleton, Z_Construct_UClass_UUBTService_UpdatePlayerLocation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUBTService_UpdatePlayerLocation.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UUBTService_UpdatePlayerLocation);
UUBTService_UpdatePlayerLocation::~UUBTService_UpdatePlayerLocation() {}
// ********** End Class UUBTService_UpdatePlayerLocation *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_BTServices_UBTService_UpdatePlayerLocation_h__Script_Game2DCPlusPlus_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUBTService_UpdatePlayerLocation, UUBTService_UpdatePlayerLocation::StaticClass, TEXT("UUBTService_UpdatePlayerLocation"), &Z_Registration_Info_UClass_UUBTService_UpdatePlayerLocation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUBTService_UpdatePlayerLocation), 1440980890U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_BTServices_UBTService_UpdatePlayerLocation_h__Script_Game2DCPlusPlus_3216354285(TEXT("/Script/Game2DCPlusPlus"),
	Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_BTServices_UBTService_UpdatePlayerLocation_h__Script_Game2DCPlusPlus_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_BTServices_UBTService_UpdatePlayerLocation_h__Script_Game2DCPlusPlus_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
