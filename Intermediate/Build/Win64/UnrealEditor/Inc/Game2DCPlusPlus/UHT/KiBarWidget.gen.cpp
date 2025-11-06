// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game2DCPlusPlus/Widgets/KiBarWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeKiBarWidget() {}

// ********** Begin Cross Module References ********************************************************
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UKiBarWidget();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UKiBarWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Game2DCPlusPlus();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UKiBarWidget Function UpdateKiBar ****************************************
struct Z_Construct_UFunction_UKiBarWidget_UpdateKiBar_Statics
{
	struct KiBarWidget_eventUpdateKiBar_Parms
	{
		float CurentKi;
		float MaxKi;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "KI" },
		{ "ModuleRelativePath", "Widgets/KiBarWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurentKi;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxKi;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKiBarWidget_UpdateKiBar_Statics::NewProp_CurentKi = { "CurentKi", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KiBarWidget_eventUpdateKiBar_Parms, CurentKi), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKiBarWidget_UpdateKiBar_Statics::NewProp_MaxKi = { "MaxKi", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KiBarWidget_eventUpdateKiBar_Parms, MaxKi), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKiBarWidget_UpdateKiBar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKiBarWidget_UpdateKiBar_Statics::NewProp_CurentKi,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKiBarWidget_UpdateKiBar_Statics::NewProp_MaxKi,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKiBarWidget_UpdateKiBar_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKiBarWidget_UpdateKiBar_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKiBarWidget, nullptr, "UpdateKiBar", Z_Construct_UFunction_UKiBarWidget_UpdateKiBar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKiBarWidget_UpdateKiBar_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKiBarWidget_UpdateKiBar_Statics::KiBarWidget_eventUpdateKiBar_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKiBarWidget_UpdateKiBar_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKiBarWidget_UpdateKiBar_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKiBarWidget_UpdateKiBar_Statics::KiBarWidget_eventUpdateKiBar_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKiBarWidget_UpdateKiBar()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKiBarWidget_UpdateKiBar_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKiBarWidget::execUpdateKiBar)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_CurentKi);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxKi);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateKiBar(Z_Param_CurentKi,Z_Param_MaxKi);
	P_NATIVE_END;
}
// ********** End Class UKiBarWidget Function UpdateKiBar ******************************************

// ********** Begin Class UKiBarWidget *************************************************************
void UKiBarWidget::StaticRegisterNativesUKiBarWidget()
{
	UClass* Class = UKiBarWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "UpdateKiBar", &UKiBarWidget::execUpdateKiBar },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UKiBarWidget;
UClass* UKiBarWidget::GetPrivateStaticClass()
{
	using TClass = UKiBarWidget;
	if (!Z_Registration_Info_UClass_UKiBarWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("KiBarWidget"),
			Z_Registration_Info_UClass_UKiBarWidget.InnerSingleton,
			StaticRegisterNativesUKiBarWidget,
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
	return Z_Registration_Info_UClass_UKiBarWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UKiBarWidget_NoRegister()
{
	return UKiBarWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UKiBarWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Widgets/KiBarWidget.h" },
		{ "ModuleRelativePath", "Widgets/KiBarWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KiProgressBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widgets/KiBarWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KiProgressBar;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UKiBarWidget_UpdateKiBar, "UpdateKiBar" }, // 3559370694
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKiBarWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKiBarWidget_Statics::NewProp_KiProgressBar = { "KiProgressBar", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKiBarWidget, KiProgressBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KiProgressBar_MetaData), NewProp_KiProgressBar_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKiBarWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKiBarWidget_Statics::NewProp_KiProgressBar,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKiBarWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UKiBarWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Game2DCPlusPlus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKiBarWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UKiBarWidget_Statics::ClassParams = {
	&UKiBarWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UKiBarWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UKiBarWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKiBarWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UKiBarWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UKiBarWidget()
{
	if (!Z_Registration_Info_UClass_UKiBarWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKiBarWidget.OuterSingleton, Z_Construct_UClass_UKiBarWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UKiBarWidget.OuterSingleton;
}
UKiBarWidget::UKiBarWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UKiBarWidget);
UKiBarWidget::~UKiBarWidget() {}
// ********** End Class UKiBarWidget ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Widgets_KiBarWidget_h__Script_Game2DCPlusPlus_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UKiBarWidget, UKiBarWidget::StaticClass, TEXT("UKiBarWidget"), &Z_Registration_Info_UClass_UKiBarWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKiBarWidget), 2982796505U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Widgets_KiBarWidget_h__Script_Game2DCPlusPlus_2958911408(TEXT("/Script/Game2DCPlusPlus"),
	Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Widgets_KiBarWidget_h__Script_Game2DCPlusPlus_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Widgets_KiBarWidget_h__Script_Game2DCPlusPlus_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
