// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game2DCPlusPlus/MyBTTask_SetPatrolLocation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyBTTask_SetPatrolLocation() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UMyBTTask_SetPatrolLocation();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UMyBTTask_SetPatrolLocation_NoRegister();
UPackage* Z_Construct_UPackage__Script_Game2DCPlusPlus();
// End Cross Module References

// Begin Class UMyBTTask_SetPatrolLocation
void UMyBTTask_SetPatrolLocation::StaticRegisterNativesUMyBTTask_SetPatrolLocation()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyBTTask_SetPatrolLocation);
UClass* Z_Construct_UClass_UMyBTTask_SetPatrolLocation_NoRegister()
{
	return UMyBTTask_SetPatrolLocation::StaticClass();
}
struct Z_Construct_UClass_UMyBTTask_SetPatrolLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyBTTask_SetPatrolLocation.h" },
		{ "ModuleRelativePath", "MyBTTask_SetPatrolLocation.h" },
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
template<> GAME2DCPLUSPLUS_API UClass* StaticClass<UMyBTTask_SetPatrolLocation>()
{
	return UMyBTTask_SetPatrolLocation::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyBTTask_SetPatrolLocation);
UMyBTTask_SetPatrolLocation::~UMyBTTask_SetPatrolLocation() {}
// End Class UMyBTTask_SetPatrolLocation

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_MyBTTask_SetPatrolLocation_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyBTTask_SetPatrolLocation, UMyBTTask_SetPatrolLocation::StaticClass, TEXT("UMyBTTask_SetPatrolLocation"), &Z_Registration_Info_UClass_UMyBTTask_SetPatrolLocation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyBTTask_SetPatrolLocation), 3473984640U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_MyBTTask_SetPatrolLocation_h_571639441(TEXT("/Script/Game2DCPlusPlus"),
	Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_MyBTTask_SetPatrolLocation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_MyBTTask_SetPatrolLocation_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
