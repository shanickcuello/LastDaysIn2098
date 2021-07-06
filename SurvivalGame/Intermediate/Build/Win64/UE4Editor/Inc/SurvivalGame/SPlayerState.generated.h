// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SURVIVALGAME_SPlayerState_generated_h
#error "SPlayerState.generated.h already included, missing '#pragma once' in SPlayerState.h"
#endif
#define SURVIVALGAME_SPlayerState_generated_h

#define SurvivalGame_Source_SurvivalGame_Public_Player_SPlayerState_h_15_SPARSE_DATA
#define SurvivalGame_Source_SurvivalGame_Public_Player_SPlayerState_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDeaths); \
	DECLARE_FUNCTION(execGetKills); \
	DECLARE_FUNCTION(execGetTeamNumber);


#define SurvivalGame_Source_SurvivalGame_Public_Player_SPlayerState_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDeaths); \
	DECLARE_FUNCTION(execGetKills); \
	DECLARE_FUNCTION(execGetTeamNumber);


#define SurvivalGame_Source_SurvivalGame_Public_Player_SPlayerState_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASPlayerState(); \
	friend struct Z_Construct_UClass_ASPlayerState_Statics; \
public: \
	DECLARE_CLASS(ASPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SurvivalGame"), NO_API) \
	DECLARE_SERIALIZER(ASPlayerState) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		NumKills=NETFIELD_REP_START, \
		NumDeaths, \
		TeamNumber, \
		NETFIELD_REP_END=TeamNumber	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define SurvivalGame_Source_SurvivalGame_Public_Player_SPlayerState_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASPlayerState(); \
	friend struct Z_Construct_UClass_ASPlayerState_Statics; \
public: \
	DECLARE_CLASS(ASPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SurvivalGame"), NO_API) \
	DECLARE_SERIALIZER(ASPlayerState) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		NumKills=NETFIELD_REP_START, \
		NumDeaths, \
		TeamNumber, \
		NETFIELD_REP_END=TeamNumber	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define SurvivalGame_Source_SurvivalGame_Public_Player_SPlayerState_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASPlayerState(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASPlayerState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASPlayerState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASPlayerState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASPlayerState(ASPlayerState&&); \
	NO_API ASPlayerState(const ASPlayerState&); \
public:


#define SurvivalGame_Source_SurvivalGame_Public_Player_SPlayerState_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASPlayerState(ASPlayerState&&); \
	NO_API ASPlayerState(const ASPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASPlayerState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASPlayerState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASPlayerState)


#define SurvivalGame_Source_SurvivalGame_Public_Player_SPlayerState_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NumKills() { return STRUCT_OFFSET(ASPlayerState, NumKills); } \
	FORCEINLINE static uint32 __PPO__NumDeaths() { return STRUCT_OFFSET(ASPlayerState, NumDeaths); } \
	FORCEINLINE static uint32 __PPO__TeamNumber() { return STRUCT_OFFSET(ASPlayerState, TeamNumber); }


#define SurvivalGame_Source_SurvivalGame_Public_Player_SPlayerState_h_12_PROLOG
#define SurvivalGame_Source_SurvivalGame_Public_Player_SPlayerState_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SurvivalGame_Source_SurvivalGame_Public_Player_SPlayerState_h_15_PRIVATE_PROPERTY_OFFSET \
	SurvivalGame_Source_SurvivalGame_Public_Player_SPlayerState_h_15_SPARSE_DATA \
	SurvivalGame_Source_SurvivalGame_Public_Player_SPlayerState_h_15_RPC_WRAPPERS \
	SurvivalGame_Source_SurvivalGame_Public_Player_SPlayerState_h_15_INCLASS \
	SurvivalGame_Source_SurvivalGame_Public_Player_SPlayerState_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SurvivalGame_Source_SurvivalGame_Public_Player_SPlayerState_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SurvivalGame_Source_SurvivalGame_Public_Player_SPlayerState_h_15_PRIVATE_PROPERTY_OFFSET \
	SurvivalGame_Source_SurvivalGame_Public_Player_SPlayerState_h_15_SPARSE_DATA \
	SurvivalGame_Source_SurvivalGame_Public_Player_SPlayerState_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	SurvivalGame_Source_SurvivalGame_Public_Player_SPlayerState_h_15_INCLASS_NO_PURE_DECLS \
	SurvivalGame_Source_SurvivalGame_Public_Player_SPlayerState_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SURVIVALGAME_API UClass* StaticClass<class ASPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SurvivalGame_Source_SurvivalGame_Public_Player_SPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
