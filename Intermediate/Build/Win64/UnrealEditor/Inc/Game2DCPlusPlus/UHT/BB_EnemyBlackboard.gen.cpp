// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game2DCPlusPlus/BB_EnemyBlackboard.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBB_EnemyBlackboard() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UBB_EnemyBlackboard();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UBB_EnemyBlackboard_NoRegister();
UPackage* Z_Construct_UPackage__Script_Game2DCPlusPlus();
// End Cross Module References

// Begin Class UBB_EnemyBlackboard
void UBB_EnemyBlackboard::StaticRegisterNativesUBB_EnemyBlackboard()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBB_EnemyBlackboard);
UClass* Z_Construct_UClass_UBB_EnemyBlackboard_NoRegister()
{
	return UBB_EnemyBlackboard::StaticClass();
}
struct Z_Construct_UClass_UBB_EnemyBlackboard_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Sockets Collision" },
		{ "IncludePath", "BB_EnemyBlackboard.h" },
		{ "ModuleRelativePath", "BB_EnemyBlackboard.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBB_EnemyBlackboard>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBB_EnemyBlackboard_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlackboardComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Game2DCPlusPlus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBB_EnemyBlackboard_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBB_EnemyBlackboard_Statics::ClassParams = {
	&UBB_EnemyBlackboard::StaticClass,
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
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBB_EnemyBlackboard_Statics::Class_MetaDataParams), Z_Construct_UClass_UBB_EnemyBlackboard_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBB_EnemyBlackboard()
{
	if (!Z_Registration_Info_UClass_UBB_EnemyBlackboard.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBB_EnemyBlackboard.OuterSingleton, Z_Construct_UClass_UBB_EnemyBlackboard_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBB_EnemyBlackboard.OuterSingleton;
}
template<> GAME2DCPLUSPLUS_API UClass* StaticClass<UBB_EnemyBlackboard>()
{
	return UBB_EnemyBlackboard::StaticClass();
}
UBB_EnemyBlackboard::UBB_EnemyBlackboard(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBB_EnemyBlackboard);
UBB_EnemyBlackboard::~UBB_EnemyBlackboard() {}
// End Class UBB_EnemyBlackboard

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_BB_EnemyBlackboard_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBB_EnemyBlackboard, UBB_EnemyBlackboard::StaticClass, TEXT("UBB_EnemyBlackboard"), &Z_Registration_Info_UClass_UBB_EnemyBlackboard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBB_EnemyBlackboard), 643677541U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_BB_EnemyBlackboard_h_1761778829(TEXT("/Script/Game2DCPlusPlus"),
	Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_BB_EnemyBlackboard_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_BB_EnemyBlackboard_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
