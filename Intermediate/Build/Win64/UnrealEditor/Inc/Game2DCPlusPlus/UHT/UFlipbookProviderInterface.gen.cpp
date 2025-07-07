// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game2DCPlusPlus/Interface/UFlipbookProviderInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUFlipbookProviderInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UFlipbookProviderInterface();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UFlipbookProviderInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Game2DCPlusPlus();
// End Cross Module References

// Begin Interface UFlipbookProviderInterface
void UFlipbookProviderInterface::StaticRegisterNativesUFlipbookProviderInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFlipbookProviderInterface);
UClass* Z_Construct_UClass_UFlipbookProviderInterface_NoRegister()
{
	return UFlipbookProviderInterface::StaticClass();
}
struct Z_Construct_UClass_UFlipbookProviderInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interface/UFlipbookProviderInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IFlipbookProviderInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFlipbookProviderInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Game2DCPlusPlus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFlipbookProviderInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFlipbookProviderInterface_Statics::ClassParams = {
	&UFlipbookProviderInterface::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFlipbookProviderInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UFlipbookProviderInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFlipbookProviderInterface()
{
	if (!Z_Registration_Info_UClass_UFlipbookProviderInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFlipbookProviderInterface.OuterSingleton, Z_Construct_UClass_UFlipbookProviderInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFlipbookProviderInterface.OuterSingleton;
}
template<> GAME2DCPLUSPLUS_API UClass* StaticClass<UFlipbookProviderInterface>()
{
	return UFlipbookProviderInterface::StaticClass();
}
UFlipbookProviderInterface::UFlipbookProviderInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFlipbookProviderInterface);
UFlipbookProviderInterface::~UFlipbookProviderInterface() {}
// End Interface UFlipbookProviderInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_5_Source_Game2DCPlusPlus_Interface_UFlipbookProviderInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFlipbookProviderInterface, UFlipbookProviderInterface::StaticClass, TEXT("UFlipbookProviderInterface"), &Z_Registration_Info_UClass_UFlipbookProviderInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFlipbookProviderInterface), 179942296U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_5_Source_Game2DCPlusPlus_Interface_UFlipbookProviderInterface_h_2210575656(TEXT("/Script/Game2DCPlusPlus"),
	Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_5_Source_Game2DCPlusPlus_Interface_UFlipbookProviderInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_5_Source_Game2DCPlusPlus_Interface_UFlipbookProviderInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
