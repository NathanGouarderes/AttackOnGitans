// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game2DCPlusPlus/MyGameModeCPlusPlus.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGameModeCPlusPlus() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_AMyGameModeCPlusPlus();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_AMyGameModeCPlusPlus_NoRegister();
UPackage* Z_Construct_UPackage__Script_Game2DCPlusPlus();
// End Cross Module References

// Begin Class AMyGameModeCPlusPlus
void AMyGameModeCPlusPlus::StaticRegisterNativesAMyGameModeCPlusPlus()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyGameModeCPlusPlus);
UClass* Z_Construct_UClass_AMyGameModeCPlusPlus_NoRegister()
{
	return AMyGameModeCPlusPlus::StaticClass();
}
struct Z_Construct_UClass_AMyGameModeCPlusPlus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MyGameModeCPlusPlus.h" },
		{ "ModuleRelativePath", "MyGameModeCPlusPlus.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyGameModeCPlusPlus>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMyGameModeCPlusPlus_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Game2DCPlusPlus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameModeCPlusPlus_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyGameModeCPlusPlus_Statics::ClassParams = {
	&AMyGameModeCPlusPlus::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameModeCPlusPlus_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyGameModeCPlusPlus_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyGameModeCPlusPlus()
{
	if (!Z_Registration_Info_UClass_AMyGameModeCPlusPlus.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyGameModeCPlusPlus.OuterSingleton, Z_Construct_UClass_AMyGameModeCPlusPlus_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyGameModeCPlusPlus.OuterSingleton;
}
template<> GAME2DCPLUSPLUS_API UClass* StaticClass<AMyGameModeCPlusPlus>()
{
	return AMyGameModeCPlusPlus::StaticClass();
}
AMyGameModeCPlusPlus::AMyGameModeCPlusPlus(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyGameModeCPlusPlus);
AMyGameModeCPlusPlus::~AMyGameModeCPlusPlus() {}
// End Class AMyGameModeCPlusPlus

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_MyGameModeCPlusPlus_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyGameModeCPlusPlus, AMyGameModeCPlusPlus::StaticClass, TEXT("AMyGameModeCPlusPlus"), &Z_Registration_Info_UClass_AMyGameModeCPlusPlus, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyGameModeCPlusPlus), 2158082551U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_MyGameModeCPlusPlus_h_2661792896(TEXT("/Script/Game2DCPlusPlus"),
	Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_MyGameModeCPlusPlus_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_MyGameModeCPlusPlus_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
