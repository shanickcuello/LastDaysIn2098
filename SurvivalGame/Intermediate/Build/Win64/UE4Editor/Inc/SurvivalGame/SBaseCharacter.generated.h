// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRotator;
#ifdef SURVIVALGAME_SBaseCharacter_generated_h
#error "SBaseCharacter.generated.h already included, missing '#pragma once' in SBaseCharacter.h"
#endif
#define SURVIVALGAME_SBaseCharacter_generated_h

#define SurvivalGame_Source_SurvivalGame_Public_Player_SBaseCharacter_h_15_SPARSE_DATA
#define SurvivalGame_Source_SurvivalGame_Public_Player_SBaseCharacter_h_15_RPC_WRAPPERS \
	virtual bool ServerSetTargeting_Validate(bool ); \
	virtual void ServerSetTargeting_Implementation(bool NewTargeting); \
	virtual bool ServerSetSprinting_Validate(bool ); \
	virtual void ServerSetSprinting_Implementation(bool NewSprinting); \
 \
	DECLARE_FUNCTION(execOnRep_LastTakeHitInfo); \
	DECLARE_FUNCTION(execGetAimOffsets); \
	DECLARE_FUNCTION(execIsTargeting); \
	DECLARE_FUNCTION(execServerSetTargeting); \
	DECLARE_FUNCTION(execServerSetSprinting); \
	DECLARE_FUNCTION(execIsSprinting); \
	DECLARE_FUNCTION(execIsAlive); \
	DECLARE_FUNCTION(execGetHealth); \
	DECLARE_FUNCTION(execGetMaxHealth);


#define SurvivalGame_Source_SurvivalGame_Public_Player_SBaseCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_LastTakeHitInfo); \
	DECLARE_FUNCTION(execGetAimOffsets); \
	DECLARE_FUNCTION(execIsTargeting); \
	DECLARE_FUNCTION(execServerSetTargeting); \
	DECLARE_FUNCTION(execServerSetSprinting); \
	DECLARE_FUNCTION(execIsSprinting); \
	DECLARE_FUNCTION(execIsAlive); \
	DECLARE_FUNCTION(execGetHealth); \
	DECLARE_FUNCTION(execGetMaxHealth);


#define SurvivalGame_Source_SurvivalGame_Public_Player_SBaseCharacter_h_15_EVENT_PARMS \
	struct SBaseCharacter_eventServerSetSprinting_Parms \
	{ \
		bool NewSprinting; \
	}; \
	struct SBaseCharacter_eventServerSetTargeting_Parms \
	{ \
		bool NewTargeting; \
	};


#define SurvivalGame_Source_SurvivalGame_Public_Player_SBaseCharacter_h_15_CALLBACK_WRAPPERS
#define SurvivalGame_Source_SurvivalGame_Public_Player_SBaseCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBaseCharacter(); \
	friend struct Z_Construct_UClass_ASBaseCharacter_Statics; \
public: \
	DECLARE_CLASS(ASBaseCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/SurvivalGame"), NO_API) \
	DECLARE_SERIALIZER(ASBaseCharacter) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bWantsToRun=NETFIELD_REP_START, \
		bIsTargeting, \
		Health, \
		LastTakeHitInfo, \
		NETFIELD_REP_END=LastTakeHitInfo	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define SurvivalGame_Source_SurvivalGame_Public_Player_SBaseCharacter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASBaseCharacter(); \
	friend struct Z_Construct_UClass_ASBaseCharacter_Statics; \
public: \
	DECLARE_CLASS(ASBaseCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/SurvivalGame"), NO_API) \
	DECLARE_SERIALIZER(ASBaseCharacter) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bWantsToRun=NETFIELD_REP_START, \
		bIsTargeting, \
		Health, \
		LastTakeHitInfo, \
		NETFIELD_REP_END=LastTakeHitInfo	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define SurvivalGame_Source_SurvivalGame_Public_Player_SBaseCharacter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBaseCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBaseCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBaseCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBaseCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBaseCharacter(ASBaseCharacter&&); \
	NO_API ASBaseCharacter(const ASBaseCharacter&); \
public:


#define SurvivalGame_Source_SurvivalGame_Public_Player_SBaseCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBaseCharacter(ASBaseCharacter&&); \
	NO_API ASBaseCharacter(const ASBaseCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBaseCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBaseCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBaseCharacter)


#define SurvivalGame_Source_SurvivalGame_Public_Player_SBaseCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SprintingSpeedModifier() { return STRUCT_OFFSET(ASBaseCharacter, SprintingSpeedModifier); } \
	FORCEINLINE static uint32 __PPO__bWantsToRun() { return STRUCT_OFFSET(ASBaseCharacter, bWantsToRun); } \
	FORCEINLINE static uint32 __PPO__bIsTargeting() { return STRUCT_OFFSET(ASBaseCharacter, bIsTargeting); } \
	FORCEINLINE static uint32 __PPO__TargetingSpeedModifier() { return STRUCT_OFFSET(ASBaseCharacter, TargetingSpeedModifier); } \
	FORCEINLINE static uint32 __PPO__Health() { return STRUCT_OFFSET(ASBaseCharacter, Health); } \
	FORCEINLINE static uint32 __PPO__LastTakeHitInfo() { return STRUCT_OFFSET(ASBaseCharacter, LastTakeHitInfo); }


#define SurvivalGame_Source_SurvivalGame_Public_Player_SBaseCharacter_h_12_PROLOG \
	SurvivalGame_Source_SurvivalGame_Public_Player_SBaseCharacter_h_15_EVENT_PARMS


#define SurvivalGame_Source_SurvivalGame_Public_Player_SBaseCharacter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SurvivalGame_Source_SurvivalGame_Public_Player_SBaseCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	SurvivalGame_Source_SurvivalGame_Public_Player_SBaseCharacter_h_15_SPARSE_DATA \
	SurvivalGame_Source_SurvivalGame_Public_Player_SBaseCharacter_h_15_RPC_WRAPPERS \
	SurvivalGame_Source_SurvivalGame_Public_Player_SBaseCharacter_h_15_CALLBACK_WRAPPERS \
	SurvivalGame_Source_SurvivalGame_Public_Player_SBaseCharacter_h_15_INCLASS \
	SurvivalGame_Source_SurvivalGame_Public_Player_SBaseCharacter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SurvivalGame_Source_SurvivalGame_Public_Player_SBaseCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SurvivalGame_Source_SurvivalGame_Public_Player_SBaseCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	SurvivalGame_Source_SurvivalGame_Public_Player_SBaseCharacter_h_15_SPARSE_DATA \
	SurvivalGame_Source_SurvivalGame_Public_Player_SBaseCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	SurvivalGame_Source_SurvivalGame_Public_Player_SBaseCharacter_h_15_CALLBACK_WRAPPERS \
	SurvivalGame_Source_SurvivalGame_Public_Player_SBaseCharacter_h_15_INCLASS_NO_PURE_DECLS \
	SurvivalGame_Source_SurvivalGame_Public_Player_SBaseCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SURVIVALGAME_API UClass* StaticClass<class ASBaseCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SurvivalGame_Source_SurvivalGame_Public_Player_SBaseCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
