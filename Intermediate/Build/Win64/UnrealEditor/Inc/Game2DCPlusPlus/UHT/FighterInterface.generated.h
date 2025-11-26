// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/Interfaces/FighterInterface.h"

#ifdef GAME2DCPLUSPLUS_FighterInterface_generated_h
#error "FighterInterface.generated.h already included, missing '#pragma once' in FighterInterface.h"
#endif
#define GAME2DCPLUSPLUS_FighterInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCharacterKiComponent;
class UStandComponent;
class UStatsComponent;
struct FCharacterData;

// ********** Begin Interface UFighterInterface ****************************************************
#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Data_Interfaces_FighterInterface_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual FCharacterData GetCharacterData_Implementation() const { return FCharacterData(); }; \
	virtual UStandComponent* GetStandComponent_Implementation() const { return NULL; }; \
	virtual UCharacterKiComponent* GetKiComponent_Implementation() const { return NULL; }; \
	virtual UStatsComponent* GetStatsComponent_Implementation() const { return NULL; }; \
	DECLARE_FUNCTION(execGetCharacterData); \
	DECLARE_FUNCTION(execGetStandComponent); \
	DECLARE_FUNCTION(execGetKiComponent); \
	DECLARE_FUNCTION(execGetStatsComponent);


#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Data_Interfaces_FighterInterface_h_17_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UFighterInterface_Statics;
GAME2DCPLUSPLUS_API UClass* Z_Construct_UClass_UFighterInterface_NoRegister();

#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Data_Interfaces_FighterInterface_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFighterInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFighterInterface(UFighterInterface&&) = delete; \
	UFighterInterface(const UFighterInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFighterInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFighterInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFighterInterface) \
	virtual ~UFighterInterface() = default;


#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Data_Interfaces_FighterInterface_h_17_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUFighterInterface(); \
	friend struct ::Z_Construct_UClass_UFighterInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAME2DCPLUSPLUS_API UClass* ::Z_Construct_UClass_UFighterInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UFighterInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Game2DCPlusPlus"), Z_Construct_UClass_UFighterInterface_NoRegister) \
	DECLARE_SERIALIZER(UFighterInterface)


#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Data_Interfaces_FighterInterface_h_17_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Data_Interfaces_FighterInterface_h_17_GENERATED_UINTERFACE_BODY() \
	FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Data_Interfaces_FighterInterface_h_17_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Data_Interfaces_FighterInterface_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IFighterInterface() {} \
public: \
	typedef UFighterInterface UClassType; \
	typedef IFighterInterface ThisClass; \
	static FCharacterData Execute_GetCharacterData(const UObject* O); \
	static UCharacterKiComponent* Execute_GetKiComponent(const UObject* O); \
	static UStandComponent* Execute_GetStandComponent(const UObject* O); \
	static UStatsComponent* Execute_GetStatsComponent(const UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Data_Interfaces_FighterInterface_h_14_PROLOG
#define FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Data_Interfaces_FighterInterface_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Data_Interfaces_FighterInterface_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Data_Interfaces_FighterInterface_h_17_CALLBACK_WRAPPERS \
	FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Data_Interfaces_FighterInterface_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFighterInterface;

// ********** End Interface UFighterInterface ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_natha_Documents_Unreal_Projects_Game2DCPlusPlus_5_6_5_7_Source_Game2DCPlusPlus_Data_Interfaces_FighterInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
