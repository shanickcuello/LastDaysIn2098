// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SurvivalGame/Public/World/SGameState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSGameState() {}
// Cross Module References
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASGameState_NoRegister();
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASGameState();
	ENGINE_API UClass* Z_Construct_UClass_AGameState();
	UPackage* Z_Construct_UPackage__Script_SurvivalGame();
	SURVIVALGAME_API UEnum* Z_Construct_UEnum_SurvivalGame_EHUDMessage();
// End Cross Module References
	DEFINE_FUNCTION(ASGameState::execBroadcastGameMessage)
	{
		P_GET_ENUM(EHUDMessage,Z_Param_NewMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BroadcastGameMessage_Implementation(EHUDMessage(Z_Param_NewMessage));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASGameState::execSetTimeOfDay)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewHourOfDay);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTimeOfDay(Z_Param_NewHourOfDay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASGameState::execGetRealSecondsTillSunrise)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetRealSecondsTillSunrise();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASGameState::execGetElapsedFullDaysInMinutes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetElapsedFullDaysInMinutes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASGameState::execGetElapsedDays)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetElapsedDays();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASGameState::execGetTotalScore)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTotalScore();
		P_NATIVE_END;
	}
	static FName NAME_ASGameState_BroadcastGameMessage = FName(TEXT("BroadcastGameMessage"));
	void ASGameState::BroadcastGameMessage(EHUDMessage NewMessage)
	{
		SGameState_eventBroadcastGameMessage_Parms Parms;
		Parms.NewMessage=NewMessage;
		ProcessEvent(FindFunctionChecked(NAME_ASGameState_BroadcastGameMessage),&Parms);
	}
	void ASGameState::StaticRegisterNativesASGameState()
	{
		UClass* Class = ASGameState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BroadcastGameMessage", &ASGameState::execBroadcastGameMessage },
			{ "GetElapsedDays", &ASGameState::execGetElapsedDays },
			{ "GetElapsedFullDaysInMinutes", &ASGameState::execGetElapsedFullDaysInMinutes },
			{ "GetRealSecondsTillSunrise", &ASGameState::execGetRealSecondsTillSunrise },
			{ "GetTotalScore", &ASGameState::execGetTotalScore },
			{ "SetTimeOfDay", &ASGameState::execSetTimeOfDay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASGameState_BroadcastGameMessage_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewMessage_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewMessage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASGameState_BroadcastGameMessage_Statics::NewProp_NewMessage_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASGameState_BroadcastGameMessage_Statics::NewProp_NewMessage = { "NewMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SGameState_eventBroadcastGameMessage_Parms, NewMessage), Z_Construct_UEnum_SurvivalGame_EHUDMessage, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGameState_BroadcastGameMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGameState_BroadcastGameMessage_Statics::NewProp_NewMessage_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGameState_BroadcastGameMessage_Statics::NewProp_NewMessage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASGameState_BroadcastGameMessage_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* NetMulticast will send this event to all clients that know about this object, in the case of GameState that means every client. */" },
		{ "ModuleRelativePath", "Public/World/SGameState.h" },
		{ "ToolTip", "NetMulticast will send this event to all clients that know about this object, in the case of GameState that means every client." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGameState_BroadcastGameMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASGameState, nullptr, "BroadcastGameMessage", nullptr, nullptr, sizeof(SGameState_eventBroadcastGameMessage_Parms), Z_Construct_UFunction_ASGameState_BroadcastGameMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGameState_BroadcastGameMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASGameState_BroadcastGameMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGameState_BroadcastGameMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASGameState_BroadcastGameMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASGameState_BroadcastGameMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASGameState_GetElapsedDays_Statics
	{
		struct SGameState_eventGetElapsedDays_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASGameState_GetElapsedDays_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SGameState_eventGetElapsedDays_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGameState_GetElapsedDays_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGameState_GetElapsedDays_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASGameState_GetElapsedDays_Statics::Function_MetaDataParams[] = {
		{ "Category", "TimeOfDay" },
		{ "ModuleRelativePath", "Public/World/SGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGameState_GetElapsedDays_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASGameState, nullptr, "GetElapsedDays", nullptr, nullptr, sizeof(SGameState_eventGetElapsedDays_Parms), Z_Construct_UFunction_ASGameState_GetElapsedDays_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGameState_GetElapsedDays_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASGameState_GetElapsedDays_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGameState_GetElapsedDays_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASGameState_GetElapsedDays()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASGameState_GetElapsedDays_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASGameState_GetElapsedFullDaysInMinutes_Statics
	{
		struct SGameState_eventGetElapsedFullDaysInMinutes_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASGameState_GetElapsedFullDaysInMinutes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SGameState_eventGetElapsedFullDaysInMinutes_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGameState_GetElapsedFullDaysInMinutes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGameState_GetElapsedFullDaysInMinutes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASGameState_GetElapsedFullDaysInMinutes_Statics::Function_MetaDataParams[] = {
		{ "Category", "TimeOfDay" },
		{ "Comment", "/* Returns whole days elapsed, represented in minutes */" },
		{ "ModuleRelativePath", "Public/World/SGameState.h" },
		{ "ToolTip", "Returns whole days elapsed, represented in minutes" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGameState_GetElapsedFullDaysInMinutes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASGameState, nullptr, "GetElapsedFullDaysInMinutes", nullptr, nullptr, sizeof(SGameState_eventGetElapsedFullDaysInMinutes_Parms), Z_Construct_UFunction_ASGameState_GetElapsedFullDaysInMinutes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGameState_GetElapsedFullDaysInMinutes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASGameState_GetElapsedFullDaysInMinutes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGameState_GetElapsedFullDaysInMinutes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASGameState_GetElapsedFullDaysInMinutes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASGameState_GetElapsedFullDaysInMinutes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASGameState_GetRealSecondsTillSunrise_Statics
	{
		struct SGameState_eventGetRealSecondsTillSunrise_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASGameState_GetRealSecondsTillSunrise_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SGameState_eventGetRealSecondsTillSunrise_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGameState_GetRealSecondsTillSunrise_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGameState_GetRealSecondsTillSunrise_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASGameState_GetRealSecondsTillSunrise_Statics::Function_MetaDataParams[] = {
		{ "Category", "TimeOfDay" },
		{ "Comment", "/* Return the time in real seconds till next sunrise */" },
		{ "ModuleRelativePath", "Public/World/SGameState.h" },
		{ "ToolTip", "Return the time in real seconds till next sunrise" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGameState_GetRealSecondsTillSunrise_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASGameState, nullptr, "GetRealSecondsTillSunrise", nullptr, nullptr, sizeof(SGameState_eventGetRealSecondsTillSunrise_Parms), Z_Construct_UFunction_ASGameState_GetRealSecondsTillSunrise_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGameState_GetRealSecondsTillSunrise_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASGameState_GetRealSecondsTillSunrise_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGameState_GetRealSecondsTillSunrise_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASGameState_GetRealSecondsTillSunrise()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASGameState_GetRealSecondsTillSunrise_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASGameState_GetTotalScore_Statics
	{
		struct SGameState_eventGetTotalScore_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASGameState_GetTotalScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SGameState_eventGetTotalScore_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGameState_GetTotalScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGameState_GetTotalScore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASGameState_GetTotalScore_Statics::Function_MetaDataParams[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "Public/World/SGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGameState_GetTotalScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASGameState, nullptr, "GetTotalScore", nullptr, nullptr, sizeof(SGameState_eventGetTotalScore_Parms), Z_Construct_UFunction_ASGameState_GetTotalScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGameState_GetTotalScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASGameState_GetTotalScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGameState_GetTotalScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASGameState_GetTotalScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASGameState_GetTotalScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASGameState_SetTimeOfDay_Statics
	{
		struct SGameState_eventSetTimeOfDay_Parms
		{
			float NewHourOfDay;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewHourOfDay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASGameState_SetTimeOfDay_Statics::NewProp_NewHourOfDay = { "NewHourOfDay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SGameState_eventSetTimeOfDay_Parms, NewHourOfDay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGameState_SetTimeOfDay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGameState_SetTimeOfDay_Statics::NewProp_NewHourOfDay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASGameState_SetTimeOfDay_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* By passing in \"exec\" we expose it as a command line (press ~ to open) */" },
		{ "ModuleRelativePath", "Public/World/SGameState.h" },
		{ "ToolTip", "By passing in \"exec\" we expose it as a command line (press ~ to open)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGameState_SetTimeOfDay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASGameState, nullptr, "SetTimeOfDay", nullptr, nullptr, sizeof(SGameState_eventSetTimeOfDay_Parms), Z_Construct_UFunction_ASGameState_SetTimeOfDay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGameState_SetTimeOfDay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASGameState_SetTimeOfDay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGameState_SetTimeOfDay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASGameState_SetTimeOfDay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASGameState_SetTimeOfDay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASGameState_NoRegister()
	{
		return ASGameState::StaticClass();
	}
	struct Z_Construct_UClass_ASGameState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalScore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsNight_MetaData[];
#endif
		static void NewProp_bIsNight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsNight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElapsedGameMinutes_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ElapsedGameMinutes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASGameState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameState,
		(UObject* (*)())Z_Construct_UPackage__Script_SurvivalGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASGameState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASGameState_BroadcastGameMessage, "BroadcastGameMessage" }, // 1573093551
		{ &Z_Construct_UFunction_ASGameState_GetElapsedDays, "GetElapsedDays" }, // 224852316
		{ &Z_Construct_UFunction_ASGameState_GetElapsedFullDaysInMinutes, "GetElapsedFullDaysInMinutes" }, // 1141841114
		{ &Z_Construct_UFunction_ASGameState_GetRealSecondsTillSunrise, "GetRealSecondsTillSunrise" }, // 993724408
		{ &Z_Construct_UFunction_ASGameState_GetTotalScore, "GetTotalScore" }, // 4075436562
		{ &Z_Construct_UFunction_ASGameState_SetTimeOfDay, "SetTimeOfDay" }, // 569544746
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASGameState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "World/SGameState.h" },
		{ "ModuleRelativePath", "Public/World/SGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASGameState_Statics::NewProp_TotalScore_MetaData[] = {
		{ "Comment", "/* Total accumulated score from all players  */" },
		{ "ModuleRelativePath", "Public/World/SGameState.h" },
		{ "ToolTip", "Total accumulated score from all players" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASGameState_Statics::NewProp_TotalScore = { "TotalScore", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASGameState, TotalScore), METADATA_PARAMS(Z_Construct_UClass_ASGameState_Statics::NewProp_TotalScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASGameState_Statics::NewProp_TotalScore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASGameState_Statics::NewProp_bIsNight_MetaData[] = {
		{ "ModuleRelativePath", "Public/World/SGameState.h" },
	};
#endif
	void Z_Construct_UClass_ASGameState_Statics::NewProp_bIsNight_SetBit(void* Obj)
	{
		((ASGameState*)Obj)->bIsNight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASGameState_Statics::NewProp_bIsNight = { "bIsNight", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASGameState), &Z_Construct_UClass_ASGameState_Statics::NewProp_bIsNight_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASGameState_Statics::NewProp_bIsNight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASGameState_Statics::NewProp_bIsNight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASGameState_Statics::NewProp_ElapsedGameMinutes_MetaData[] = {
		{ "Category", "TimeOfDay" },
		{ "Comment", "/* Current time of day in the gamemode represented in full minutes */" },
		{ "ModuleRelativePath", "Public/World/SGameState.h" },
		{ "ToolTip", "Current time of day in the gamemode represented in full minutes" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASGameState_Statics::NewProp_ElapsedGameMinutes = { "ElapsedGameMinutes", nullptr, (EPropertyFlags)0x0010000000000034, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASGameState, ElapsedGameMinutes), METADATA_PARAMS(Z_Construct_UClass_ASGameState_Statics::NewProp_ElapsedGameMinutes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASGameState_Statics::NewProp_ElapsedGameMinutes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASGameState_Statics::NewProp_TimeScale_MetaData[] = {
		{ "Category", "TimeOfDay" },
		{ "Comment", "/* Conversion of 1 second real time to X seconds gametime of the day/night cycle */" },
		{ "ModuleRelativePath", "Public/World/SGameState.h" },
		{ "ToolTip", "Conversion of 1 second real time to X seconds gametime of the day/night cycle" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASGameState_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASGameState, TimeScale), METADATA_PARAMS(Z_Construct_UClass_ASGameState_Statics::NewProp_TimeScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASGameState_Statics::NewProp_TimeScale_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASGameState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGameState_Statics::NewProp_TotalScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGameState_Statics::NewProp_bIsNight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGameState_Statics::NewProp_ElapsedGameMinutes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGameState_Statics::NewProp_TimeScale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASGameState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASGameState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASGameState_Statics::ClassParams = {
		&ASGameState::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASGameState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASGameState_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASGameState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASGameState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASGameState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASGameState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASGameState, 1930290680);
	template<> SURVIVALGAME_API UClass* StaticClass<ASGameState>()
	{
		return ASGameState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASGameState(Z_Construct_UClass_ASGameState, &ASGameState::StaticClass, TEXT("/Script/SurvivalGame"), TEXT("ASGameState"), false, nullptr, nullptr, nullptr);

	void ASGameState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_TotalScore(TEXT("TotalScore"));
		static const FName Name_bIsNight(TEXT("bIsNight"));
		static const FName Name_ElapsedGameMinutes(TEXT("ElapsedGameMinutes"));

		const bool bIsValid = true
			&& Name_TotalScore == ClassReps[(int32)ENetFields_Private::TotalScore].Property->GetFName()
			&& Name_bIsNight == ClassReps[(int32)ENetFields_Private::bIsNight].Property->GetFName()
			&& Name_ElapsedGameMinutes == ClassReps[(int32)ENetFields_Private::ElapsedGameMinutes].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASGameState"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASGameState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
