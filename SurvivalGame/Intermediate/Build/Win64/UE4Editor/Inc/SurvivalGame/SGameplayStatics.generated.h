// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
struct FVector;
struct FVector2D;
#ifdef SURVIVALGAME_SGameplayStatics_generated_h
#error "SGameplayStatics.generated.h already included, missing '#pragma once' in SGameplayStatics.h"
#endif
#define SURVIVALGAME_SGameplayStatics_generated_h

#define SurvivalGame_Source_SurvivalGame_Public_Core_SGameplayStatics_h_15_SPARSE_DATA
#define SurvivalGame_Source_SurvivalGame_Public_Core_SGameplayStatics_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execProjectWorldToScreenBidirectional);


#define SurvivalGame_Source_SurvivalGame_Public_Core_SGameplayStatics_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execProjectWorldToScreenBidirectional);


#define SurvivalGame_Source_SurvivalGame_Public_Core_SGameplayStatics_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSGameplayStatics(); \
	friend struct Z_Construct_UClass_USGameplayStatics_Statics; \
public: \
	DECLARE_CLASS(USGameplayStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SurvivalGame"), NO_API) \
	DECLARE_SERIALIZER(USGameplayStatics)


#define SurvivalGame_Source_SurvivalGame_Public_Core_SGameplayStatics_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSGameplayStatics(); \
	friend struct Z_Construct_UClass_USGameplayStatics_Statics; \
public: \
	DECLARE_CLASS(USGameplayStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SurvivalGame"), NO_API) \
	DECLARE_SERIALIZER(USGameplayStatics)


#define SurvivalGame_Source_SurvivalGame_Public_Core_SGameplayStatics_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USGameplayStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USGameplayStatics) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USGameplayStatics); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USGameplayStatics); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USGameplayStatics(USGameplayStatics&&); \
	NO_API USGameplayStatics(const USGameplayStatics&); \
public:


#define SurvivalGame_Source_SurvivalGame_Public_Core_SGameplayStatics_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USGameplayStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USGameplayStatics(USGameplayStatics&&); \
	NO_API USGameplayStatics(const USGameplayStatics&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USGameplayStatics); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USGameplayStatics); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USGameplayStatics)


#define SurvivalGame_Source_SurvivalGame_Public_Core_SGameplayStatics_h_15_PRIVATE_PROPERTY_OFFSET
#define SurvivalGame_Source_SurvivalGame_Public_Core_SGameplayStatics_h_12_PROLOG
#define SurvivalGame_Source_SurvivalGame_Public_Core_SGameplayStatics_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SurvivalGame_Source_SurvivalGame_Public_Core_SGameplayStatics_h_15_PRIVATE_PROPERTY_OFFSET \
	SurvivalGame_Source_SurvivalGame_Public_Core_SGameplayStatics_h_15_SPARSE_DATA \
	SurvivalGame_Source_SurvivalGame_Public_Core_SGameplayStatics_h_15_RPC_WRAPPERS \
	SurvivalGame_Source_SurvivalGame_Public_Core_SGameplayStatics_h_15_INCLASS \
	SurvivalGame_Source_SurvivalGame_Public_Core_SGameplayStatics_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SurvivalGame_Source_SurvivalGame_Public_Core_SGameplayStatics_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SurvivalGame_Source_SurvivalGame_Public_Core_SGameplayStatics_h_15_PRIVATE_PROPERTY_OFFSET \
	SurvivalGame_Source_SurvivalGame_Public_Core_SGameplayStatics_h_15_SPARSE_DATA \
	SurvivalGame_Source_SurvivalGame_Public_Core_SGameplayStatics_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	SurvivalGame_Source_SurvivalGame_Public_Core_SGameplayStatics_h_15_INCLASS_NO_PURE_DECLS \
	SurvivalGame_Source_SurvivalGame_Public_Core_SGameplayStatics_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SURVIVALGAME_API UClass* StaticClass<class USGameplayStatics>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SurvivalGame_Source_SurvivalGame_Public_Core_SGameplayStatics_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
