// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game2DCPlusPlus/GroundBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGroundBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_AGroundBase();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_AGroundBase_NoRegister();
PAPER2D_API UClass* Z_Construct_UClass_UPaperSpriteComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Game2DCPlusPlus();
// End Cross Module References

// Begin Class AGroundBase
void AGroundBase::StaticRegisterNativesAGroundBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGroundBase);
UClass* Z_Construct_UClass_AGroundBase_NoRegister()
{
	return AGroundBase::StaticClass();
}
struct Z_Construct_UClass_AGroundBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GroundBase.h" },
		{ "ModuleRelativePath", "GroundBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundSprite_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Ground" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GroundBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionBox_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GroundBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GroundSprite;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionBox;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGroundBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGroundBase_Statics::NewProp_GroundSprite = { "GroundSprite", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGroundBase, GroundSprite), Z_Construct_UClass_UPaperSpriteComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundSprite_MetaData), NewProp_GroundSprite_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGroundBase_Statics::NewProp_CollisionBox = { "CollisionBox", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGroundBase, CollisionBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionBox_MetaData), NewProp_CollisionBox_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGroundBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGroundBase_Statics::NewProp_GroundSprite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGroundBase_Statics::NewProp_CollisionBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGroundBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGroundBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Game2DCPlusPlus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGroundBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGroundBase_Statics::ClassParams = {
	&AGroundBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGroundBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGroundBase_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGroundBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AGroundBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGroundBase()
{
	if (!Z_Registration_Info_UClass_AGroundBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGroundBase.OuterSingleton, Z_Construct_UClass_AGroundBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGroundBase.OuterSingleton;
}
template<> GAME2DCPLUSPLUS_API UClass* StaticClass<AGroundBase>()
{
	return AGroundBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGroundBase);
AGroundBase::~AGroundBase() {}
// End Class AGroundBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_GroundBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGroundBase, AGroundBase::StaticClass, TEXT("AGroundBase"), &Z_Registration_Info_UClass_AGroundBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGroundBase), 3049539856U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_GroundBase_h_3186515201(TEXT("/Script/Game2DCPlusPlus"),
	Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_GroundBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_GroundBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
