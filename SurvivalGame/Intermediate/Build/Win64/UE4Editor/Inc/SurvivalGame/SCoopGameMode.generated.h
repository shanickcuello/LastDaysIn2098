// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SURVIVALGAME_SCoopGameMode_generated_h
#error "SCoopGameMode.generated.h already included, missing '#pragma once' in SCoopGameMode.h"
#endif
#define SURVIVALGAME_SCoopGameMode_generated_h

#define SurvivalGame_Source_SurvivalGame_Public_World_SCoopGameMode_h_15_SPARSE_DATA
#define SurvivalGame_Source_SurvivalGame_Public_World_SCoopGameMode_h_15_RPC_WRAPPERS
#define SurvivalGame_Source_SurvivalGame_Public_World_SCoopGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define SurvivalGame_Source_SurvivalGame_Public_World_SCoopGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASCoopGameMode(); \
	friend struct Z_Construct_UClass_ASCoopGameMode_Statics; \
public: \
	DECLARE_CLASS(ASCoopGameMode, ASGameMode, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SurvivalGame"), NO_API) \
	DECLARE_SERIALIZER(ASCoopGameMode)


#define SurvivalGame_Source_SurvivalGame_Public_World_SCoopGameMode_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASCoopGameMode(); \
	friend struct Z_Construct_UClass_ASCoopGameMode_Statics; \
public: \
	DECLARE_CLASS(ASCoopGameMode, ASGameMode, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SurvivalGame"), NO_API) \
	DECLARE_SERIALIZER(ASCoopGameMode)


#define SurvivalGame_Source_SurvivalGame_Public_World_SCoopGameMode_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASCoopGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASCoopGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASCoopGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASCoopGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASCoopGameMode(ASCoopGameMode&&); \
	NO_API ASCoopGameMode(const ASCoopGameMode&); \
public:


#define SurvivalGame_Source_SurvivalGame_Public_World_SCoopGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASCoopGameMode(ASCoopGameMode&&); \
	NO_API ASCoopGameMode(const ASCoopGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASCoopGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASCoopGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASCoopGameMode)


#define SurvivalGame_Source_SurvivalGame_Public_World_SCoopGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bSpawnAtTeamPlayer() { return STRUCT_OFFSET(ASCoopGameMode, bSpawnAtTeamPlayer); } \
	FORCEINLINE static uint32 __PPO__ScoreNightSurvived() { return STRUCT_OFFSET(ASCoopGameMode, ScoreNightSurvived); }


#define SurvivalGame_Source_SurvivalGame_Public_World_SCoopGameMode_h_12_PROLOG
#define SurvivalGame_Source_SurvivalGame_Public_World_SCoopGameMode_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SurvivalGame_Source_SurvivalGame_Public_World_SCoopGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	SurvivalGame_Source_SurvivalGame_Public_World_SCoopGameMode_h_15_SPARSE_DATA \
	SurvivalGame_Source_SurvivalGame_Public_World_SCoopGameMode_h_15_RPC_WRAPPERS \
	SurvivalGame_Source_SurvivalGame_Public_World_SCoopGameMode_h_15_INCLASS \
	SurvivalGame_Source_SurvivalGame_Public_World_SCoopGameMode_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SurvivalGame_Source_SurvivalGame_Public_World_SCoopGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SurvivalGame_Source_SurvivalGame_Public_World_SCoopGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	SurvivalGame_Source_SurvivalGame_Public_World_SCoopGameMode_h_15_SPARSE_DATA \
	SurvivalGame_Source_SurvivalGame_Public_World_SCoopGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	SurvivalGame_Source_SurvivalGame_Public_World_SCoopGameMode_h_15_INCLASS_NO_PURE_DECLS \
	SurvivalGame_Source_SurvivalGame_Public_World_SCoopGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SURVIVALGAME_API UClass* StaticClass<class ASCoopGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SurvivalGame_Source_SurvivalGame_Public_World_SCoopGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
