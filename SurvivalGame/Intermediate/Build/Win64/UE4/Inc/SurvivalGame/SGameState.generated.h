// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EHUDMessage : uint8;
#ifdef SURVIVALGAME_SGameState_generated_h
#error "SGameState.generated.h already included, missing '#pragma once' in SGameState.h"
#endif
#define SURVIVALGAME_SGameState_generated_h

#define SurvivalGame_Source_SurvivalGame_Public_World_SGameState_h_15_SPARSE_DATA
#define SurvivalGame_Source_SurvivalGame_Public_World_SGameState_h_15_RPC_WRAPPERS \
	virtual void BroadcastGameMessage_Implementation(EHUDMessage NewMessage); \
 \
	DECLARE_FUNCTION(execBroadcastGameMessage); \
	DECLARE_FUNCTION(execSetTimeOfDay); \
	DECLARE_FUNCTION(execGetRealSecondsTillSunrise); \
	DECLARE_FUNCTION(execGetElapsedFullDaysInMinutes); \
	DECLARE_FUNCTION(execGetElapsedDays); \
	DECLARE_FUNCTION(execGetTotalScore);


#define SurvivalGame_Source_SurvivalGame_Public_World_SGameState_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBroadcastGameMessage); \
	DECLARE_FUNCTION(execSetTimeOfDay); \
	DECLARE_FUNCTION(execGetRealSecondsTillSunrise); \
	DECLARE_FUNCTION(execGetElapsedFullDaysInMinutes); \
	DECLARE_FUNCTION(execGetElapsedDays); \
	DECLARE_FUNCTION(execGetTotalScore);


#define SurvivalGame_Source_SurvivalGame_Public_World_SGameState_h_15_EVENT_PARMS \
	struct SGameState_eventBroadcastGameMessage_Parms \
	{ \
		EHUDMessage NewMessage; \
	};


#define SurvivalGame_Source_SurvivalGame_Public_World_SGameState_h_15_CALLBACK_WRAPPERS
#define SurvivalGame_Source_SurvivalGame_Public_World_SGameState_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASGameState(); \
	friend struct Z_Construct_UClass_ASGameState_Statics; \
public: \
	DECLARE_CLASS(ASGameState, AGameState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SurvivalGame"), NO_API) \
	DECLARE_SERIALIZER(ASGameState) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		TotalScore=NETFIELD_REP_START, \
		bIsNight, \
		ElapsedGameMinutes, \
		NETFIELD_REP_END=ElapsedGameMinutes	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define SurvivalGame_Source_SurvivalGame_Public_World_SGameState_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASGameState(); \
	friend struct Z_Construct_UClass_ASGameState_Statics; \
public: \
	DECLARE_CLASS(ASGameState, AGameState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SurvivalGame"), NO_API) \
	DECLARE_SERIALIZER(ASGameState) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		TotalScore=NETFIELD_REP_START, \
		bIsNight, \
		ElapsedGameMinutes, \
		NETFIELD_REP_END=ElapsedGameMinutes	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define SurvivalGame_Source_SurvivalGame_Public_World_SGameState_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASGameState(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASGameState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASGameState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASGameState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASGameState(ASGameState&&); \
	NO_API ASGameState(const ASGameState&); \
public:


#define SurvivalGame_Source_SurvivalGame_Public_World_SGameState_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASGameState(ASGameState&&); \
	NO_API ASGameState(const ASGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASGameState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASGameState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASGameState)


#define SurvivalGame_Source_SurvivalGame_Public_World_SGameState_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TotalScore() { return STRUCT_OFFSET(ASGameState, TotalScore); }


#define SurvivalGame_Source_SurvivalGame_Public_World_SGameState_h_12_PROLOG \
	SurvivalGame_Source_SurvivalGame_Public_World_SGameState_h_15_EVENT_PARMS


#define SurvivalGame_Source_SurvivalGame_Public_World_SGameState_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SurvivalGame_Source_SurvivalGame_Public_World_SGameState_h_15_PRIVATE_PROPERTY_OFFSET \
	SurvivalGame_Source_SurvivalGame_Public_World_SGameState_h_15_SPARSE_DATA \
	SurvivalGame_Source_SurvivalGame_Public_World_SGameState_h_15_RPC_WRAPPERS \
	SurvivalGame_Source_SurvivalGame_Public_World_SGameState_h_15_CALLBACK_WRAPPERS \
	SurvivalGame_Source_SurvivalGame_Public_World_SGameState_h_15_INCLASS \
	SurvivalGame_Source_SurvivalGame_Public_World_SGameState_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SurvivalGame_Source_SurvivalGame_Public_World_SGameState_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SurvivalGame_Source_SurvivalGame_Public_World_SGameState_h_15_PRIVATE_PROPERTY_OFFSET \
	SurvivalGame_Source_SurvivalGame_Public_World_SGameState_h_15_SPARSE_DATA \
	SurvivalGame_Source_SurvivalGame_Public_World_SGameState_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	SurvivalGame_Source_SurvivalGame_Public_World_SGameState_h_15_CALLBACK_WRAPPERS \
	SurvivalGame_Source_SurvivalGame_Public_World_SGameState_h_15_INCLASS_NO_PURE_DECLS \
	SurvivalGame_Source_SurvivalGame_Public_World_SGameState_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SURVIVALGAME_API UClass* StaticClass<class ASGameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SurvivalGame_Source_SurvivalGame_Public_World_SGameState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
