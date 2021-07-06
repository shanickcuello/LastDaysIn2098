// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SurvivalGame/Public/Core/SGameplayStatics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSGameplayStatics() {}
// Cross Module References
	SURVIVALGAME_API UClass* Z_Construct_UClass_USGameplayStatics_NoRegister();
	SURVIVALGAME_API UClass* Z_Construct_UClass_USGameplayStatics();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_SurvivalGame();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	DEFINE_FUNCTION(USGameplayStatics::execProjectWorldToScreenBidirectional)
	{
		P_GET_OBJECT(APlayerController,Z_Param_Player);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldPosition);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_ScreenPosition);
		P_GET_UBOOL_REF(Z_Param_Out_bTargetBehindCamera);
		P_GET_UBOOL(Z_Param_bPlayerViewportRelative);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USGameplayStatics::ProjectWorldToScreenBidirectional(Z_Param_Player,Z_Param_Out_WorldPosition,Z_Param_Out_ScreenPosition,Z_Param_Out_bTargetBehindCamera,Z_Param_bPlayerViewportRelative);
		P_NATIVE_END;
	}
	void USGameplayStatics::StaticRegisterNativesUSGameplayStatics()
	{
		UClass* Class = USGameplayStatics::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ProjectWorldToScreenBidirectional", &USGameplayStatics::execProjectWorldToScreenBidirectional },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USGameplayStatics_ProjectWorldToScreenBidirectional_Statics
	{
		struct SGameplayStatics_eventProjectWorldToScreenBidirectional_Parms
		{
			APlayerController* Player;
			FVector WorldPosition;
			FVector2D ScreenPosition;
			bool bTargetBehindCamera;
			bool bPlayerViewportRelative;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldPosition;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScreenPosition;
		static void NewProp_bTargetBehindCamera_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTargetBehindCamera;
		static void NewProp_bPlayerViewportRelative_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlayerViewportRelative;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USGameplayStatics_ProjectWorldToScreenBidirectional_Statics::NewProp_Player_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USGameplayStatics_ProjectWorldToScreenBidirectional_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SGameplayStatics_eventProjectWorldToScreenBidirectional_Parms, Player), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USGameplayStatics_ProjectWorldToScreenBidirectional_Statics::NewProp_Player_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USGameplayStatics_ProjectWorldToScreenBidirectional_Statics::NewProp_Player_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USGameplayStatics_ProjectWorldToScreenBidirectional_Statics::NewProp_WorldPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USGameplayStatics_ProjectWorldToScreenBidirectional_Statics::NewProp_WorldPosition = { "WorldPosition", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SGameplayStatics_eventProjectWorldToScreenBidirectional_Parms, WorldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USGameplayStatics_ProjectWorldToScreenBidirectional_Statics::NewProp_WorldPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USGameplayStatics_ProjectWorldToScreenBidirectional_Statics::NewProp_WorldPosition_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USGameplayStatics_ProjectWorldToScreenBidirectional_Statics::NewProp_ScreenPosition = { "ScreenPosition", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SGameplayStatics_eventProjectWorldToScreenBidirectional_Parms, ScreenPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USGameplayStatics_ProjectWorldToScreenBidirectional_Statics::NewProp_bTargetBehindCamera_SetBit(void* Obj)
	{
		((SGameplayStatics_eventProjectWorldToScreenBidirectional_Parms*)Obj)->bTargetBehindCamera = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USGameplayStatics_ProjectWorldToScreenBidirectional_Statics::NewProp_bTargetBehindCamera = { "bTargetBehindCamera", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SGameplayStatics_eventProjectWorldToScreenBidirectional_Parms), &Z_Construct_UFunction_USGameplayStatics_ProjectWorldToScreenBidirectional_Statics::NewProp_bTargetBehindCamera_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USGameplayStatics_ProjectWorldToScreenBidirectional_Statics::NewProp_bPlayerViewportRelative_SetBit(void* Obj)
	{
		((SGameplayStatics_eventProjectWorldToScreenBidirectional_Parms*)Obj)->bPlayerViewportRelative = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USGameplayStatics_ProjectWorldToScreenBidirectional_Statics::NewProp_bPlayerViewportRelative = { "bPlayerViewportRelative", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SGameplayStatics_eventProjectWorldToScreenBidirectional_Parms), &Z_Construct_UFunction_USGameplayStatics_ProjectWorldToScreenBidirectional_Statics::NewProp_bPlayerViewportRelative_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USGameplayStatics_ProjectWorldToScreenBidirectional_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SGameplayStatics_eventProjectWorldToScreenBidirectional_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USGameplayStatics_ProjectWorldToScreenBidirectional_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SGameplayStatics_eventProjectWorldToScreenBidirectional_Parms), &Z_Construct_UFunction_USGameplayStatics_ProjectWorldToScreenBidirectional_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGameplayStatics_ProjectWorldToScreenBidirectional_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGameplayStatics_ProjectWorldToScreenBidirectional_Statics::NewProp_Player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGameplayStatics_ProjectWorldToScreenBidirectional_Statics::NewProp_WorldPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGameplayStatics_ProjectWorldToScreenBidirectional_Statics::NewProp_ScreenPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGameplayStatics_ProjectWorldToScreenBidirectional_Statics::NewProp_bTargetBehindCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGameplayStatics_ProjectWorldToScreenBidirectional_Statics::NewProp_bPlayerViewportRelative,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGameplayStatics_ProjectWorldToScreenBidirectional_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USGameplayStatics_ProjectWorldToScreenBidirectional_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "Comment", "/* Project 3D to UI variation (of engine function) that adds bTargetBehindCamera. Does NOT account for viewport DPI  */" },
		{ "CPP_Default_bPlayerViewportRelative", "false" },
		{ "ModuleRelativePath", "Public/Core/SGameplayStatics.h" },
		{ "ToolTip", "Project 3D to UI variation (of engine function) that adds bTargetBehindCamera. Does NOT account for viewport DPI" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USGameplayStatics_ProjectWorldToScreenBidirectional_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USGameplayStatics, nullptr, "ProjectWorldToScreenBidirectional", nullptr, nullptr, sizeof(SGameplayStatics_eventProjectWorldToScreenBidirectional_Parms), Z_Construct_UFunction_USGameplayStatics_ProjectWorldToScreenBidirectional_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGameplayStatics_ProjectWorldToScreenBidirectional_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USGameplayStatics_ProjectWorldToScreenBidirectional_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USGameplayStatics_ProjectWorldToScreenBidirectional_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USGameplayStatics_ProjectWorldToScreenBidirectional()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USGameplayStatics_ProjectWorldToScreenBidirectional_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USGameplayStatics_NoRegister()
	{
		return USGameplayStatics::StaticClass();
	}
	struct Z_Construct_UClass_USGameplayStatics_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USGameplayStatics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SurvivalGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USGameplayStatics_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USGameplayStatics_ProjectWorldToScreenBidirectional, "ProjectWorldToScreenBidirectional" }, // 1631855288
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USGameplayStatics_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Core/SGameplayStatics.h" },
		{ "ModuleRelativePath", "Public/Core/SGameplayStatics.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USGameplayStatics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USGameplayStatics>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USGameplayStatics_Statics::ClassParams = {
		&USGameplayStatics::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USGameplayStatics_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USGameplayStatics_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USGameplayStatics()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USGameplayStatics_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USGameplayStatics, 1302349443);
	template<> SURVIVALGAME_API UClass* StaticClass<USGameplayStatics>()
	{
		return USGameplayStatics::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USGameplayStatics(Z_Construct_UClass_USGameplayStatics, &USGameplayStatics::StaticClass, TEXT("/Script/SurvivalGame"), TEXT("USGameplayStatics"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USGameplayStatics);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
