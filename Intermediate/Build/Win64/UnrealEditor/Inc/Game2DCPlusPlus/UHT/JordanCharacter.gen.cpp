// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game2DCPlusPlus/Characters/JordanCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeJordanCharacter() {}

// ********** Begin Cross Module References ********************************************************
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_AJordanCharacter();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_AJordanCharacter_NoRegister();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_AMyCharacter();
PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
UPackage* Z_Construct_UPackage__Script_Game2DCPlusPlus();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AJordanCharacter *********************************************************
void AJordanCharacter::StaticRegisterNativesAJordanCharacter()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AJordanCharacter;
UClass* AJordanCharacter::GetPrivateStaticClass()
{
	using TClass = AJordanCharacter;
	if (!Z_Registration_Info_UClass_AJordanCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("JordanCharacter"),
			Z_Registration_Info_UClass_AJordanCharacter.InnerSingleton,
			StaticRegisterNativesAJordanCharacter,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AJordanCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_AJordanCharacter_NoRegister()
{
	return AJordanCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AJordanCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/JordanCharacter.h" },
		{ "ModuleRelativePath", "Characters/JordanCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpecialJordanAttackFlipbook_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Animations" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Propri\xef\xbf\xbdt\xef\xbf\xbds sp\xef\xbf\xbd""cifiques \xef\xbf\xbd Jordan\n" },
#endif
		{ "ModuleRelativePath", "Characters/JordanCharacter.h" },
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
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AJordanCharacter);
AJordanCharacter::~AJordanCharacter() {}
// ********** End Class AJordanCharacter ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Characters_JordanCharacter_h__Script_Game2DCPlusPlus_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AJordanCharacter, AJordanCharacter::StaticClass, TEXT("AJordanCharacter"), &Z_Registration_Info_UClass_AJordanCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AJordanCharacter), 35238086U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Characters_JordanCharacter_h__Script_Game2DCPlusPlus_2282919058(TEXT("/Script/Game2DCPlusPlus"),
	Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Characters_JordanCharacter_h__Script_Game2DCPlusPlus_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Characters_JordanCharacter_h__Script_Game2DCPlusPlus_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
