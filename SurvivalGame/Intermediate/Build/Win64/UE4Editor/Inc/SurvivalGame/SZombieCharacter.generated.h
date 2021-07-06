// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APawn;
struct FVector;
#ifdef SURVIVALGAME_SZombieCharacter_generated_h
#error "SZombieCharacter.generated.h already included, missing '#pragma once' in SZombieCharacter.h"
#endif
#define SURVIVALGAME_SZombieCharacter_generated_h

#define SurvivalGame_Source_SurvivalGame_Public_AI_SZombieCharacter_h_14_SPARSE_DATA
#define SurvivalGame_Source_SurvivalGame_Public_AI_SZombieCharacter_h_14_RPC_WRAPPERS \
	virtual void BroadcastUpdateAudioLoop_Implementation(bool bNewSensedTarget); \
	virtual void SimulateMeleeStrike_Implementation(); \
 \
	DECLARE_FUNCTION(execBroadcastUpdateAudioLoop); \
	DECLARE_FUNCTION(execSimulateMeleeStrike); \
	DECLARE_FUNCTION(execPerformMeleeStrike); \
	DECLARE_FUNCTION(execOnHearNoise); \
	DECLARE_FUNCTION(execOnSeePlayer);


#define SurvivalGame_Source_SurvivalGame_Public_AI_SZombieCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBroadcastUpdateAudioLoop); \
	DECLARE_FUNCTION(execSimulateMeleeStrike); \
	DECLARE_FUNCTION(execPerformMeleeStrike); \
	DECLARE_FUNCTION(execOnHearNoise); \
	DECLARE_FUNCTION(execOnSeePlayer);


#define SurvivalGame_Source_SurvivalGame_Public_AI_SZombieCharacter_h_14_EVENT_PARMS \
	struct SZombieCharacter_eventBroadcastUpdateAudioLoop_Parms \
	{ \
		bool bNewSensedTarget; \
	};


#define SurvivalGame_Source_SurvivalGame_Public_AI_SZombieCharacter_h_14_CALLBACK_WRAPPERS
#define SurvivalGame_Source_SurvivalGame_Public_AI_SZombieCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASZombieCharacter(); \
	friend struct Z_Construct_UClass_ASZombieCharacter_Statics; \
public: \
	DECLARE_CLASS(ASZombieCharacter, ASBaseCharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/SurvivalGame"), NO_API) \
	DECLARE_SERIALIZER(ASZombieCharacter)


#define SurvivalGame_Source_SurvivalGame_Public_AI_SZombieCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesASZombieCharacter(); \
	friend struct Z_Construct_UClass_ASZombieCharacter_Statics; \
public: \
	DECLARE_CLASS(ASZombieCharacter, ASBaseCharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/SurvivalGame"), NO_API) \
	DECLARE_SERIALIZER(ASZombieCharacter)


#define SurvivalGame_Source_SurvivalGame_Public_AI_SZombieCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASZombieCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASZombieCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASZombieCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASZombieCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASZombieCharacter(ASZombieCharacter&&); \
	NO_API ASZombieCharacter(const ASZombieCharacter&); \
public:


#define SurvivalGame_Source_SurvivalGame_Public_AI_SZombieCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASZombieCharacter(ASZombieCharacter&&); \
	NO_API ASZombieCharacter(const ASZombieCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASZombieCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASZombieCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASZombieCharacter)


#define SurvivalGame_Source_SurvivalGame_Public_AI_SZombieCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SenseTimeOut() { return STRUCT_OFFSET(ASZombieCharacter, SenseTimeOut); } \
	FORCEINLINE static uint32 __PPO__PawnSensingComp() { return STRUCT_OFFSET(ASZombieCharacter, PawnSensingComp); } \
	FORCEINLINE static uint32 __PPO__PunchDamageType() { return STRUCT_OFFSET(ASZombieCharacter, PunchDamageType); } \
	FORCEINLINE static uint32 __PPO__MeleeDamage() { return STRUCT_OFFSET(ASZombieCharacter, MeleeDamage); } \
	FORCEINLINE static uint32 __PPO__MeleeAnimMontage() { return STRUCT_OFFSET(ASZombieCharacter, MeleeAnimMontage); } \
	FORCEINLINE static uint32 __PPO__SoundPlayerNoticed() { return STRUCT_OFFSET(ASZombieCharacter, SoundPlayerNoticed); } \
	FORCEINLINE static uint32 __PPO__SoundHunting() { return STRUCT_OFFSET(ASZombieCharacter, SoundHunting); } \
	FORCEINLINE static uint32 __PPO__SoundIdle() { return STRUCT_OFFSET(ASZombieCharacter, SoundIdle); } \
	FORCEINLINE static uint32 __PPO__SoundWandering() { return STRUCT_OFFSET(ASZombieCharacter, SoundWandering); } \
	FORCEINLINE static uint32 __PPO__SoundAttackMelee() { return STRUCT_OFFSET(ASZombieCharacter, SoundAttackMelee); } \
	FORCEINLINE static uint32 __PPO__AudioLoopComp() { return STRUCT_OFFSET(ASZombieCharacter, AudioLoopComp); }


#define SurvivalGame_Source_SurvivalGame_Public_AI_SZombieCharacter_h_11_PROLOG \
	SurvivalGame_Source_SurvivalGame_Public_AI_SZombieCharacter_h_14_EVENT_PARMS


#define SurvivalGame_Source_SurvivalGame_Public_AI_SZombieCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SurvivalGame_Source_SurvivalGame_Public_AI_SZombieCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	SurvivalGame_Source_SurvivalGame_Public_AI_SZombieCharacter_h_14_SPARSE_DATA \
	SurvivalGame_Source_SurvivalGame_Public_AI_SZombieCharacter_h_14_RPC_WRAPPERS \
	SurvivalGame_Source_SurvivalGame_Public_AI_SZombieCharacter_h_14_CALLBACK_WRAPPERS \
	SurvivalGame_Source_SurvivalGame_Public_AI_SZombieCharacter_h_14_INCLASS \
	SurvivalGame_Source_SurvivalGame_Public_AI_SZombieCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SurvivalGame_Source_SurvivalGame_Public_AI_SZombieCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SurvivalGame_Source_SurvivalGame_Public_AI_SZombieCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	SurvivalGame_Source_SurvivalGame_Public_AI_SZombieCharacter_h_14_SPARSE_DATA \
	SurvivalGame_Source_SurvivalGame_Public_AI_SZombieCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	SurvivalGame_Source_SurvivalGame_Public_AI_SZombieCharacter_h_14_CALLBACK_WRAPPERS \
	SurvivalGame_Source_SurvivalGame_Public_AI_SZombieCharacter_h_14_INCLASS_NO_PURE_DECLS \
	SurvivalGame_Source_SurvivalGame_Public_AI_SZombieCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SURVIVALGAME_API UClass* StaticClass<class ASZombieCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SurvivalGame_Source_SurvivalGame_Public_AI_SZombieCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
