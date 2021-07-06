// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SurvivalGame/Public/Mutators/SMutator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMutator() {}
// Cross Module References
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASMutator_NoRegister();
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASMutator();
	ENGINE_API UClass* Z_Construct_UClass_AInfo();
	UPackage* Z_Construct_UPackage__Script_SurvivalGame();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASMutator::execCheckRelevance)
	{
		P_GET_OBJECT(AActor,Z_Param_Other);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckRelevance_Implementation(Z_Param_Other);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASMutator::execInitGame)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MapName);
		P_GET_PROPERTY(FStrProperty,Z_Param_Options);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ErrorMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitGame_Implementation(Z_Param_MapName,Z_Param_Options,Z_Param_Out_ErrorMessage);
		P_NATIVE_END;
	}
	static FName NAME_ASMutator_CheckRelevance = FName(TEXT("CheckRelevance"));
	bool ASMutator::CheckRelevance(AActor* Other)
	{
		SMutator_eventCheckRelevance_Parms Parms;
		Parms.Other=Other;
		ProcessEvent(FindFunctionChecked(NAME_ASMutator_CheckRelevance),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_ASMutator_InitGame = FName(TEXT("InitGame"));
	void ASMutator::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage)
	{
		SMutator_eventInitGame_Parms Parms;
		Parms.MapName=MapName;
		Parms.Options=Options;
		Parms.ErrorMessage=ErrorMessage;
		ProcessEvent(FindFunctionChecked(NAME_ASMutator_InitGame),&Parms);
		ErrorMessage=Parms.ErrorMessage;
	}
	void ASMutator::StaticRegisterNativesASMutator()
	{
		UClass* Class = ASMutator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckRelevance", &ASMutator::execCheckRelevance },
			{ "InitGame", &ASMutator::execInitGame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASMutator_CheckRelevance_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Other;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASMutator_CheckRelevance_Statics::NewProp_Other = { "Other", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMutator_eventCheckRelevance_Parms, Other), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASMutator_CheckRelevance_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SMutator_eventCheckRelevance_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASMutator_CheckRelevance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMutator_eventCheckRelevance_Parms), &Z_Construct_UFunction_ASMutator_CheckRelevance_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASMutator_CheckRelevance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASMutator_CheckRelevance_Statics::NewProp_Other,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASMutator_CheckRelevance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASMutator_CheckRelevance_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** From UT: entry point for mutators modifying, replacing, or destroying Actors\n\x09* return false to destroy Other\n\x09* note that certain critical Actors such as PlayerControllers can't be destroyed, but we'll still call this code path to allow mutators\n\x09* to change properties on them\n\x09* MAKE SURE TO CALL SUPER TO PROCESS ADDITIONAL MUTATORS\n\x09*/" },
		{ "ModuleRelativePath", "Public/Mutators/SMutator.h" },
		{ "ToolTip", "From UT: entry point for mutators modifying, replacing, or destroying Actors\nreturn false to destroy Other\nnote that certain critical Actors such as PlayerControllers can't be destroyed, but we'll still call this code path to allow mutators\nto change properties on them\nMAKE SURE TO CALL SUPER TO PROCESS ADDITIONAL MUTATORS" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASMutator_CheckRelevance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASMutator, nullptr, "CheckRelevance", nullptr, nullptr, sizeof(SMutator_eventCheckRelevance_Parms), Z_Construct_UFunction_ASMutator_CheckRelevance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASMutator_CheckRelevance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C04, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASMutator_CheckRelevance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASMutator_CheckRelevance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASMutator_CheckRelevance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASMutator_CheckRelevance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASMutator_InitGame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MapName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Options;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASMutator_InitGame_Statics::NewProp_MapName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASMutator_InitGame_Statics::NewProp_MapName = { "MapName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMutator_eventInitGame_Parms, MapName), METADATA_PARAMS(Z_Construct_UFunction_ASMutator_InitGame_Statics::NewProp_MapName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASMutator_InitGame_Statics::NewProp_MapName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASMutator_InitGame_Statics::NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASMutator_InitGame_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMutator_eventInitGame_Parms, Options), METADATA_PARAMS(Z_Construct_UFunction_ASMutator_InitGame_Statics::NewProp_Options_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASMutator_InitGame_Statics::NewProp_Options_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASMutator_InitGame_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMutator_eventInitGame_Parms, ErrorMessage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASMutator_InitGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASMutator_InitGame_Statics::NewProp_MapName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASMutator_InitGame_Statics::NewProp_Options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASMutator_InitGame_Statics::NewProp_ErrorMessage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASMutator_InitGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Mutators/SMutator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASMutator_InitGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASMutator, nullptr, "InitGame", nullptr, nullptr, sizeof(SMutator_eventInitGame_Parms), Z_Construct_UFunction_ASMutator_InitGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASMutator_InitGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C04, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASMutator_InitGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASMutator_InitGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASMutator_InitGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASMutator_InitGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASMutator_NoRegister()
	{
		return ASMutator::StaticClass();
	}
	struct Z_Construct_UClass_ASMutator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASMutator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_SurvivalGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASMutator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASMutator_CheckRelevance, "CheckRelevance" }, // 936908995
		{ &Z_Construct_UFunction_ASMutator_InitGame, "InitGame" }, // 4222796230
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASMutator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ChildCanTick", "" },
		{ "Comment", "/**\n * Base Mutator. Can add/modify/remove Actors in a level. Called in a chain by the GameMode class on each Actor during Begin Play of each Actor.\n */" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Mutators/SMutator.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Mutators/SMutator.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Base Mutator. Can add/modify/remove Actors in a level. Called in a chain by the GameMode class on each Actor during Begin Play of each Actor." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASMutator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASMutator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASMutator_Statics::ClassParams = {
		&ASMutator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ASMutator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASMutator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASMutator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASMutator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASMutator, 1784911146);
	template<> SURVIVALGAME_API UClass* StaticClass<ASMutator>()
	{
		return ASMutator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASMutator(Z_Construct_UClass_ASMutator, &ASMutator::StaticClass, TEXT("/Script/SurvivalGame"), TEXT("ASMutator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASMutator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
