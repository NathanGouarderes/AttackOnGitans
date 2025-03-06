// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game2DCPlusPlus/BT_EnemyBehavior.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBT_EnemyBehavior() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UBT_EnemyBehavior();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UBT_EnemyBehavior_NoRegister();
UPackage* Z_Construct_UPackage__Script_Game2DCPlusPlus();
// End Cross Module References

// Begin Class UBT_EnemyBehavior
void UBT_EnemyBehavior::StaticRegisterNativesUBT_EnemyBehavior()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBT_EnemyBehavior);
UClass* Z_Construct_UClass_UBT_EnemyBehavior_NoRegister()
{
	return UBT_EnemyBehavior::StaticClass();
}
struct Z_Construct_UClass_UBT_EnemyBehavior_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BT_EnemyBehavior.h" },
		{ "ModuleRelativePath", "BT_EnemyBehavior.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBT_EnemyBehavior>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBT_EnemyBehavior_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBehaviorTree,
	(UObject* (*)())Z_Construct_UPackage__Script_Game2DCPlusPlus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBT_EnemyBehavior_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBT_EnemyBehavior_Statics::ClassParams = {
	&UBT_EnemyBehavior::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBT_EnemyBehavior_Statics::Class_MetaDataParams), Z_Construct_UClass_UBT_EnemyBehavior_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBT_EnemyBehavior()
{
	if (!Z_Registration_Info_UClass_UBT_EnemyBehavior.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBT_EnemyBehavior.OuterSingleton, Z_Construct_UClass_UBT_EnemyBehavior_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBT_EnemyBehavior.OuterSingleton;
}
template<> GAME2DCPLUSPLUS_API UClass* StaticClass<UBT_EnemyBehavior>()
{
	return UBT_EnemyBehavior::StaticClass();
}
UBT_EnemyBehavior::UBT_EnemyBehavior(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBT_EnemyBehavior);
UBT_EnemyBehavior::~UBT_EnemyBehavior() {}
// End Class UBT_EnemyBehavior

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_BT_EnemyBehavior_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBT_EnemyBehavior, UBT_EnemyBehavior::StaticClass, TEXT("UBT_EnemyBehavior"), &Z_Registration_Info_UClass_UBT_EnemyBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBT_EnemyBehavior), 1741624305U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_BT_EnemyBehavior_h_2725746462(TEXT("/Script/Game2DCPlusPlus"),
	Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_BT_EnemyBehavior_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_BT_EnemyBehavior_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
