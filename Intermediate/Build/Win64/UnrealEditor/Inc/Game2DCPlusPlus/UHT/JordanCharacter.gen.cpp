// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game2DCPlusPlus/JordanCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJordanCharacter() {}

// Begin Cross Module References
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_AJordanCharacter();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_AJordanCharacter_NoRegister();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_AMyCharacter();
PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
UPackage* Z_Construct_UPackage__Script_Game2DCPlusPlus();
// End Cross Module References

// Begin Class AJordanCharacter
void AJordanCharacter::StaticRegisterNativesAJordanCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AJordanCharacter);
UClass* Z_Construct_UClass_AJordanCharacter_NoRegister()
{
	return AJordanCharacter::StaticClass();
}
struct Z_Construct_UClass_AJordanCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "JordanCharacter.h" },
		{ "ModuleRelativePath", "JordanCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpecialJordanAttackFlipbook_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Animations" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Propri\xef\xbf\xbdt\xef\xbf\xbds sp\xef\xbf\xbd""cifiques \xef\xbf\xbd Jordan\n" },
#endif
		{ "ModuleRelativePath", "JordanCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Propri\xef\xbf\xbdt\xef\xbf\xbds sp\xef\xbf\xbd""cifiques \xef\xbf\xbd Jordan" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpecialJordanAttackFlipbook;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJordanCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJordanCharacter_Statics::NewProp_SpecialJordanAttackFlipbook = { "SpecialJordanAttackFlipbook", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AJordanCharacter, SpecialJordanAttackFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpecialJordanAttackFlipbook_MetaData), NewProp_SpecialJordanAttackFlipbook_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AJordanCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJordanCharacter_Statics::NewProp_SpecialJordanAttackFlipbook,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AJordanCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AJordanCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AMyCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Game2DCPlusPlus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AJordanCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AJordanCharacter_Statics::ClassParams = {
	&AJordanCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AJordanCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AJordanCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AJordanCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AJordanCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AJordanCharacter()
{
	if (!Z_Registration_Info_UClass_AJordanCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AJordanCharacter.OuterSingleton, Z_Construct_UClass_AJordanCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AJordanCharacter.OuterSingleton;
}
template<> GAME2DCPLUSPLUS_API UClass* StaticClass<AJordanCharacter>()
{
	return AJordanCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AJordanCharacter);
AJordanCharacter::~AJordanCharacter() {}
// End Class AJordanCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_JordanCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AJordanCharacter, AJordanCharacter::StaticClass, TEXT("AJordanCharacter"), &Z_Registration_Info_UClass_AJordanCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AJordanCharacter), 761328678U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_JordanCharacter_h_2400051133(TEXT("/Script/Game2DCPlusPlus"),
	Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_JordanCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_Source_Game2DCPlusPlus_JordanCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
