// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game2DCPlusPlus/Creatures/CreatureBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCreatureBase() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_ACreatureBase();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_ACreatureBase_NoRegister();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UCreatureSegmentComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Game2DCPlusPlus();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACreatureBase Function GenerateCreature **********************************
struct Z_Construct_UFunction_ACreatureBase_GenerateCreature_Statics
{
	struct CreatureBase_eventGenerateCreature_Parms
	{
		int32 NumSegments;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Creature" },
		{ "CPP_Default_NumSegments", "4" },
		{ "ModuleRelativePath", "Creatures/CreatureBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumSegments;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACreatureBase_GenerateCreature_Statics::NewProp_NumSegments = { "NumSegments", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CreatureBase_eventGenerateCreature_Parms, NumSegments), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACreatureBase_GenerateCreature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACreatureBase_GenerateCreature_Statics::NewProp_NumSegments,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACreatureBase_GenerateCreature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACreatureBase_GenerateCreature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACreatureBase, nullptr, "GenerateCreature", Z_Construct_UFunction_ACreatureBase_GenerateCreature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACreatureBase_GenerateCreature_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACreatureBase_GenerateCreature_Statics::CreatureBase_eventGenerateCreature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACreatureBase_GenerateCreature_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACreatureBase_GenerateCreature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACreatureBase_GenerateCreature_Statics::CreatureBase_eventGenerateCreature_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACreatureBase_GenerateCreature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACreatureBase_GenerateCreature_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACreatureBase::execGenerateCreature)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NumSegments);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GenerateCreature(Z_Param_NumSegments);
	P_NATIVE_END;
}
// ********** End Class ACreatureBase Function GenerateCreature ************************************

// ********** Begin Class ACreatureBase ************************************************************
void ACreatureBase::StaticRegisterNativesACreatureBase()
{
	UClass* Class = ACreatureBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GenerateCreature", &ACreatureBase::execGenerateCreature },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACreatureBase;
UClass* ACreatureBase::GetPrivateStaticClass()
{
	using TClass = ACreatureBase;
	if (!Z_Registration_Info_UClass_ACreatureBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CreatureBase"),
			Z_Registration_Info_UClass_ACreatureBase.InnerSingleton,
			StaticRegisterNativesACreatureBase,
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
	return Z_Registration_Info_UClass_ACreatureBase.InnerSingleton;
}
UClass* Z_Construct_UClass_ACreatureBase_NoRegister()
{
	return ACreatureBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACreatureBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Creatures/CreatureBase.h" },
		{ "ModuleRelativePath", "Creatures/CreatureBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootSegment_MetaData[] = {
		{ "Category", "Creature" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Creatures/CreatureBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Segments_MetaData[] = {
		{ "Category", "Creature" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Creatures/CreatureBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootSegment;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Segments_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Segments;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACreatureBase_GenerateCreature, "GenerateCreature" }, // 4228668305
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACreatureBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACreatureBase_Statics::NewProp_RootSegment = { "RootSegment", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACreatureBase, RootSegment), Z_Construct_UClass_UCreatureSegmentComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootSegment_MetaData), NewProp_RootSegment_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACreatureBase_Statics::NewProp_Segments_Inner = { "Segments", nullptr, (EPropertyFlags)0x00000000000a0008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCreatureSegmentComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACreatureBase_Statics::NewProp_Segments = { "Segments", nullptr, (EPropertyFlags)0x001000800002001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACreatureBase, Segments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Segments_MetaData), NewProp_Segments_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACreatureBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACreatureBase_Statics::NewProp_RootSegment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACreatureBase_Statics::NewProp_Segments_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACreatureBase_Statics::NewProp_Segments,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACreatureBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACreatureBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Game2DCPlusPlus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACreatureBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACreatureBase_Statics::ClassParams = {
	&ACreatureBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACreatureBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACreatureBase_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACreatureBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ACreatureBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACreatureBase()
{
	if (!Z_Registration_Info_UClass_ACreatureBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACreatureBase.OuterSingleton, Z_Construct_UClass_ACreatureBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACreatureBase.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ACreatureBase);
ACreatureBase::~ACreatureBase() {}
// ********** End Class ACreatureBase **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Creatures_CreatureBase_h__Script_Game2DCPlusPlus_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACreatureBase, ACreatureBase::StaticClass, TEXT("ACreatureBase"), &Z_Registration_Info_UClass_ACreatureBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACreatureBase), 1990844950U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Creatures_CreatureBase_h__Script_Game2DCPlusPlus_2801396748(TEXT("/Script/Game2DCPlusPlus"),
	Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Creatures_CreatureBase_h__Script_Game2DCPlusPlus_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Creatures_CreatureBase_h__Script_Game2DCPlusPlus_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
