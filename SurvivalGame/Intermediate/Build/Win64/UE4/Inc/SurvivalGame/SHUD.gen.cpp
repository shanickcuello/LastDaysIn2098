// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SurvivalGame/Public/UI/SHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSHUD() {}
// Cross Module References
	SURVIVALGAME_API UEnum* Z_Construct_UEnum_SurvivalGame_EHUDState();
	UPackage* Z_Construct_UPackage__Script_SurvivalGame();
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASHUD_NoRegister();
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
// End Cross Module References
	static UEnum* EHUDState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SurvivalGame_EHUDState, Z_Construct_UPackage__Script_SurvivalGame(), TEXT("EHUDState"));
		}
		return Singleton;
	}
	template<> SURVIVALGAME_API UEnum* StaticEnum<EHUDState>()
	{
		return EHUDState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHUDState(EHUDState_StaticEnum, TEXT("/Script/SurvivalGame"), TEXT("EHUDState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SurvivalGame_EHUDState_Hash() { return 1189832400U; }
	UEnum* Z_Construct_UEnum_SurvivalGame_EHUDState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SurvivalGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHUDState"), 0, Get_Z_Construct_UEnum_SurvivalGame_EHUDState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHUDState::Playing", (int64)EHUDState::Playing },
				{ "EHUDState::Spectating", (int64)EHUDState::Spectating },
				{ "EHUDState::MatchEnd", (int64)EHUDState::MatchEnd },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/* Expose it to Blueprint using this tag */" },
				{ "MatchEnd.Name", "EHUDState::MatchEnd" },
				{ "ModuleRelativePath", "Public/UI/SHUD.h" },
				{ "Playing.Name", "EHUDState::Playing" },
				{ "Spectating.Name", "EHUDState::Spectating" },
				{ "ToolTip", "Expose it to Blueprint using this tag" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SurvivalGame,
				nullptr,
				"EHUDState",
				"EHUDState",
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
	DEFINE_FUNCTION(ASHUD::execOnStateChanged)
	{
		P_GET_ENUM(EHUDState,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStateChanged_Implementation(EHUDState(Z_Param_NewState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASHUD::execGetCurrentState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EHUDState*)Z_Param__Result=P_THIS->GetCurrentState();
		P_NATIVE_END;
	}
	static FName NAME_ASHUD_MessageReceived = FName(TEXT("MessageReceived"));
	void ASHUD::MessageReceived(FText const& TextMessage)
	{
		SHUD_eventMessageReceived_Parms Parms;
		Parms.TextMessage=TextMessage;
		ProcessEvent(FindFunctionChecked(NAME_ASHUD_MessageReceived),&Parms);
	}
	static FName NAME_ASHUD_OnStateChanged = FName(TEXT("OnStateChanged"));
	void ASHUD::OnStateChanged(EHUDState NewState)
	{
		SHUD_eventOnStateChanged_Parms Parms;
		Parms.NewState=NewState;
		ProcessEvent(FindFunctionChecked(NAME_ASHUD_OnStateChanged),&Parms);
	}
	void ASHUD::StaticRegisterNativesASHUD()
	{
		UClass* Class = ASHUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentState", &ASHUD::execGetCurrentState },
			{ "OnStateChanged", &ASHUD::execOnStateChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASHUD_GetCurrentState_Statics
	{
		struct SHUD_eventGetCurrentState_Parms
		{
			EHUDState ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASHUD_GetCurrentState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASHUD_GetCurrentState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SHUD_eventGetCurrentState_Parms, ReturnValue), Z_Construct_UEnum_SurvivalGame_EHUDState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASHUD_GetCurrentState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASHUD_GetCurrentState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASHUD_GetCurrentState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASHUD_GetCurrentState_Statics::Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "Public/UI/SHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASHUD_GetCurrentState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASHUD, nullptr, "GetCurrentState", nullptr, nullptr, sizeof(SHUD_eventGetCurrentState_Parms), Z_Construct_UFunction_ASHUD_GetCurrentState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASHUD_GetCurrentState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASHUD_GetCurrentState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASHUD_GetCurrentState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASHUD_GetCurrentState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASHUD_GetCurrentState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASHUD_MessageReceived_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_TextMessage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASHUD_MessageReceived_Statics::NewProp_TextMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_ASHUD_MessageReceived_Statics::NewProp_TextMessage = { "TextMessage", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SHUD_eventMessageReceived_Parms, TextMessage), METADATA_PARAMS(Z_Construct_UFunction_ASHUD_MessageReceived_Statics::NewProp_TextMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASHUD_MessageReceived_Statics::NewProp_TextMessage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASHUD_MessageReceived_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASHUD_MessageReceived_Statics::NewProp_TextMessage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASHUD_MessageReceived_Statics::Function_MetaDataParams[] = {
		{ "Category", "HUDEvents" },
		{ "Comment", "/* An event hook to call HUD text events to display in the HUD. Blueprint HUD class must implement how to deal with this event. */" },
		{ "ModuleRelativePath", "Public/UI/SHUD.h" },
		{ "ToolTip", "An event hook to call HUD text events to display in the HUD. Blueprint HUD class must implement how to deal with this event." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASHUD_MessageReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASHUD, nullptr, "MessageReceived", nullptr, nullptr, sizeof(SHUD_eventMessageReceived_Parms), Z_Construct_UFunction_ASHUD_MessageReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASHUD_MessageReceived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASHUD_MessageReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASHUD_MessageReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASHUD_MessageReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASHUD_MessageReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASHUD_OnStateChanged_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASHUD_OnStateChanged_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASHUD_OnStateChanged_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SHUD_eventOnStateChanged_Parms, NewState), Z_Construct_UEnum_SurvivalGame_EHUDState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASHUD_OnStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASHUD_OnStateChanged_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASHUD_OnStateChanged_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASHUD_OnStateChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "HUDEvents" },
		{ "Comment", "/* Event hook to update HUD state (eg. to determine visibility of widgets) */" },
		{ "ModuleRelativePath", "Public/UI/SHUD.h" },
		{ "ToolTip", "Event hook to update HUD state (eg. to determine visibility of widgets)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASHUD_OnStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASHUD, nullptr, "OnStateChanged", nullptr, nullptr, sizeof(SHUD_eventOnStateChanged_Parms), Z_Construct_UFunction_ASHUD_OnStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASHUD_OnStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASHUD_OnStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASHUD_OnStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASHUD_OnStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASHUD_OnStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASHUD_NoRegister()
	{
		return ASHUD::StaticClass();
	}
	struct Z_Construct_UClass_ASHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_SurvivalGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASHUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASHUD_GetCurrentState, "GetCurrentState" }, // 1170123627
		{ &Z_Construct_UFunction_ASHUD_MessageReceived, "MessageReceived" }, // 1230551326
		{ &Z_Construct_UFunction_ASHUD_OnStateChanged, "OnStateChanged" }, // 995468776
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "UI/SHUD.h" },
		{ "ModuleRelativePath", "Public/UI/SHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASHUD_Statics::ClassParams = {
		&ASHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASHUD, 3264121882);
	template<> SURVIVALGAME_API UClass* StaticClass<ASHUD>()
	{
		return ASHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASHUD(Z_Construct_UClass_ASHUD, &ASHUD::StaticClass, TEXT("/Script/SurvivalGame"), TEXT("ASHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
