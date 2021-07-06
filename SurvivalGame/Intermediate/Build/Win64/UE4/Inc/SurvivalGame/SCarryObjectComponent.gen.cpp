// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SurvivalGame/Public/Components/SCarryObjectComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSCarryObjectComponent() {}
// Cross Module References
	SURVIVALGAME_API UClass* Z_Construct_UClass_USCarryObjectComponent_NoRegister();
	SURVIVALGAME_API UClass* Z_Construct_UClass_USCarryObjectComponent();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent();
	UPackage* Z_Construct_UPackage__Script_SurvivalGame();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USCarryObjectComponent::execOnRotateMulticast)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DirectionYaw);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DirectionRoll);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRotateMulticast_Implementation(Z_Param_DirectionYaw,Z_Param_DirectionRoll);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USCarryObjectComponent::execServerRotate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DirectionYaw);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DirectionRoll);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerRotate_Validate(Z_Param_DirectionYaw,Z_Param_DirectionRoll))
		{
			RPC_ValidateFailed(TEXT("ServerRotate_Validate"));
			return;
		}
		P_THIS->ServerRotate_Implementation(Z_Param_DirectionYaw,Z_Param_DirectionRoll);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USCarryObjectComponent::execServerThrow)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerThrow_Validate())
		{
			RPC_ValidateFailed(TEXT("ServerThrow_Validate"));
			return;
		}
		P_THIS->ServerThrow_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USCarryObjectComponent::execOnDropMulticast)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDropMulticast_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USCarryObjectComponent::execServerDrop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerDrop_Validate())
		{
			RPC_ValidateFailed(TEXT("ServerDrop_Validate"));
			return;
		}
		P_THIS->ServerDrop_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USCarryObjectComponent::execOnPickupMulticast)
	{
		P_GET_OBJECT(AActor,Z_Param_FocusActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPickupMulticast_Implementation(Z_Param_FocusActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USCarryObjectComponent::execServerPickup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerPickup_Validate())
		{
			RPC_ValidateFailed(TEXT("ServerPickup_Validate"));
			return;
		}
		P_THIS->ServerPickup_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_USCarryObjectComponent_OnDropMulticast = FName(TEXT("OnDropMulticast"));
	void USCarryObjectComponent::OnDropMulticast()
	{
		ProcessEvent(FindFunctionChecked(NAME_USCarryObjectComponent_OnDropMulticast),NULL);
	}
	static FName NAME_USCarryObjectComponent_OnPickupMulticast = FName(TEXT("OnPickupMulticast"));
	void USCarryObjectComponent::OnPickupMulticast(AActor* FocusActor)
	{
		SCarryObjectComponent_eventOnPickupMulticast_Parms Parms;
		Parms.FocusActor=FocusActor;
		ProcessEvent(FindFunctionChecked(NAME_USCarryObjectComponent_OnPickupMulticast),&Parms);
	}
	static FName NAME_USCarryObjectComponent_OnRotateMulticast = FName(TEXT("OnRotateMulticast"));
	void USCarryObjectComponent::OnRotateMulticast(float DirectionYaw, float DirectionRoll)
	{
		SCarryObjectComponent_eventOnRotateMulticast_Parms Parms;
		Parms.DirectionYaw=DirectionYaw;
		Parms.DirectionRoll=DirectionRoll;
		ProcessEvent(FindFunctionChecked(NAME_USCarryObjectComponent_OnRotateMulticast),&Parms);
	}
	static FName NAME_USCarryObjectComponent_ServerDrop = FName(TEXT("ServerDrop"));
	void USCarryObjectComponent::ServerDrop()
	{
		ProcessEvent(FindFunctionChecked(NAME_USCarryObjectComponent_ServerDrop),NULL);
	}
	static FName NAME_USCarryObjectComponent_ServerPickup = FName(TEXT("ServerPickup"));
	void USCarryObjectComponent::ServerPickup()
	{
		ProcessEvent(FindFunctionChecked(NAME_USCarryObjectComponent_ServerPickup),NULL);
	}
	static FName NAME_USCarryObjectComponent_ServerRotate = FName(TEXT("ServerRotate"));
	void USCarryObjectComponent::ServerRotate(float DirectionYaw, float DirectionRoll)
	{
		SCarryObjectComponent_eventServerRotate_Parms Parms;
		Parms.DirectionYaw=DirectionYaw;
		Parms.DirectionRoll=DirectionRoll;
		ProcessEvent(FindFunctionChecked(NAME_USCarryObjectComponent_ServerRotate),&Parms);
	}
	static FName NAME_USCarryObjectComponent_ServerThrow = FName(TEXT("ServerThrow"));
	void USCarryObjectComponent::ServerThrow()
	{
		ProcessEvent(FindFunctionChecked(NAME_USCarryObjectComponent_ServerThrow),NULL);
	}
	void USCarryObjectComponent::StaticRegisterNativesUSCarryObjectComponent()
	{
		UClass* Class = USCarryObjectComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnDropMulticast", &USCarryObjectComponent::execOnDropMulticast },
			{ "OnPickupMulticast", &USCarryObjectComponent::execOnPickupMulticast },
			{ "OnRotateMulticast", &USCarryObjectComponent::execOnRotateMulticast },
			{ "ServerDrop", &USCarryObjectComponent::execServerDrop },
			{ "ServerPickup", &USCarryObjectComponent::execServerPickup },
			{ "ServerRotate", &USCarryObjectComponent::execServerRotate },
			{ "ServerThrow", &USCarryObjectComponent::execServerThrow },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USCarryObjectComponent_OnDropMulticast_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USCarryObjectComponent_OnDropMulticast_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SCarryObjectComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USCarryObjectComponent_OnDropMulticast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USCarryObjectComponent, nullptr, "OnDropMulticast", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USCarryObjectComponent_OnDropMulticast_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USCarryObjectComponent_OnDropMulticast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USCarryObjectComponent_OnDropMulticast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USCarryObjectComponent_OnDropMulticast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USCarryObjectComponent_OnPickupMulticast_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FocusActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USCarryObjectComponent_OnPickupMulticast_Statics::NewProp_FocusActor = { "FocusActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SCarryObjectComponent_eventOnPickupMulticast_Parms, FocusActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USCarryObjectComponent_OnPickupMulticast_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USCarryObjectComponent_OnPickupMulticast_Statics::NewProp_FocusActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USCarryObjectComponent_OnPickupMulticast_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SCarryObjectComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USCarryObjectComponent_OnPickupMulticast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USCarryObjectComponent, nullptr, "OnPickupMulticast", nullptr, nullptr, sizeof(SCarryObjectComponent_eventOnPickupMulticast_Parms), Z_Construct_UFunction_USCarryObjectComponent_OnPickupMulticast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USCarryObjectComponent_OnPickupMulticast_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USCarryObjectComponent_OnPickupMulticast_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USCarryObjectComponent_OnPickupMulticast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USCarryObjectComponent_OnPickupMulticast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USCarryObjectComponent_OnPickupMulticast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USCarryObjectComponent_OnRotateMulticast_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DirectionYaw;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DirectionRoll;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USCarryObjectComponent_OnRotateMulticast_Statics::NewProp_DirectionYaw = { "DirectionYaw", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SCarryObjectComponent_eventOnRotateMulticast_Parms, DirectionYaw), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USCarryObjectComponent_OnRotateMulticast_Statics::NewProp_DirectionRoll = { "DirectionRoll", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SCarryObjectComponent_eventOnRotateMulticast_Parms, DirectionRoll), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USCarryObjectComponent_OnRotateMulticast_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USCarryObjectComponent_OnRotateMulticast_Statics::NewProp_DirectionYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USCarryObjectComponent_OnRotateMulticast_Statics::NewProp_DirectionRoll,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USCarryObjectComponent_OnRotateMulticast_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SCarryObjectComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USCarryObjectComponent_OnRotateMulticast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USCarryObjectComponent, nullptr, "OnRotateMulticast", nullptr, nullptr, sizeof(SCarryObjectComponent_eventOnRotateMulticast_Parms), Z_Construct_UFunction_USCarryObjectComponent_OnRotateMulticast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USCarryObjectComponent_OnRotateMulticast_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USCarryObjectComponent_OnRotateMulticast_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USCarryObjectComponent_OnRotateMulticast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USCarryObjectComponent_OnRotateMulticast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USCarryObjectComponent_OnRotateMulticast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USCarryObjectComponent_ServerDrop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USCarryObjectComponent_ServerDrop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SCarryObjectComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USCarryObjectComponent_ServerDrop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USCarryObjectComponent, nullptr, "ServerDrop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USCarryObjectComponent_ServerDrop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USCarryObjectComponent_ServerDrop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USCarryObjectComponent_ServerDrop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USCarryObjectComponent_ServerDrop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USCarryObjectComponent_ServerPickup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USCarryObjectComponent_ServerPickup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SCarryObjectComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USCarryObjectComponent_ServerPickup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USCarryObjectComponent, nullptr, "ServerPickup", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USCarryObjectComponent_ServerPickup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USCarryObjectComponent_ServerPickup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USCarryObjectComponent_ServerPickup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USCarryObjectComponent_ServerPickup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USCarryObjectComponent_ServerRotate_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DirectionYaw;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DirectionRoll;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USCarryObjectComponent_ServerRotate_Statics::NewProp_DirectionYaw = { "DirectionYaw", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SCarryObjectComponent_eventServerRotate_Parms, DirectionYaw), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USCarryObjectComponent_ServerRotate_Statics::NewProp_DirectionRoll = { "DirectionRoll", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SCarryObjectComponent_eventServerRotate_Parms, DirectionRoll), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USCarryObjectComponent_ServerRotate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USCarryObjectComponent_ServerRotate_Statics::NewProp_DirectionYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USCarryObjectComponent_ServerRotate_Statics::NewProp_DirectionRoll,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USCarryObjectComponent_ServerRotate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SCarryObjectComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USCarryObjectComponent_ServerRotate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USCarryObjectComponent, nullptr, "ServerRotate", nullptr, nullptr, sizeof(SCarryObjectComponent_eventServerRotate_Parms), Z_Construct_UFunction_USCarryObjectComponent_ServerRotate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USCarryObjectComponent_ServerRotate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USCarryObjectComponent_ServerRotate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USCarryObjectComponent_ServerRotate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USCarryObjectComponent_ServerRotate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USCarryObjectComponent_ServerRotate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USCarryObjectComponent_ServerThrow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USCarryObjectComponent_ServerThrow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SCarryObjectComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USCarryObjectComponent_ServerThrow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USCarryObjectComponent, nullptr, "ServerThrow", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USCarryObjectComponent_ServerThrow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USCarryObjectComponent_ServerThrow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USCarryObjectComponent_ServerThrow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USCarryObjectComponent_ServerThrow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USCarryObjectComponent_NoRegister()
	{
		return USCarryObjectComponent::StaticClass();
	}
	struct Z_Construct_UClass_USCarryObjectComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotateSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotateSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPickupDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxPickupDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USCarryObjectComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USpringArmComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SurvivalGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USCarryObjectComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USCarryObjectComponent_OnDropMulticast, "OnDropMulticast" }, // 3327047481
		{ &Z_Construct_UFunction_USCarryObjectComponent_OnPickupMulticast, "OnPickupMulticast" }, // 2635880401
		{ &Z_Construct_UFunction_USCarryObjectComponent_OnRotateMulticast, "OnRotateMulticast" }, // 604604347
		{ &Z_Construct_UFunction_USCarryObjectComponent_ServerDrop, "ServerDrop" }, // 1306952918
		{ &Z_Construct_UFunction_USCarryObjectComponent_ServerPickup, "ServerPickup" }, // 107754730
		{ &Z_Construct_UFunction_USCarryObjectComponent_ServerRotate, "ServerRotate" }, // 3163921072
		{ &Z_Construct_UFunction_USCarryObjectComponent_ServerThrow, "ServerThrow" }, // 488642807
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USCarryObjectComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Survival" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "Components/SCarryObjectComponent.h" },
		{ "ModuleRelativePath", "Public/Components/SCarryObjectComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USCarryObjectComponent_Statics::NewProp_RotateSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/* Rotation speed */" },
		{ "ModuleRelativePath", "Public/Components/SCarryObjectComponent.h" },
		{ "ToolTip", "Rotation speed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USCarryObjectComponent_Statics::NewProp_RotateSpeed = { "RotateSpeed", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USCarryObjectComponent, RotateSpeed), METADATA_PARAMS(Z_Construct_UClass_USCarryObjectComponent_Statics::NewProp_RotateSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USCarryObjectComponent_Statics::NewProp_RotateSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USCarryObjectComponent_Statics::NewProp_MaxPickupDistance_MetaData[] = {
		{ "Category", "Pickup" },
		{ "ModuleRelativePath", "Public/Components/SCarryObjectComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USCarryObjectComponent_Statics::NewProp_MaxPickupDistance = { "MaxPickupDistance", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USCarryObjectComponent, MaxPickupDistance), METADATA_PARAMS(Z_Construct_UClass_USCarryObjectComponent_Statics::NewProp_MaxPickupDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USCarryObjectComponent_Statics::NewProp_MaxPickupDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USCarryObjectComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USCarryObjectComponent_Statics::NewProp_RotateSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USCarryObjectComponent_Statics::NewProp_MaxPickupDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USCarryObjectComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USCarryObjectComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USCarryObjectComponent_Statics::ClassParams = {
		&USCarryObjectComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USCarryObjectComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USCarryObjectComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USCarryObjectComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USCarryObjectComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USCarryObjectComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USCarryObjectComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USCarryObjectComponent, 1262425539);
	template<> SURVIVALGAME_API UClass* StaticClass<USCarryObjectComponent>()
	{
		return USCarryObjectComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USCarryObjectComponent(Z_Construct_UClass_USCarryObjectComponent, &USCarryObjectComponent::StaticClass, TEXT("/Script/SurvivalGame"), TEXT("USCarryObjectComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USCarryObjectComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
