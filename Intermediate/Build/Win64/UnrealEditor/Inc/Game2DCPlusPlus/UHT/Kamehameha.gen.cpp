// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game2DCPlusPlus/Kamehameha.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKamehameha() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_AKamehameha();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_AKamehameha_NoRegister();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_AMyCharacter_NoRegister();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_AMyKiProjectileBase();
PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbookComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Game2DCPlusPlus();
// End Cross Module References

// Begin Class AKamehameha
void AKamehameha::StaticRegisterNativesAKamehameha()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AKamehameha);
UClass* Z_Construct_UClass_AKamehameha_NoRegister()
{
	return AKamehameha::StaticClass();
}
struct Z_Construct_UClass_AKamehameha_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Kamehameha.h" },
		{ "ModuleRelativePath", "Kamehameha.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlipbookComponent_MetaData[] = {
		{ "Category", "Animation" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Kamehameha.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleCollisionComponent_MetaData[] = {
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Kamehameha.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KamehamehaFlipbook_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Kamehameha.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpansionSpeed_MetaData[] = {
		{ "Category", "Kamehameha" },
		{ "ModuleRelativePath", "Kamehameha.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterClass_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Kamehameha.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FlipbookComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CapsuleCollisionComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KamehamehaFlipbook;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExpansionSpeed;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CharacterClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKamehameha>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKamehameha_Statics::NewProp_FlipbookComponent = { "FlipbookComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKamehameha, FlipbookComponent), Z_Construct_UClass_UPaperFlipbookComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlipbookComponent_MetaData), NewProp_FlipbookComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKamehameha_Statics::NewProp_CapsuleCollisionComponent = { "CapsuleCollisionComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKamehameha, CapsuleCollisionComponent), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapsuleCollisionComponent_MetaData), NewProp_CapsuleCollisionComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKamehameha_Statics::NewProp_KamehamehaFlipbook = { "KamehamehaFlipbook", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKamehameha, KamehamehaFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KamehamehaFlipbook_MetaData), NewProp_KamehamehaFlipbook_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AKamehameha_Statics::NewProp_ExpansionSpeed = { "ExpansionSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKamehameha, ExpansionSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpansionSpeed_MetaData), NewProp_ExpansionSpeed_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AKamehameha_Statics::NewProp_CharacterClass = { "CharacterClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKamehameha, CharacterClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AMyCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterClass_MetaData), NewProp_CharacterClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AKamehameha_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKamehameha_Statics::NewProp_FlipbookComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKamehameha_Statics::NewProp_CapsuleCollisionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKamehameha_Statics::NewProp_KamehamehaFlipbook,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKamehameha_Statics::NewProp_ExpansionSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKamehameha_Statics::NewProp_CharacterClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKamehameha_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AKamehameha_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AMyKiProjectileBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Game2DCPlusPlus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKamehameha_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AKamehameha_Statics::ClassParams = {
	&AKamehameha::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AKamehameha_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AKamehameha_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AKamehameha_Statics::Class_MetaDataParams), Z_Construct_UClass_AKamehameha_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AKamehameha()
{
	if (!Z_Registration_Info_UClass_AKamehameha.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AKamehameha.OuterSingleton, Z_Construct_UClass_AKamehameha_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AKamehameha.OuterSingleton;
}
template<> GAME2DCPLUSPLUS_API UClass* StaticClass<AKamehameha>()
{
	return AKamehameha::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AKamehameha);
AKamehameha::~AKamehameha() {}
// End Class AKamehameha

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_Kamehameha_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AKamehameha, AKamehameha::StaticClass, TEXT("AKamehameha"), &Z_Registration_Info_UClass_AKamehameha, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AKamehameha), 621507327U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_Kamehameha_h_3895678158(TEXT("/Script/Game2DCPlusPlus"),
	Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_Kamehameha_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_Kamehameha_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
