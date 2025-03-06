// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game2DCPlusPlus/MyBehaviorTree.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyBehaviorTree() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UMyBehaviorTree();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UMyBehaviorTree_NoRegister();
UPackage* Z_Construct_UPackage__Script_Game2DCPlusPlus();
// End Cross Module References

// Begin Class UMyBehaviorTree
void UMyBehaviorTree::StaticRegisterNativesUMyBehaviorTree()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyBehaviorTree);
UClass* Z_Construct_UClass_UMyBehaviorTree_NoRegister()
{
	return UMyBehaviorTree::StaticClass();
}
struct Z_Construct_UClass_UMyBehaviorTree_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MyBehaviorTree.h" },
		{ "ModuleRelativePath", "MyBehaviorTree.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyBehaviorTree>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMyBehaviorTree_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBehaviorTree,
	(UObject* (*)())Z_Construct_UPackage__Script_Game2DCPlusPlus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBehaviorTree_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyBehaviorTree_Statics::ClassParams = {
	&UMyBehaviorTree::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBehaviorTree_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyBehaviorTree_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyBehaviorTree()
{
	if (!Z_Registration_Info_UClass_UMyBehaviorTree.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyBehaviorTree.OuterSingleton, Z_Construct_UClass_UMyBehaviorTree_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyBehaviorTree.OuterSingleton;
}
template<> GAME2DCPLUSPLUS_API UClass* StaticClass<UMyBehaviorTree>()
{
	return UMyBehaviorTree::StaticClass();
}
UMyBehaviorTree::UMyBehaviorTree(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyBehaviorTree);
UMyBehaviorTree::~UMyBehaviorTree() {}
// End Class UMyBehaviorTree

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_MyBehaviorTree_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyBehaviorTree, UMyBehaviorTree::StaticClass, TEXT("UMyBehaviorTree"), &Z_Registration_Info_UClass_UMyBehaviorTree, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyBehaviorTree), 1233852142U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_MyBehaviorTree_h_580847435(TEXT("/Script/Game2DCPlusPlus"),
	Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_MyBehaviorTree_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_MyBehaviorTree_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
