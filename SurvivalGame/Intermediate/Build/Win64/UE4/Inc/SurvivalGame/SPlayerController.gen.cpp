// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SurvivalGame/Public/Player/SPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSPlayerController() {}
// Cross Module References
	SURVIVALGAME_API UFunction* Z_Construct_UDelegateFunction_SurvivalGame_ChatMessageReceived__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SurvivalGame();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	SURVIVALGAME_API UEnum* Z_Construct_UEnum_SurvivalGame_EHUDMessage();
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASPlayerController_NoRegister();
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	SURVIVALGAME_API UEnum* Z_Construct_UEnum_SurvivalGame_EHUDState();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SurvivalGame_ChatMessageReceived__DelegateSignature_Statics
	{
		struct _Script_SurvivalGame_eventChatMessageReceived_Parms
		{
			APlayerState* Sender;
			FString Message;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sender;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SurvivalGame_ChatMessageReceived__DelegateSignature_Statics::NewProp_Sender = { "Sender", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SurvivalGame_eventChatMessageReceived_Parms, Sender), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SurvivalGame_ChatMessageReceived__DelegateSignature_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SurvivalGame_ChatMessageReceived__DelegateSignature_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SurvivalGame_eventChatMessageReceived_Parms, Message), METADATA_PARAMS(Z_Construct_UDelegateFunction_SurvivalGame_ChatMessageReceived__DelegateSignature_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SurvivalGame_ChatMessageReceived__DelegateSignature_Statics::NewProp_Message_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SurvivalGame_ChatMessageReceived__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SurvivalGame_ChatMessageReceived__DelegateSignature_Statics::NewProp_Sender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SurvivalGame_ChatMessageReceived__DelegateSignature_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SurvivalGame_ChatMessageReceived__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/SPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SurvivalGame_ChatMessageReceived__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SurvivalGame, nullptr, "ChatMessageReceived__DelegateSignature", nullptr, nullptr, sizeof(_Script_SurvivalGame_eventChatMessageReceived_Parms), Z_Construct_UDelegateFunction_SurvivalGame_ChatMessageReceived__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SurvivalGame_ChatMessageReceived__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SurvivalGame_ChatMessageReceived__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SurvivalGame_ChatMessageReceived__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SurvivalGame_ChatMessageReceived__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SurvivalGame_ChatMessageReceived__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EHUDMessage_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SurvivalGame_EHUDMessage, Z_Construct_UPackage__Script_SurvivalGame(), TEXT("EHUDMessage"));
		}
		return Singleton;
	}
	template<> SURVIVALGAME_API UEnum* StaticEnum<EHUDMessage>()
	{
		return EHUDMessage_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHUDMessage(EHUDMessage_StaticEnum, TEXT("/Script/SurvivalGame"), TEXT("EHUDMessage"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SurvivalGame_EHUDMessage_Hash() { return 2822531109U; }
	UEnum* Z_Construct_UEnum_SurvivalGame_EHUDMessage()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SurvivalGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHUDMessage"), 0, Get_Z_Construct_UEnum_SurvivalGame_EHUDMessage_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHUDMessage::Weapon_SlotTaken", (int64)EHUDMessage::Weapon_SlotTaken },
				{ "EHUDMessage::Character_EnergyRestored", (int64)EHUDMessage::Character_EnergyRestored },
				{ "EHUDMessage::Game_SurviveStart", (int64)EHUDMessage::Game_SurviveStart },
				{ "EHUDMessage::Game_SurviveEnded", (int64)EHUDMessage::Game_SurviveEnded },
				{ "EHUDMessage::None", (int64)EHUDMessage::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Character_EnergyRestored.Comment", "/* Character */" },
				{ "Character_EnergyRestored.Name", "EHUDMessage::Character_EnergyRestored" },
				{ "Character_EnergyRestored.ToolTip", "Character" },
				{ "Game_SurviveEnded.Name", "EHUDMessage::Game_SurviveEnded" },
				{ "Game_SurviveStart.Comment", "/* Gamemode */" },
				{ "Game_SurviveStart.Name", "EHUDMessage::Game_SurviveStart" },
				{ "Game_SurviveStart.ToolTip", "Gamemode" },
				{ "ModuleRelativePath", "Public/Player/SPlayerController.h" },
				{ "None.Comment", "/* No category specified */" },
				{ "None.Name", "EHUDMessage::None" },
				{ "None.ToolTip", "No category specified" },
				{ "Weapon_SlotTaken.Comment", "/* Weapons */" },
				{ "Weapon_SlotTaken.Name", "EHUDMessage::Weapon_SlotTaken" },
				{ "Weapon_SlotTaken.ToolTip", "Weapons" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SurvivalGame,
				nullptr,
				"EHUDMessage",
				"EHUDMessage",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(ASPlayerController::execClientReceiveChatMessage)
	{
		P_GET_OBJECT(APlayerState,Z_Param_Sender);
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientReceiveChatMessage_Implementation(Z_Param_Sender,Z_Param_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASPlayerController::execServerSendChatMessage)
	{
		P_GET_OBJECT(APlayerState,Z_Param_Sender);
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerSendChatMessage_Validate(Z_Param_Sender,Z_Param_Message))
		{
			RPC_ValidateFailed(TEXT("ServerSendChatMessage_Validate"));
			return;
		}
		P_THIS->ServerSendChatMessage_Implementation(Z_Param_Sender,Z_Param_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASPlayerController::execSuicide)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Suicide();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASPlayerController::execClientHUDMessage)
	{
		P_GET_ENUM(EHUDMessage,Z_Param_MessageID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientHUDMessage_Implementation(EHUDMessage(Z_Param_MessageID));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASPlayerController::execClientHUDStateChanged)
	{
		P_GET_ENUM(EHUDState,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientHUDStateChanged_Implementation(EHUDState(Z_Param_NewState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASPlayerController::execServerSuicide)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerSuicide_Validate())
		{
			RPC_ValidateFailed(TEXT("ServerSuicide_Validate"));
			return;
		}
		P_THIS->ServerSuicide_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_ASPlayerController_ClientHUDMessage = FName(TEXT("ClientHUDMessage"));
	void ASPlayerController::ClientHUDMessage(EHUDMessage MessageID)
	{
		SPlayerController_eventClientHUDMessage_Parms Parms;
		Parms.MessageID=MessageID;
		ProcessEvent(FindFunctionChecked(NAME_ASPlayerController_ClientHUDMessage),&Parms);
	}
	static FName NAME_ASPlayerController_ClientHUDStateChanged = FName(TEXT("ClientHUDStateChanged"));
	void ASPlayerController::ClientHUDStateChanged(EHUDState NewState)
	{
		SPlayerController_eventClientHUDStateChanged_Parms Parms;
		Parms.NewState=NewState;
		ProcessEvent(FindFunctionChecked(NAME_ASPlayerController_ClientHUDStateChanged),&Parms);
	}
	static FName NAME_ASPlayerController_ClientReceiveChatMessage = FName(TEXT("ClientReceiveChatMessage"));
	void ASPlayerController::ClientReceiveChatMessage(APlayerState* Sender, const FString& Message)
	{
		SPlayerController_eventClientReceiveChatMessage_Parms Parms;
		Parms.Sender=Sender;
		Parms.Message=Message;
		ProcessEvent(FindFunctionChecked(NAME_ASPlayerController_ClientReceiveChatMessage),&Parms);
	}
	static FName NAME_ASPlayerController_ServerSendChatMessage = FName(TEXT("ServerSendChatMessage"));
	void ASPlayerController::ServerSendChatMessage(APlayerState* Sender, const FString& Message)
	{
		SPlayerController_eventServerSendChatMessage_Parms Parms;
		Parms.Sender=Sender;
		Parms.Message=Message;
		ProcessEvent(FindFunctionChecked(NAME_ASPlayerController_ServerSendChatMessage),&Parms);
	}
	static FName NAME_ASPlayerController_ServerSuicide = FName(TEXT("ServerSuicide"));
	void ASPlayerController::ServerSuicide()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASPlayerController_ServerSuicide),NULL);
	}
	void ASPlayerController::StaticRegisterNativesASPlayerController()
	{
		UClass* Class = ASPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClientHUDMessage", &ASPlayerController::execClientHUDMessage },
			{ "ClientHUDStateChanged", &ASPlayerController::execClientHUDStateChanged },
			{ "ClientReceiveChatMessage", &ASPlayerController::execClientReceiveChatMessage },
			{ "ServerSendChatMessage", &ASPlayerController::execServerSendChatMessage },
			{ "ServerSuicide", &ASPlayerController::execServerSuicide },
			{ "Suicide", &ASPlayerController::execSuicide },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASPlayerController_ClientHUDMessage_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MessageID_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MessageID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASPlayerController_ClientHUDMessage_Statics::NewProp_MessageID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASPlayerController_ClientHUDMessage_Statics::NewProp_MessageID = { "MessageID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SPlayerController_eventClientHUDMessage_Parms, MessageID), Z_Construct_UEnum_SurvivalGame_EHUDMessage, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASPlayerController_ClientHUDMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPlayerController_ClientHUDMessage_Statics::NewProp_MessageID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPlayerController_ClientHUDMessage_Statics::NewProp_MessageID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPlayerController_ClientHUDMessage_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* Enum is remapped to localized text before sending it to the HUD */" },
		{ "ModuleRelativePath", "Public/Player/SPlayerController.h" },
		{ "ToolTip", "Enum is remapped to localized text before sending it to the HUD" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPlayerController_ClientHUDMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPlayerController, nullptr, "ClientHUDMessage", nullptr, nullptr, sizeof(SPlayerController_eventClientHUDMessage_Parms), Z_Construct_UFunction_ASPlayerController_ClientHUDMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerController_ClientHUDMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASPlayerController_ClientHUDMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerController_ClientHUDMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASPlayerController_ClientHUDMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASPlayerController_ClientHUDMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASPlayerController_ClientHUDStateChanged_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASPlayerController_ClientHUDStateChanged_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASPlayerController_ClientHUDStateChanged_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SPlayerController_eventClientHUDStateChanged_Parms, NewState), Z_Construct_UEnum_SurvivalGame_EHUDState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASPlayerController_ClientHUDStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPlayerController_ClientHUDStateChanged_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPlayerController_ClientHUDStateChanged_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPlayerController_ClientHUDStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/SPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPlayerController_ClientHUDStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPlayerController, nullptr, "ClientHUDStateChanged", nullptr, nullptr, sizeof(SPlayerController_eventClientHUDStateChanged_Parms), Z_Construct_UFunction_ASPlayerController_ClientHUDStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerController_ClientHUDStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASPlayerController_ClientHUDStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerController_ClientHUDStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASPlayerController_ClientHUDStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASPlayerController_ClientHUDStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASPlayerController_ClientReceiveChatMessage_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sender;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASPlayerController_ClientReceiveChatMessage_Statics::NewProp_Sender = { "Sender", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SPlayerController_eventClientReceiveChatMessage_Parms, Sender), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPlayerController_ClientReceiveChatMessage_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASPlayerController_ClientReceiveChatMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SPlayerController_eventClientReceiveChatMessage_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_ASPlayerController_ClientReceiveChatMessage_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerController_ClientReceiveChatMessage_Statics::NewProp_Message_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASPlayerController_ClientReceiveChatMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPlayerController_ClientReceiveChatMessage_Statics::NewProp_Sender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPlayerController_ClientReceiveChatMessage_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPlayerController_ClientReceiveChatMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/SPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPlayerController_ClientReceiveChatMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPlayerController, nullptr, "ClientReceiveChatMessage", nullptr, nullptr, sizeof(SPlayerController_eventClientReceiveChatMessage_Parms), Z_Construct_UFunction_ASPlayerController_ClientReceiveChatMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerController_ClientReceiveChatMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASPlayerController_ClientReceiveChatMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerController_ClientReceiveChatMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASPlayerController_ClientReceiveChatMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASPlayerController_ClientReceiveChatMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASPlayerController_ServerSendChatMessage_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sender;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASPlayerController_ServerSendChatMessage_Statics::NewProp_Sender = { "Sender", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SPlayerController_eventServerSendChatMessage_Parms, Sender), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPlayerController_ServerSendChatMessage_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASPlayerController_ServerSendChatMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SPlayerController_eventServerSendChatMessage_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_ASPlayerController_ServerSendChatMessage_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerController_ServerSendChatMessage_Statics::NewProp_Message_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASPlayerController_ServerSendChatMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPlayerController_ServerSendChatMessage_Statics::NewProp_Sender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPlayerController_ServerSendChatMessage_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPlayerController_ServerSendChatMessage_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// -- CHAT -- //\n" },
		{ "ModuleRelativePath", "Public/Player/SPlayerController.h" },
		{ "ToolTip", "-- CHAT --" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPlayerController_ServerSendChatMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPlayerController, nullptr, "ServerSendChatMessage", nullptr, nullptr, sizeof(SPlayerController_eventServerSendChatMessage_Parms), Z_Construct_UFunction_ASPlayerController_ServerSendChatMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerController_ServerSendChatMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASPlayerController_ServerSendChatMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerController_ServerSendChatMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASPlayerController_ServerSendChatMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASPlayerController_ServerSendChatMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASPlayerController_ServerSuicide_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPlayerController_ServerSuicide_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/SPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPlayerController_ServerSuicide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPlayerController, nullptr, "ServerSuicide", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASPlayerController_ServerSuicide_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerController_ServerSuicide_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASPlayerController_ServerSuicide()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASPlayerController_ServerSuicide_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASPlayerController_Suicide_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPlayerController_Suicide_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* Kill the current pawn */" },
		{ "ModuleRelativePath", "Public/Player/SPlayerController.h" },
		{ "ToolTip", "Kill the current pawn" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPlayerController_Suicide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPlayerController, nullptr, "Suicide", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020600, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASPlayerController_Suicide_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerController_Suicide_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASPlayerController_Suicide()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASPlayerController_Suicide_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASPlayerController_NoRegister()
	{
		return ASPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ASPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRespawnImmediately_MetaData[];
#endif
		static void NewProp_bRespawnImmediately_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRespawnImmediately;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnChatMessageReceived_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChatMessageReceived;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_SurvivalGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASPlayerController_ClientHUDMessage, "ClientHUDMessage" }, // 3877655265
		{ &Z_Construct_UFunction_ASPlayerController_ClientHUDStateChanged, "ClientHUDStateChanged" }, // 1973959995
		{ &Z_Construct_UFunction_ASPlayerController_ClientReceiveChatMessage, "ClientReceiveChatMessage" }, // 671063003
		{ &Z_Construct_UFunction_ASPlayerController_ServerSendChatMessage, "ServerSendChatMessage" }, // 860860497
		{ &Z_Construct_UFunction_ASPlayerController_ServerSuicide, "ServerSuicide" }, // 2708246836
		{ &Z_Construct_UFunction_ASPlayerController_Suicide, "Suicide" }, // 1728258367
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Player/SPlayerController.h" },
		{ "ModuleRelativePath", "Public/Player/SPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPlayerController_Statics::NewProp_bRespawnImmediately_MetaData[] = {
		{ "Category", "Spawning" },
		{ "Comment", "/* Flag to respawn or start spectating upon death */" },
		{ "ModuleRelativePath", "Public/Player/SPlayerController.h" },
		{ "ToolTip", "Flag to respawn or start spectating upon death" },
	};
#endif
	void Z_Construct_UClass_ASPlayerController_Statics::NewProp_bRespawnImmediately_SetBit(void* Obj)
	{
		((ASPlayerController*)Obj)->bRespawnImmediately = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASPlayerController_Statics::NewProp_bRespawnImmediately = { "bRespawnImmediately", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASPlayerController), &Z_Construct_UClass_ASPlayerController_Statics::NewProp_bRespawnImmediately_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASPlayerController_Statics::NewProp_bRespawnImmediately_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASPlayerController_Statics::NewProp_bRespawnImmediately_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPlayerController_Statics::NewProp_OnChatMessageReceived_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/SPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASPlayerController_Statics::NewProp_OnChatMessageReceived = { "OnChatMessageReceived", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASPlayerController, OnChatMessageReceived), Z_Construct_UDelegateFunction_SurvivalGame_ChatMessageReceived__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASPlayerController_Statics::NewProp_OnChatMessageReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASPlayerController_Statics::NewProp_OnChatMessageReceived_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPlayerController_Statics::NewProp_bRespawnImmediately,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPlayerController_Statics::NewProp_OnChatMessageReceived,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASPlayerController_Statics::ClassParams = {
		&ASPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASPlayerController, 3937949472);
	template<> SURVIVALGAME_API UClass* StaticClass<ASPlayerController>()
	{
		return ASPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASPlayerController(Z_Construct_UClass_ASPlayerController, &ASPlayerController::StaticClass, TEXT("/Script/SurvivalGame"), TEXT("ASPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
