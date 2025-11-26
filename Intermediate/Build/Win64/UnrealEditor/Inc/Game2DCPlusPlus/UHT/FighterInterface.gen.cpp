// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game2DCPlusPlus/Data/Interfaces/FighterInterface.h"
#include "Game2DCPlusPlus/Data/FCharacterData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFighterInterface() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UCharacterKiComponent_NoRegister();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UFighterInterface();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UFighterInterface_NoRegister();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UStandComponent_NoRegister();
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UStatsComponent_NoRegister();
GAME2DCPLUSPLUS_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterData();
UPackage* Z_Construct_UPackage__Script_Game2DCPlusPlus();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UFighterInterface Function GetCharacterData **************************
struct FighterInterface_eventGetCharacterData_Parms
{
	FCharacterData ReturnValue;
};
FCharacterData IFighterInterface::GetCharacterData() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetCharacterData instead.");
	FighterInterface_eventGetCharacterData_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UFighterInterface_GetCharacterData = FName(TEXT("GetCharacterData"));
FCharacterData IFighterInterface::Execute_GetCharacterData(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UFighterInterface::StaticClass()));
	FighterInterface_eventGetCharacterData_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UFighterInterface_GetCharacterData);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IFighterInterface*)(O->GetNativeInterfaceAddress(UFighterInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetCharacterData_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UFighterInterface_GetCharacterData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fighter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Retourne les donn\xef\xbf\xbd""es du personnage */" },
#endif
		{ "ModuleRelativePath", "Data/Interfaces/FighterInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retourne les donn\xef\xbf\xbd""es du personnage" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFighterInterface_GetCharacterData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FighterInterface_eventGetCharacterData_Parms, ReturnValue), Z_Construct_UScriptStruct_FCharacterData, METADATA_PARAMS(0, nullptr) }; // 3358070478
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFighterInterface_GetCharacterData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFighterInterface_GetCharacterData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFighterInterface_GetCharacterData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFighterInterface_GetCharacterData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFighterInterface, nullptr, "GetCharacterData", Z_Construct_UFunction_UFighterInterface_GetCharacterData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFighterInterface_GetCharacterData_Statics::PropPointers), sizeof(FighterInterface_eventGetCharacterData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFighterInterface_GetCharacterData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFighterInterface_GetCharacterData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(FighterInterface_eventGetCharacterData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFighterInterface_GetCharacterData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFighterInterface_GetCharacterData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IFighterInterface::execGetCharacterData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FCharacterData*)Z_Param__Result=P_THIS->GetCharacterData_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UFighterInterface Function GetCharacterData ****************************

// ********** Begin Interface UFighterInterface Function GetKiComponent ****************************
struct FighterInterface_eventGetKiComponent_Parms
{
	UCharacterKiComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	FighterInterface_eventGetKiComponent_Parms()
		: ReturnValue(NULL)
	{
	}
};
UCharacterKiComponent* IFighterInterface::GetKiComponent() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetKiComponent instead.");
	FighterInterface_eventGetKiComponent_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UFighterInterface_GetKiComponent = FName(TEXT("GetKiComponent"));
UCharacterKiComponent* IFighterInterface::Execute_GetKiComponent(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UFighterInterface::StaticClass()));
	FighterInterface_eventGetKiComponent_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UFighterInterface_GetKiComponent);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IFighterInterface*)(O->GetNativeInterfaceAddress(UFighterInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetKiComponent_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UFighterInterface_GetKiComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fighter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Retourne le composant de Ki (\xef\xbf\xbdnergie interne) */" },
#endif
		{ "ModuleRelativePath", "Data/Interfaces/FighterInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retourne le composant de Ki (\xef\xbf\xbdnergie interne)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFighterInterface_GetKiComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FighterInterface_eventGetKiComponent_Parms, ReturnValue), Z_Construct_UClass_UCharacterKiComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFighterInterface_GetKiComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFighterInterface_GetKiComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFighterInterface_GetKiComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFighterInterface_GetKiComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFighterInterface, nullptr, "GetKiComponent", Z_Construct_UFunction_UFighterInterface_GetKiComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFighterInterface_GetKiComponent_Statics::PropPointers), sizeof(FighterInterface_eventGetKiComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFighterInterface_GetKiComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFighterInterface_GetKiComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(FighterInterface_eventGetKiComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFighterInterface_GetKiComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFighterInterface_GetKiComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IFighterInterface::execGetKiComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCharacterKiComponent**)Z_Param__Result=P_THIS->GetKiComponent_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UFighterInterface Function GetKiComponent ******************************

// ********** Begin Interface UFighterInterface Function GetStandComponent *************************
struct FighterInterface_eventGetStandComponent_Parms
{
	UStandComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	FighterInterface_eventGetStandComponent_Parms()
		: ReturnValue(NULL)
	{
	}
};
UStandComponent* IFighterInterface::GetStandComponent() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetStandComponent instead.");
	FighterInterface_eventGetStandComponent_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UFighterInterface_GetStandComponent = FName(TEXT("GetStandComponent"));
UStandComponent* IFighterInterface::Execute_GetStandComponent(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UFighterInterface::StaticClass()));
	FighterInterface_eventGetStandComponent_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UFighterInterface_GetStandComponent);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IFighterInterface*)(O->GetNativeInterfaceAddress(UFighterInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetStandComponent_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UFighterInterface_GetStandComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fighter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Retourne le composant de Stand */" },
#endif
		{ "ModuleRelativePath", "Data/Interfaces/FighterInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retourne le composant de Stand" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFighterInterface_GetStandComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FighterInterface_eventGetStandComponent_Parms, ReturnValue), Z_Construct_UClass_UStandComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFighterInterface_GetStandComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFighterInterface_GetStandComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFighterInterface_GetStandComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFighterInterface_GetStandComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFighterInterface, nullptr, "GetStandComponent", Z_Construct_UFunction_UFighterInterface_GetStandComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFighterInterface_GetStandComponent_Statics::PropPointers), sizeof(FighterInterface_eventGetStandComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFighterInterface_GetStandComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFighterInterface_GetStandComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(FighterInterface_eventGetStandComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFighterInterface_GetStandComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFighterInterface_GetStandComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IFighterInterface::execGetStandComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UStandComponent**)Z_Param__Result=P_THIS->GetStandComponent_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UFighterInterface Function GetStandComponent ***************************

// ********** Begin Interface UFighterInterface Function GetStatsComponent *************************
struct FighterInterface_eventGetStatsComponent_Parms
{
	UStatsComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	FighterInterface_eventGetStatsComponent_Parms()
		: ReturnValue(NULL)
	{
	}
};
UStatsComponent* IFighterInterface::GetStatsComponent() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetStatsComponent instead.");
	FighterInterface_eventGetStatsComponent_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UFighterInterface_GetStatsComponent = FName(TEXT("GetStatsComponent"));
UStatsComponent* IFighterInterface::Execute_GetStatsComponent(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UFighterInterface::StaticClass()));
	FighterInterface_eventGetStatsComponent_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UFighterInterface_GetStatsComponent);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IFighterInterface*)(O->GetNativeInterfaceAddress(UFighterInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetStatsComponent_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UFighterInterface_GetStatsComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fighter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Retourne le composant de stats */" },
#endif
		{ "ModuleRelativePath", "Data/Interfaces/FighterInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retourne le composant de stats" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFighterInterface_GetStatsComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FighterInterface_eventGetStatsComponent_Parms, ReturnValue), Z_Construct_UClass_UStatsComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFighterInterface_GetStatsComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFighterInterface_GetStatsComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFighterInterface_GetStatsComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFighterInterface_GetStatsComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFighterInterface, nullptr, "GetStatsComponent", Z_Construct_UFunction_UFighterInterface_GetStatsComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFighterInterface_GetStatsComponent_Statics::PropPointers), sizeof(FighterInterface_eventGetStatsComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFighterInterface_GetStatsComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFighterInterface_GetStatsComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(FighterInterface_eventGetStatsComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFighterInterface_GetStatsComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFighterInterface_GetStatsComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IFighterInterface::execGetStatsComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UStatsComponent**)Z_Param__Result=P_THIS->GetStatsComponent_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UFighterInterface Function GetStatsComponent ***************************

// ********** Begin Interface UFighterInterface ****************************************************
void UFighterInterface::StaticRegisterNativesUFighterInterface()
{
	UClass* Class = UFighterInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCharacterData", &IFighterInterface::execGetCharacterData },
		{ "GetKiComponent", &IFighterInterface::execGetKiComponent },
		{ "GetStandComponent", &IFighterInterface::execGetStandComponent },
		{ "GetStatsComponent", &IFighterInterface::execGetStatsComponent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UFighterInterface;
UClass* UFighterInterface::GetPrivateStaticClass()
{
	using TClass = UFighterInterface;
	if (!Z_Registration_Info_UClass_UFighterInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("FighterInterface"),
			Z_Registration_Info_UClass_UFighterInterface.InnerSingleton,
			StaticRegisterNativesUFighterInterface,
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
	return Z_Registration_Info_UClass_UFighterInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_UFighterInterface_NoRegister()
{
	return UFighterInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFighterInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Data/Interfaces/FighterInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFighterInterface_GetCharacterData, "GetCharacterData" }, // 2800659405
		{ &Z_Construct_UFunction_UFighterInterface_GetKiComponent, "GetKiComponent" }, // 3612543881
		{ &Z_Construct_UFunction_UFighterInterface_GetStandComponent, "GetStandComponent" }, // 1990278226
		{ &Z_Construct_UFunction_UFighterInterface_GetStatsComponent, "GetStatsComponent" }, // 1815377326
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IFighterInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFighterInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Game2DCPlusPlus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFighterInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFighterInterface_Statics::ClassParams = {
	&UFighterInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFighterInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UFighterInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFighterInterface()
{
	if (!Z_Registration_Info_UClass_UFighterInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFighterInterface.OuterSingleton, Z_Construct_UClass_UFighterInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFighterInterface.OuterSingleton;
}
UFighterInterface::UFighterInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UFighterInterface);
// ********** End Interface UFighterInterface ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Data_Interfaces_FighterInterface_h__Script_Game2DCPlusPlus_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFighterInterface, UFighterInterface::StaticClass, TEXT("UFighterInterface"), &Z_Registration_Info_UClass_UFighterInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFighterInterface), 3743277246U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Data_Interfaces_FighterInterface_h__Script_Game2DCPlusPlus_2105030329(TEXT("/Script/Game2DCPlusPlus"),
	Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Data_Interfaces_FighterInterface_h__Script_Game2DCPlusPlus_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Data_Interfaces_FighterInterface_h__Script_Game2DCPlusPlus_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
