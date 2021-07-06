// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EHUDState : uint8;
#ifdef SURVIVALGAME_SHUD_generated_h
#error "SHUD.generated.h already included, missing '#pragma once' in SHUD.h"
#endif
#define SURVIVALGAME_SHUD_generated_h

#define SurvivalGame_Source_SurvivalGame_Public_UI_SHUD_h_27_SPARSE_DATA
#define SurvivalGame_Source_SurvivalGame_Public_UI_SHUD_h_27_RPC_WRAPPERS \
	virtual void OnStateChanged_Implementation(EHUDState NewState); \
 \
	DECLARE_FUNCTION(execOnStateChanged); \
	DECLARE_FUNCTION(execGetCurrentState);


#define SurvivalGame_Source_SurvivalGame_Public_UI_SHUD_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnStateChanged_Implementation(EHUDState NewState); \
 \
	DECLARE_FUNCTION(execOnStateChanged); \
	DECLARE_FUNCTION(execGetCurrentState);


#define SurvivalGame_Source_SurvivalGame_Public_UI_SHUD_h_27_EVENT_PARMS \
	struct SHUD_eventMessageReceived_Parms \
	{ \
		FText TextMessage; \
	}; \
	struct SHUD_eventOnStateChanged_Parms \
	{ \
		EHUDState NewState; \
	};


#define SurvivalGame_Source_SurvivalGame_Public_UI_SHUD_h_27_CALLBACK_WRAPPERS
#define SurvivalGame_Source_SurvivalGame_Public_UI_SHUD_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASHUD(); \
	friend struct Z_Construct_UClass_ASHUD_Statics; \
public: \
	DECLARE_CLASS(ASHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SurvivalGame"), NO_API) \
	DECLARE_SERIALIZER(ASHUD)


#define SurvivalGame_Source_SurvivalGame_Public_UI_SHUD_h_27_INCLASS \
private: \
	static void StaticRegisterNativesASHUD(); \
	friend struct Z_Construct_UClass_ASHUD_Statics; \
public: \
	DECLARE_CLASS(ASHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SurvivalGame"), NO_API) \
	DECLARE_SERIALIZER(ASHUD)


#define SurvivalGame_Source_SurvivalGame_Public_UI_SHUD_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASHUD(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASHUD(ASHUD&&); \
	NO_API ASHUD(const ASHUD&); \
public:


#define SurvivalGame_Source_SurvivalGame_Public_UI_SHUD_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASHUD(ASHUD&&); \
	NO_API ASHUD(const ASHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASHUD); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASHUD)


#define SurvivalGame_Source_SurvivalGame_Public_UI_SHUD_h_27_PRIVATE_PROPERTY_OFFSET
#define SurvivalGame_Source_SurvivalGame_Public_UI_SHUD_h_24_PROLOG \
	SurvivalGame_Source_SurvivalGame_Public_UI_SHUD_h_27_EVENT_PARMS


#define SurvivalGame_Source_SurvivalGame_Public_UI_SHUD_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SurvivalGame_Source_SurvivalGame_Public_UI_SHUD_h_27_PRIVATE_PROPERTY_OFFSET \
	SurvivalGame_Source_SurvivalGame_Public_UI_SHUD_h_27_SPARSE_DATA \
	SurvivalGame_Source_SurvivalGame_Public_UI_SHUD_h_27_RPC_WRAPPERS \
	SurvivalGame_Source_SurvivalGame_Public_UI_SHUD_h_27_CALLBACK_WRAPPERS \
	SurvivalGame_Source_SurvivalGame_Public_UI_SHUD_h_27_INCLASS \
	SurvivalGame_Source_SurvivalGame_Public_UI_SHUD_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SurvivalGame_Source_SurvivalGame_Public_UI_SHUD_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SurvivalGame_Source_SurvivalGame_Public_UI_SHUD_h_27_PRIVATE_PROPERTY_OFFSET \
	SurvivalGame_Source_SurvivalGame_Public_UI_SHUD_h_27_SPARSE_DATA \
	SurvivalGame_Source_SurvivalGame_Public_UI_SHUD_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	SurvivalGame_Source_SurvivalGame_Public_UI_SHUD_h_27_CALLBACK_WRAPPERS \
	SurvivalGame_Source_SurvivalGame_Public_UI_SHUD_h_27_INCLASS_NO_PURE_DECLS \
	SurvivalGame_Source_SurvivalGame_Public_UI_SHUD_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SURVIVALGAME_API UClass* StaticClass<class ASHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SurvivalGame_Source_SurvivalGame_Public_UI_SHUD_h


#define FOREACH_ENUM_EHUDSTATE(op) \
	op(EHUDState::Playing) \
	op(EHUDState::Spectating) \
	op(EHUDState::MatchEnd) 

enum class EHUDState : uint8;
template<> SURVIVALGAME_API UEnum* StaticEnum<EHUDState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
