// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game2DCPlusPlus/MyBTTask_OnPlayerseen.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyBTTask_OnPlayerseen() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UMyBTTask_OnPlayerseen();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UMyBTTask_OnPlayerseen_NoRegister();
UPackage* Z_Construct_UPackage__Script_Game2DCPlusPlus();
// End Cross Module References

// Begin Class UMyBTTask_OnPlayerseen
void UMyBTTask_OnPlayerseen::StaticRegisterNativesUMyBTTask_OnPlayerseen()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyBTTask_OnPlayerseen);
UClass* Z_Construct_UClass_UMyBTTask_OnPlayerseen_NoRegister()
{
	return UMyBTTask_OnPlayerseen::StaticClass();
}
struct Z_Construct_UClass_UMyBTTask_OnPlayerseen_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MyBTTask_OnPlayerseen.h" },
		{ "ModuleRelativePath", "MyBTTask_OnPlayerseen.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyBTTask_OnPlayerseen>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMyBTTask_OnPlayerseen_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_Game2DCPlusPlus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBTTask_OnPlayerseen_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyBTTask_OnPlayerseen_Statics::ClassParams = {
	&UMyBTTask_OnPlayerseen::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBTTask_OnPlayerseen_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyBTTask_OnPlayerseen_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyBTTask_OnPlayerseen()
{
	if (!Z_Registration_Info_UClass_UMyBTTask_OnPlayerseen.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyBTTask_OnPlayerseen.OuterSingleton, Z_Construct_UClass_UMyBTTask_OnPlayerseen_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyBTTask_OnPlayerseen.OuterSingleton;
}
template<> GAME2DCPLUSPLUS_API UClass* StaticClass<UMyBTTask_OnPlayerseen>()
{
	return UMyBTTask_OnPlayerseen::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyBTTask_OnPlayerseen);
UMyBTTask_OnPlayerseen::~UMyBTTask_OnPlayerseen() {}
// End Class UMyBTTask_OnPlayerseen

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_MyBTTask_OnPlayerseen_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyBTTask_OnPlayerseen, UMyBTTask_OnPlayerseen::StaticClass, TEXT("UMyBTTask_OnPlayerseen"), &Z_Registration_Info_UClass_UMyBTTask_OnPlayerseen, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyBTTask_OnPlayerseen), 4127624925U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_MyBTTask_OnPlayerseen_h_2396684240(TEXT("/Script/Game2DCPlusPlus"),
	Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_MyBTTask_OnPlayerseen_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_MyBTTask_OnPlayerseen_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
