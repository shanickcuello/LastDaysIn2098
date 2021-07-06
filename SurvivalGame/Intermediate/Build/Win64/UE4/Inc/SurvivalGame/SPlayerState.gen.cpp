// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SurvivalGame/Public/Player/SPlayerState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSPlayerState() {}
// Cross Module References
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASPlayerState_NoRegister();
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASPlayerState();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	UPackage* Z_Construct_UPackage__Script_SurvivalGame();
// End Cross Module References
	DEFINE_FUNCTION(ASPlayerState::execGetDeaths)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetDeaths();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASPlayerState::execGetKills)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetKills();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASPlayerState::execGetTeamNumber)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTeamNumber();
		P_NATIVE_END;
	}
	void ASPlayerState::StaticRegisterNativesASPlayerState()
	{
		UClass* Class = ASPlayerState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDeaths", &ASPlayerState::execGetDeaths },
			{ "GetKills", &ASPlayerState::execGetKills },
			{ "GetTeamNumber", &ASPlayerState::execGetTeamNumber },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASPlayerState_GetDeaths_Statics
	{
		struct SPlayerState_eventGetDeaths_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASPlayerState_GetDeaths_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SPlayerState_eventGetDeaths_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASPlayerState_GetDeaths_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPlayerState_GetDeaths_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPlayerState_GetDeaths_Statics::Function_MetaDataParams[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "Public/Player/SPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPlayerState_GetDeaths_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPlayerState, nullptr, "GetDeaths", nullptr, nullptr, sizeof(SPlayerState_eventGetDeaths_Parms), Z_Construct_UFunction_ASPlayerState_GetDeaths_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerState_GetDeaths_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASPlayerState_GetDeaths_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerState_GetDeaths_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASPlayerState_GetDeaths()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASPlayerState_GetDeaths_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASPlayerState_GetKills_Statics
	{
		struct SPlayerState_eventGetKills_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASPlayerState_GetKills_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SPlayerState_eventGetKills_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASPlayerState_GetKills_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPlayerState_GetKills_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPlayerState_GetKills_Statics::Function_MetaDataParams[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "Public/Player/SPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPlayerState_GetKills_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPlayerState, nullptr, "GetKills", nullptr, nullptr, sizeof(SPlayerState_eventGetKills_Parms), Z_Construct_UFunction_ASPlayerState_GetKills_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerState_GetKills_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASPlayerState_GetKills_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerState_GetKills_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASPlayerState_GetKills()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASPlayerState_GetKills_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASPlayerState_GetTeamNumber_Statics
	{
		struct SPlayerState_eventGetTeamNumber_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASPlayerState_GetTeamNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SPlayerState_eventGetTeamNumber_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASPlayerState_GetTeamNumber_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPlayerState_GetTeamNumber_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPlayerState_GetTeamNumber_Statics::Function_MetaDataParams[] = {
		{ "Category", "Teams" },
		{ "ModuleRelativePath", "Public/Player/SPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPlayerState_GetTeamNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPlayerState, nullptr, "GetTeamNumber", nullptr, nullptr, sizeof(SPlayerState_eventGetTeamNumber_Parms), Z_Construct_UFunction_ASPlayerState_GetTeamNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerState_GetTeamNumber_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASPlayerState_GetTeamNumber_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerState_GetTeamNumber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASPlayerState_GetTeamNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASPlayerState_GetTeamNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASPlayerState_NoRegister()
	{
		return ASPlayerState::StaticClass();
	}
	struct Z_Construct_UClass_ASPlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumKills_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumKills;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumDeaths_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumDeaths;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeamNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TeamNumber;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASPlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_SurvivalGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASPlayerState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASPlayerState_GetDeaths, "GetDeaths" }, // 2962016313
		{ &Z_Construct_UFunction_ASPlayerState_GetKills, "GetKills" }, // 3736033840
		{ &Z_Construct_UFunction_ASPlayerState_GetTeamNumber, "GetTeamNumber" }, // 743218339
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPlayerState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Player/SPlayerState.h" },
		{ "ModuleRelativePath", "Public/Player/SPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPlayerState_Statics::NewProp_NumKills_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/SPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASPlayerState_Statics::NewProp_NumKills = { "NumKills", nullptr, (EPropertyFlags)0x0040000000002020, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASPlayerState, NumKills), METADATA_PARAMS(Z_Construct_UClass_ASPlayerState_Statics::NewProp_NumKills_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASPlayerState_Statics::NewProp_NumKills_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPlayerState_Statics::NewProp_NumDeaths_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/SPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASPlayerState_Statics::NewProp_NumDeaths = { "NumDeaths", nullptr, (EPropertyFlags)0x0040000000002020, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASPlayerState, NumDeaths), METADATA_PARAMS(Z_Construct_UClass_ASPlayerState_Statics::NewProp_NumDeaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASPlayerState_Statics::NewProp_NumDeaths_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPlayerState_Statics::NewProp_TeamNumber_MetaData[] = {
		{ "Comment", "/* Team number assigned to player */" },
		{ "ModuleRelativePath", "Public/Player/SPlayerState.h" },
		{ "ToolTip", "Team number assigned to player" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASPlayerState_Statics::NewProp_TeamNumber = { "TeamNumber", nullptr, (EPropertyFlags)0x0040000000002020, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASPlayerState, TeamNumber), METADATA_PARAMS(Z_Construct_UClass_ASPlayerState_Statics::NewProp_TeamNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASPlayerState_Statics::NewProp_TeamNumber_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASPlayerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPlayerState_Statics::NewProp_NumKills,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPlayerState_Statics::NewProp_NumDeaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPlayerState_Statics::NewProp_TeamNumber,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASPlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASPlayerState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASPlayerState_Statics::ClassParams = {
		&ASPlayerState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASPlayerState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASPlayerState_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASPlayerState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASPlayerState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASPlayerState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASPlayerState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASPlayerState, 644078924);
	template<> SURVIVALGAME_API UClass* StaticClass<ASPlayerState>()
	{
		return ASPlayerState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASPlayerState(Z_Construct_UClass_ASPlayerState, &ASPlayerState::StaticClass, TEXT("/Script/SurvivalGame"), TEXT("ASPlayerState"), false, nullptr, nullptr, nullptr);

	void ASPlayerState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_NumKills(TEXT("NumKills"));
		static const FName Name_NumDeaths(TEXT("NumDeaths"));
		static const FName Name_TeamNumber(TEXT("TeamNumber"));

		const bool bIsValid = true
			&& Name_NumKills == ClassReps[(int32)ENetFields_Private::NumKills].Property->GetFName()
			&& Name_NumDeaths == ClassReps[(int32)ENetFields_Private::NumDeaths].Property->GetFName()
			&& Name_TeamNumber == ClassReps[(int32)ENetFields_Private::TeamNumber].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASPlayerState"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASPlayerState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
