// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyBTTask_SetPatrolLocation.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMyBTTask_SetPatrolLocation() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UMyBTTask_SetPatrolLocation();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UMyBTTask_SetPatrolLocation_NoRegister();
UPackage* Z_Construct_UPackage__Script_Game2DCPlusPlus();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMyBTTask_SetPatrolLocation **********************************************
void UMyBTTask_SetPatrolLocation::StaticRegisterNativesUMyBTTask_SetPatrolLocation()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMyBTTask_SetPatrolLocation;
UClass* UMyBTTask_SetPatrolLocation::GetPrivateStaticClass()
{
	using TClass = UMyBTTask_SetPatrolLocation;
	if (!Z_Registration_Info_UClass_UMyBTTask_SetPatrolLocation.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MyBTTask_SetPatrolLocation"),
			Z_Registration_Info_UClass_UMyBTTask_SetPatrolLocation.InnerSingleton,
			StaticRegisterNativesUMyBTTask_SetPatrolLocation,
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
	return Z_Registration_Info_UClass_UMyBTTask_SetPatrolLocation.InnerSingleton;
}
UClass* Z_Construct_UClass_UMyBTTask_SetPatrolLocation_NoRegister()
{
	return UMyBTTask_SetPatrolLocation::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMyBTTask_SetPatrolLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tasks/MyBTTask_SetPatrolLocation.h" },
		{ "ModuleRelativePath", "Tasks/MyBTTask_SetPatrolLocation.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyBTTask_SetPatrolLocation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMyBTTask_SetPatrolLocation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_Game2DCPlusPlus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBTTask_SetPatrolLocation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyBTTask_SetPatrolLocation_Statics::ClassParams = {
	&UMyBTTask_SetPatrolLocation::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBTTask_SetPatrolLocation_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyBTTask_SetPatrolLocation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyBTTask_SetPatrolLocation()
{
	if (!Z_Registration_Info_UClass_UMyBTTask_SetPatrolLocation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyBTTask_SetPatrolLocation.OuterSingleton, Z_Construct_UClass_UMyBTTask_SetPatrolLocation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyBTTask_SetPatrolLocation.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMyBTTask_SetPatrolLocation);
UMyBTTask_SetPatrolLocation::~UMyBTTask_SetPatrolLocation() {}
// ********** End Class UMyBTTask_SetPatrolLocation ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Tasks_MyBTTask_SetPatrolLocation_h__Script_Game2DCPlusPlus_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyBTTask_SetPatrolLocation, UMyBTTask_SetPatrolLocation::StaticClass, TEXT("UMyBTTask_SetPatrolLocation"), &Z_Registration_Info_UClass_UMyBTTask_SetPatrolLocation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyBTTask_SetPatrolLocation), 430726811U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Tasks_MyBTTask_SetPatrolLocation_h__Script_Game2DCPlusPlus_2188600264(TEXT("/Script/Game2DCPlusPlus"),
	Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Tasks_MyBTTask_SetPatrolLocation_h__Script_Game2DCPlusPlus_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Tasks_MyBTTask_SetPatrolLocation_h__Script_Game2DCPlusPlus_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
