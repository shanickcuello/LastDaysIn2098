// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerState;
enum class EHUDMessage : uint8;
enum class EHUDState : uint8;
#ifdef SURVIVALGAME_SPlayerController_generated_h
#error "SPlayerController.generated.h already included, missing '#pragma once' in SPlayerController.h"
#endif
#define SURVIVALGAME_SPlayerController_generated_h

#define SurvivalGame_Source_SurvivalGame_Public_Player_SPlayerController_h_28_DELEGATE \
struct _Script_SurvivalGame_eventChatMessageReceived_Parms \
{ \
	APlayerState* Sender; \
	FString Message; \
}; \
static inline void FChatMessageReceived_DelegateWrapper(const FMulticastScriptDelegate& ChatMessageReceived, APlayerState* Sender, const FString& Message) \
{ \
	_Script_SurvivalGame_eventChatMessageReceived_Parms Parms; \
	Parms.Sender=Sender; \
	Parms.Message=Message; \
	ChatMessageReceived.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define SurvivalGame_Source_SurvivalGame_Public_Player_SPlayerController_h_36_SPARSE_DATA
#define SurvivalGame_Source_SurvivalGame_Public_Player_SPlayerController_h_36_RPC_WRAPPERS \
	virtual void ClientReceiveChatMessage_Implementation(APlayerState* Sender, const FString& Message); \
	virtual bool ServerSendChatMessage_Validate(APlayerState* , const FString& ); \
	virtual void ServerSendChatMessage_Implementation(APlayerState* Sender, const FString& Message); \
	virtual void ClientHUDMessage_Implementation(EHUDMessage MessageID); \
	virtual void ClientHUDStateChanged_Implementation(EHUDState NewState); \
	virtual bool ServerSuicide_Validate(); \
	virtual void ServerSuicide_Implementation(); \
 \
	DECLARE_FUNCTION(execClientReceiveChatMessage); \
	DECLARE_FUNCTION(execServerSendChatMessage); \
	DECLARE_FUNCTION(execSuicide); \
	DECLARE_FUNCTION(execClientHUDMessage); \
	DECLARE_FUNCTION(execClientHUDStateChanged); \
	DECLARE_FUNCTION(execServerSuicide);


#define SurvivalGame_Source_SurvivalGame_Public_Player_SPlayerController_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ClientReceiveChatMessage_Implementation(APlayerState* Sender, const FString& Message); \
	virtual bool ServerSendChatMessage_Validate(APlayerState* , const FString& ); \
	virtual void ServerSendChatMessage_Implementation(APlayerState* Sender, const FString& Message); \
 \
	DECLARE_FUNCTION(execClientReceiveChatMessage); \
	DECLARE_FUNCTION(execServerSendChatMessage); \
	DECLARE_FUNCTION(execSuicide); \
	DECLARE_FUNCTION(execClientHUDMessage); \
	DECLARE_FUNCTION(execClientHUDStateChanged); \
	DECLARE_FUNCTION(execServerSuicide);


#define SurvivalGame_Source_SurvivalGame_Public_Player_SPlayerController_h_36_EVENT_PARMS \
	struct SPlayerController_eventClientHUDMessage_Parms \
	{ \
		EHUDMessage MessageID; \
	}; \
	struct SPlayerController_eventClientHUDStateChanged_Parms \
	{ \
		EHUDState NewState; \
	}; \
	struct SPlayerController_eventClientReceiveChatMessage_Parms \
	{ \
		APlayerState* Sender; \
		FString Message; \
	}; \
	struct SPlayerController_eventServerSendChatMessage_Parms \
	{ \
		APlayerState* Sender; \
		FString Message; \
	};


#define SurvivalGame_Source_SurvivalGame_Public_Player_SPlayerController_h_36_CALLBACK_WRAPPERS
#define SurvivalGame_Source_SurvivalGame_Public_Player_SPlayerController_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASPlayerController(); \
	friend struct Z_Construct_UClass_ASPlayerController_Statics; \
public: \
	DECLARE_CLASS(ASPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SurvivalGame"), NO_API) \
	DECLARE_SERIALIZER(ASPlayerController)


#define SurvivalGame_Source_SurvivalGame_Public_Player_SPlayerController_h_36_INCLASS \
private: \
	static void StaticRegisterNativesASPlayerController(); \
	friend struct Z_Construct_UClass_ASPlayerController_Statics; \
public: \
	DECLARE_CLASS(ASPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SurvivalGame"), NO_API) \
	DECLARE_SERIALIZER(ASPlayerController)


#define SurvivalGame_Source_SurvivalGame_Public_Player_SPlayerController_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASPlayerController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASPlayerController(ASPlayerController&&); \
	NO_API ASPlayerController(const ASPlayerController&); \
public:


#define SurvivalGame_Source_SurvivalGame_Public_Player_SPlayerController_h_36_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASPlayerController(ASPlayerController&&); \
	NO_API ASPlayerController(const ASPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASPlayerController)


#define SurvivalGame_Source_SurvivalGame_Public_Player_SPlayerController_h_36_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bRespawnImmediately() { return STRUCT_OFFSET(ASPlayerController, bRespawnImmediately); }


#define SurvivalGame_Source_SurvivalGame_Public_Player_SPlayerController_h_33_PROLOG \
	SurvivalGame_Source_SurvivalGame_Public_Player_SPlayerController_h_36_EVENT_PARMS


#define SurvivalGame_Source_SurvivalGame_Public_Player_SPlayerController_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SurvivalGame_Source_SurvivalGame_Public_Player_SPlayerController_h_36_PRIVATE_PROPERTY_OFFSET \
	SurvivalGame_Source_SurvivalGame_Public_Player_SPlayerController_h_36_SPARSE_DATA \
	SurvivalGame_Source_SurvivalGame_Public_Player_SPlayerController_h_36_RPC_WRAPPERS \
	SurvivalGame_Source_SurvivalGame_Public_Player_SPlayerController_h_36_CALLBACK_WRAPPERS \
	SurvivalGame_Source_SurvivalGame_Public_Player_SPlayerController_h_36_INCLASS \
	SurvivalGame_Source_SurvivalGame_Public_Player_SPlayerController_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SurvivalGame_Source_SurvivalGame_Public_Player_SPlayerController_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SurvivalGame_Source_SurvivalGame_Public_Player_SPlayerController_h_36_PRIVATE_PROPERTY_OFFSET \
	SurvivalGame_Source_SurvivalGame_Public_Player_SPlayerController_h_36_SPARSE_DATA \
	SurvivalGame_Source_SurvivalGame_Public_Player_SPlayerController_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	SurvivalGame_Source_SurvivalGame_Public_Player_SPlayerController_h_36_CALLBACK_WRAPPERS \
	SurvivalGame_Source_SurvivalGame_Public_Player_SPlayerController_h_36_INCLASS_NO_PURE_DECLS \
	SurvivalGame_Source_SurvivalGame_Public_Player_SPlayerController_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SURVIVALGAME_API UClass* StaticClass<class ASPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SurvivalGame_Source_SurvivalGame_Public_Player_SPlayerController_h


#define FOREACH_ENUM_EHUDMESSAGE(op) \
	op(EHUDMessage::Weapon_SlotTaken) \
	op(EHUDMessage::Character_EnergyRestored) \
	op(EHUDMessage::Game_SurviveStart) \
	op(EHUDMessage::Game_SurviveEnded) \
	op(EHUDMessage::None) 

enum class EHUDMessage : uint8;
template<> SURVIVALGAME_API UEnum* StaticEnum<EHUDMessage>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
