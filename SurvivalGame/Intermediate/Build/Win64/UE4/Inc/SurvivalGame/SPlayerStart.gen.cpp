// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SurvivalGame/Public/World/SPlayerStart.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSPlayerStart() {}
// Cross Module References
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASPlayerStart_NoRegister();
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASPlayerStart();
	ENGINE_API UClass* Z_Construct_UClass_APlayerStart();
	UPackage* Z_Construct_UPackage__Script_SurvivalGame();
// End Cross Module References
	DEFINE_FUNCTION(ASPlayerStart::execGetIsPlayerOnly)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsPlayerOnly();
		P_NATIVE_END;
	}
	void ASPlayerStart::StaticRegisterNativesASPlayerStart()
	{
		UClass* Class = ASPlayerStart::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetIsPlayerOnly", &ASPlayerStart::execGetIsPlayerOnly },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASPlayerStart_GetIsPlayerOnly_Statics
	{
		struct SPlayerStart_eventGetIsPlayerOnly_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASPlayerStart_GetIsPlayerOnly_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SPlayerStart_eventGetIsPlayerOnly_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASPlayerStart_GetIsPlayerOnly_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SPlayerStart_eventGetIsPlayerOnly_Parms), &Z_Construct_UFunction_ASPlayerStart_GetIsPlayerOnly_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASPlayerStart_GetIsPlayerOnly_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPlayerStart_GetIsPlayerOnly_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPlayerStart_GetIsPlayerOnly_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerStart" },
		{ "ModuleRelativePath", "Public/World/SPlayerStart.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPlayerStart_GetIsPlayerOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPlayerStart, nullptr, "GetIsPlayerOnly", nullptr, nullptr, sizeof(SPlayerStart_eventGetIsPlayerOnly_Parms), Z_Construct_UFunction_ASPlayerStart_GetIsPlayerOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerStart_GetIsPlayerOnly_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASPlayerStart_GetIsPlayerOnly_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerStart_GetIsPlayerOnly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASPlayerStart_GetIsPlayerOnly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASPlayerStart_GetIsPlayerOnly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASPlayerStart_NoRegister()
	{
		return ASPlayerStart::StaticClass();
	}
	struct Z_Construct_UClass_ASPlayerStart_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPlayerOnly_MetaData[];
#endif
		static void NewProp_bPlayerOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlayerOnly;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASPlayerStart_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerStart,
		(UObject* (*)())Z_Construct_UPackage__Script_SurvivalGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASPlayerStart_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASPlayerStart_GetIsPlayerOnly, "GetIsPlayerOnly" }, // 3750042383
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPlayerStart_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Lighting LightColor Force" },
		{ "IncludePath", "World/SPlayerStart.h" },
		{ "ModuleRelativePath", "Public/World/SPlayerStart.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPlayerStart_Statics::NewProp_bPlayerOnly_MetaData[] = {
		{ "Category", "PlayerStart" },
		{ "Comment", "/* Is only useable by players - automatically a preferred spawn for players */" },
		{ "ModuleRelativePath", "Public/World/SPlayerStart.h" },
		{ "ToolTip", "Is only useable by players - automatically a preferred spawn for players" },
	};
#endif
	void Z_Construct_UClass_ASPlayerStart_Statics::NewProp_bPlayerOnly_SetBit(void* Obj)
	{
		((ASPlayerStart*)Obj)->bPlayerOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASPlayerStart_Statics::NewProp_bPlayerOnly = { "bPlayerOnly", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASPlayerStart), &Z_Construct_UClass_ASPlayerStart_Statics::NewProp_bPlayerOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASPlayerStart_Statics::NewProp_bPlayerOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASPlayerStart_Statics::NewProp_bPlayerOnly_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASPlayerStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPlayerStart_Statics::NewProp_bPlayerOnly,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASPlayerStart_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASPlayerStart>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASPlayerStart_Statics::ClassParams = {
		&ASPlayerStart::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASPlayerStart_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASPlayerStart_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASPlayerStart_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASPlayerStart_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASPlayerStart()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASPlayerStart_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASPlayerStart, 2473698077);
	template<> SURVIVALGAME_API UClass* StaticClass<ASPlayerStart>()
	{
		return ASPlayerStart::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASPlayerStart(Z_Construct_UClass_ASPlayerStart, &ASPlayerStart::StaticClass, TEXT("/Script/SurvivalGame"), TEXT("ASPlayerStart"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASPlayerStart);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
