// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FTransform;
#ifdef SURVIVALGAME_SGameMode_generated_h
#error "SGameMode.generated.h already included, missing '#pragma once' in SGameMode.h"
#endif
#define SURVIVALGAME_SGameMode_generated_h

#define SurvivalGame_Source_SurvivalGame_Public_World_SGameMode_h_19_SPARSE_DATA
#define SurvivalGame_Source_SurvivalGame_Public_World_SGameMode_h_19_RPC_WRAPPERS \
	virtual bool CheckRelevance_Implementation(AActor* Other); \
 \
	DECLARE_FUNCTION(execCheckRelevance); \
	DECLARE_FUNCTION(execSpawnNewBot);


#define SurvivalGame_Source_SurvivalGame_Public_World_SGameMode_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCheckRelevance); \
	DECLARE_FUNCTION(execSpawnNewBot);


#define SurvivalGame_Source_SurvivalGame_Public_World_SGameMode_h_19_EVENT_PARMS \
	struct SGameMode_eventCheckRelevance_Parms \
	{ \
		AActor* Other; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SGameMode_eventCheckRelevance_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct SGameMode_eventFindBotSpawnTransform_Parms \
	{ \
		FTransform Transform; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SGameMode_eventFindBotSpawnTransform_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define SurvivalGame_Source_SurvivalGame_Public_World_SGameMode_h_19_CALLBACK_WRAPPERS
#define SurvivalGame_Source_SurvivalGame_Public_World_SGameMode_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASGameMode(); \
	friend struct Z_Construct_UClass_ASGameMode_Statics; \
public: \
	DECLARE_CLASS(ASGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SurvivalGame"), NO_API) \
	DECLARE_SERIALIZER(ASGameMode)


#define SurvivalGame_Source_SurvivalGame_Public_World_SGameMode_h_19_INCLASS \
private: \
	static void StaticRegisterNativesASGameMode(); \
	friend struct Z_Construct_UClass_ASGameMode_Statics; \
public: \
	DECLARE_CLASS(ASGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SurvivalGame"), NO_API) \
	DECLARE_SERIALIZER(ASGameMode)


#define SurvivalGame_Source_SurvivalGame_Public_World_SGameMode_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASGameMode(ASGameMode&&); \
	NO_API ASGameMode(const ASGameMode&); \
public:


#define SurvivalGame_Source_SurvivalGame_Public_World_SGameMode_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASGameMode(ASGameMode&&); \
	NO_API ASGameMode(const ASGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASGameMode)


#define SurvivalGame_Source_SurvivalGame_Public_World_SGameMode_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bAllowFriendlyFireDamage() { return STRUCT_OFFSET(ASGameMode, bAllowFriendlyFireDamage); } \
	FORCEINLINE static uint32 __PPO__bSpawnZombiesAtNight() { return STRUCT_OFFSET(ASGameMode, bSpawnZombiesAtNight); } \
	FORCEINLINE static uint32 __PPO__MaxPawnsInZone() { return STRUCT_OFFSET(ASGameMode, MaxPawnsInZone); } \
	FORCEINLINE static uint32 __PPO__BotPawnClass() { return STRUCT_OFFSET(ASGameMode, BotPawnClass); } \
	FORCEINLINE static uint32 __PPO__MutatorClasses() { return STRUCT_OFFSET(ASGameMode, MutatorClasses); }


#define SurvivalGame_Source_SurvivalGame_Public_World_SGameMode_h_16_PROLOG \
	SurvivalGame_Source_SurvivalGame_Public_World_SGameMode_h_19_EVENT_PARMS


#define SurvivalGame_Source_SurvivalGame_Public_World_SGameMode_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SurvivalGame_Source_SurvivalGame_Public_World_SGameMode_h_19_PRIVATE_PROPERTY_OFFSET \
	SurvivalGame_Source_SurvivalGame_Public_World_SGameMode_h_19_SPARSE_DATA \
	SurvivalGame_Source_SurvivalGame_Public_World_SGameMode_h_19_RPC_WRAPPERS \
	SurvivalGame_Source_SurvivalGame_Public_World_SGameMode_h_19_CALLBACK_WRAPPERS \
	SurvivalGame_Source_SurvivalGame_Public_World_SGameMode_h_19_INCLASS \
	SurvivalGame_Source_SurvivalGame_Public_World_SGameMode_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SurvivalGame_Source_SurvivalGame_Public_World_SGameMode_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SurvivalGame_Source_SurvivalGame_Public_World_SGameMode_h_19_PRIVATE_PROPERTY_OFFSET \
	SurvivalGame_Source_SurvivalGame_Public_World_SGameMode_h_19_SPARSE_DATA \
	SurvivalGame_Source_SurvivalGame_Public_World_SGameMode_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	SurvivalGame_Source_SurvivalGame_Public_World_SGameMode_h_19_CALLBACK_WRAPPERS \
	SurvivalGame_Source_SurvivalGame_Public_World_SGameMode_h_19_INCLASS_NO_PURE_DECLS \
	SurvivalGame_Source_SurvivalGame_Public_World_SGameMode_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SURVIVALGAME_API UClass* StaticClass<class ASGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SurvivalGame_Source_SurvivalGame_Public_World_SGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
