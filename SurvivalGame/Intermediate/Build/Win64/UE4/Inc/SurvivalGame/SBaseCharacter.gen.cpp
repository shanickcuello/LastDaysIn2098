// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SurvivalGame/Public/Player/SBaseCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBaseCharacter() {}
// Cross Module References
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASBaseCharacter_NoRegister();
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASBaseCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_SurvivalGame();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	SURVIVALGAME_API UScriptStruct* Z_Construct_UScriptStruct_FTakeHitInfo();
// End Cross Module References
	DEFINE_FUNCTION(ASBaseCharacter::execOnRep_LastTakeHitInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_LastTakeHitInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBaseCharacter::execGetAimOffsets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->GetAimOffsets();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBaseCharacter::execIsTargeting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsTargeting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBaseCharacter::execServerSetTargeting)
	{
		P_GET_UBOOL(Z_Param_NewTargeting);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerSetTargeting_Validate(Z_Param_NewTargeting))
		{
			RPC_ValidateFailed(TEXT("ServerSetTargeting_Validate"));
			return;
		}
		P_THIS->ServerSetTargeting_Implementation(Z_Param_NewTargeting);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBaseCharacter::execServerSetSprinting)
	{
		P_GET_UBOOL(Z_Param_NewSprinting);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerSetSprinting_Validate(Z_Param_NewSprinting))
		{
			RPC_ValidateFailed(TEXT("ServerSetSprinting_Validate"));
			return;
		}
		P_THIS->ServerSetSprinting_Implementation(Z_Param_NewSprinting);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBaseCharacter::execIsSprinting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSprinting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBaseCharacter::execIsAlive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAlive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBaseCharacter::execGetHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHealth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBaseCharacter::execGetMaxHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxHealth();
		P_NATIVE_END;
	}
	static FName NAME_ASBaseCharacter_ServerSetSprinting = FName(TEXT("ServerSetSprinting"));
	void ASBaseCharacter::ServerSetSprinting(bool NewSprinting)
	{
		SBaseCharacter_eventServerSetSprinting_Parms Parms;
		Parms.NewSprinting=NewSprinting ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBaseCharacter_ServerSetSprinting),&Parms);
	}
	static FName NAME_ASBaseCharacter_ServerSetTargeting = FName(TEXT("ServerSetTargeting"));
	void ASBaseCharacter::ServerSetTargeting(bool NewTargeting)
	{
		SBaseCharacter_eventServerSetTargeting_Parms Parms;
		Parms.NewTargeting=NewTargeting ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBaseCharacter_ServerSetTargeting),&Parms);
	}
	void ASBaseCharacter::StaticRegisterNativesASBaseCharacter()
	{
		UClass* Class = ASBaseCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAimOffsets", &ASBaseCharacter::execGetAimOffsets },
			{ "GetHealth", &ASBaseCharacter::execGetHealth },
			{ "GetMaxHealth", &ASBaseCharacter::execGetMaxHealth },
			{ "IsAlive", &ASBaseCharacter::execIsAlive },
			{ "IsSprinting", &ASBaseCharacter::execIsSprinting },
			{ "IsTargeting", &ASBaseCharacter::execIsTargeting },
			{ "OnRep_LastTakeHitInfo", &ASBaseCharacter::execOnRep_LastTakeHitInfo },
			{ "ServerSetSprinting", &ASBaseCharacter::execServerSetSprinting },
			{ "ServerSetTargeting", &ASBaseCharacter::execServerSetTargeting },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBaseCharacter_GetAimOffsets_Statics
	{
		struct SBaseCharacter_eventGetAimOffsets_Parms
		{
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBaseCharacter_GetAimOffsets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBaseCharacter_eventGetAimOffsets_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBaseCharacter_GetAimOffsets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBaseCharacter_GetAimOffsets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBaseCharacter_GetAimOffsets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Targeting" },
		{ "Comment", "/* Retrieve Pitch/Yaw from current camera */" },
		{ "ModuleRelativePath", "Public/Player/SBaseCharacter.h" },
		{ "ToolTip", "Retrieve Pitch/Yaw from current camera" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBaseCharacter_GetAimOffsets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBaseCharacter, nullptr, "GetAimOffsets", nullptr, nullptr, sizeof(SBaseCharacter_eventGetAimOffsets_Parms), Z_Construct_UFunction_ASBaseCharacter_GetAimOffsets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBaseCharacter_GetAimOffsets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBaseCharacter_GetAimOffsets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBaseCharacter_GetAimOffsets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBaseCharacter_GetAimOffsets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBaseCharacter_GetAimOffsets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBaseCharacter_GetHealth_Statics
	{
		struct SBaseCharacter_eventGetHealth_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBaseCharacter_GetHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBaseCharacter_eventGetHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBaseCharacter_GetHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBaseCharacter_GetHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBaseCharacter_GetHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerCondition" },
		{ "ModuleRelativePath", "Public/Player/SBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBaseCharacter_GetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBaseCharacter, nullptr, "GetHealth", nullptr, nullptr, sizeof(SBaseCharacter_eventGetHealth_Parms), Z_Construct_UFunction_ASBaseCharacter_GetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBaseCharacter_GetHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBaseCharacter_GetHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBaseCharacter_GetHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBaseCharacter_GetHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBaseCharacter_GetHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBaseCharacter_GetMaxHealth_Statics
	{
		struct SBaseCharacter_eventGetMaxHealth_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBaseCharacter_GetMaxHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBaseCharacter_eventGetMaxHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBaseCharacter_GetMaxHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBaseCharacter_GetMaxHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBaseCharacter_GetMaxHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerCondition" },
		{ "Comment", "/************************************************************************/" },
		{ "ModuleRelativePath", "Public/Player/SBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBaseCharacter_GetMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBaseCharacter, nullptr, "GetMaxHealth", nullptr, nullptr, sizeof(SBaseCharacter_eventGetMaxHealth_Parms), Z_Construct_UFunction_ASBaseCharacter_GetMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBaseCharacter_GetMaxHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBaseCharacter_GetMaxHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBaseCharacter_GetMaxHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBaseCharacter_GetMaxHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBaseCharacter_GetMaxHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBaseCharacter_IsAlive_Statics
	{
		struct SBaseCharacter_eventIsAlive_Parms
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
	void Z_Construct_UFunction_ASBaseCharacter_IsAlive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBaseCharacter_eventIsAlive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBaseCharacter_IsAlive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBaseCharacter_eventIsAlive_Parms), &Z_Construct_UFunction_ASBaseCharacter_IsAlive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBaseCharacter_IsAlive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBaseCharacter_IsAlive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBaseCharacter_IsAlive_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerCondition" },
		{ "ModuleRelativePath", "Public/Player/SBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBaseCharacter_IsAlive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBaseCharacter, nullptr, "IsAlive", nullptr, nullptr, sizeof(SBaseCharacter_eventIsAlive_Parms), Z_Construct_UFunction_ASBaseCharacter_IsAlive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBaseCharacter_IsAlive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBaseCharacter_IsAlive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBaseCharacter_IsAlive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBaseCharacter_IsAlive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBaseCharacter_IsAlive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBaseCharacter_IsSprinting_Statics
	{
		struct SBaseCharacter_eventIsSprinting_Parms
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
	void Z_Construct_UFunction_ASBaseCharacter_IsSprinting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBaseCharacter_eventIsSprinting_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBaseCharacter_IsSprinting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBaseCharacter_eventIsSprinting_Parms), &Z_Construct_UFunction_ASBaseCharacter_IsSprinting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBaseCharacter_IsSprinting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBaseCharacter_IsSprinting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBaseCharacter_IsSprinting_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Player/SBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBaseCharacter_IsSprinting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBaseCharacter, nullptr, "IsSprinting", nullptr, nullptr, sizeof(SBaseCharacter_eventIsSprinting_Parms), Z_Construct_UFunction_ASBaseCharacter_IsSprinting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBaseCharacter_IsSprinting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBaseCharacter_IsSprinting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBaseCharacter_IsSprinting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBaseCharacter_IsSprinting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBaseCharacter_IsSprinting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBaseCharacter_IsTargeting_Statics
	{
		struct SBaseCharacter_eventIsTargeting_Parms
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
	void Z_Construct_UFunction_ASBaseCharacter_IsTargeting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBaseCharacter_eventIsTargeting_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBaseCharacter_IsTargeting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBaseCharacter_eventIsTargeting_Parms), &Z_Construct_UFunction_ASBaseCharacter_IsTargeting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBaseCharacter_IsTargeting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBaseCharacter_IsTargeting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBaseCharacter_IsTargeting_Statics::Function_MetaDataParams[] = {
		{ "Category", "Targeting" },
		{ "Comment", "/* Is player aiming down sights */" },
		{ "ModuleRelativePath", "Public/Player/SBaseCharacter.h" },
		{ "ToolTip", "Is player aiming down sights" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBaseCharacter_IsTargeting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBaseCharacter, nullptr, "IsTargeting", nullptr, nullptr, sizeof(SBaseCharacter_eventIsTargeting_Parms), Z_Construct_UFunction_ASBaseCharacter_IsTargeting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBaseCharacter_IsTargeting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBaseCharacter_IsTargeting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBaseCharacter_IsTargeting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBaseCharacter_IsTargeting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBaseCharacter_IsTargeting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBaseCharacter_OnRep_LastTakeHitInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBaseCharacter_OnRep_LastTakeHitInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/SBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBaseCharacter_OnRep_LastTakeHitInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBaseCharacter, nullptr, "OnRep_LastTakeHitInfo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBaseCharacter_OnRep_LastTakeHitInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBaseCharacter_OnRep_LastTakeHitInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBaseCharacter_OnRep_LastTakeHitInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBaseCharacter_OnRep_LastTakeHitInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBaseCharacter_ServerSetSprinting_Statics
	{
		static void NewProp_NewSprinting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewSprinting;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBaseCharacter_ServerSetSprinting_Statics::NewProp_NewSprinting_SetBit(void* Obj)
	{
		((SBaseCharacter_eventServerSetSprinting_Parms*)Obj)->NewSprinting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBaseCharacter_ServerSetSprinting_Statics::NewProp_NewSprinting = { "NewSprinting", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBaseCharacter_eventServerSetSprinting_Parms), &Z_Construct_UFunction_ASBaseCharacter_ServerSetSprinting_Statics::NewProp_NewSprinting_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBaseCharacter_ServerSetSprinting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBaseCharacter_ServerSetSprinting_Statics::NewProp_NewSprinting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBaseCharacter_ServerSetSprinting_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* Server side call to update actual sprint state */" },
		{ "ModuleRelativePath", "Public/Player/SBaseCharacter.h" },
		{ "ToolTip", "Server side call to update actual sprint state" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBaseCharacter_ServerSetSprinting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBaseCharacter, nullptr, "ServerSetSprinting", nullptr, nullptr, sizeof(SBaseCharacter_eventServerSetSprinting_Parms), Z_Construct_UFunction_ASBaseCharacter_ServerSetSprinting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBaseCharacter_ServerSetSprinting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBaseCharacter_ServerSetSprinting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBaseCharacter_ServerSetSprinting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBaseCharacter_ServerSetSprinting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBaseCharacter_ServerSetSprinting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBaseCharacter_ServerSetTargeting_Statics
	{
		static void NewProp_NewTargeting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewTargeting;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBaseCharacter_ServerSetTargeting_Statics::NewProp_NewTargeting_SetBit(void* Obj)
	{
		((SBaseCharacter_eventServerSetTargeting_Parms*)Obj)->NewTargeting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBaseCharacter_ServerSetTargeting_Statics::NewProp_NewTargeting = { "NewTargeting", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBaseCharacter_eventServerSetTargeting_Parms), &Z_Construct_UFunction_ASBaseCharacter_ServerSetTargeting_Statics::NewProp_NewTargeting_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBaseCharacter_ServerSetTargeting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBaseCharacter_ServerSetTargeting_Statics::NewProp_NewTargeting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBaseCharacter_ServerSetTargeting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/SBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBaseCharacter_ServerSetTargeting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBaseCharacter, nullptr, "ServerSetTargeting", nullptr, nullptr, sizeof(SBaseCharacter_eventServerSetTargeting_Parms), Z_Construct_UFunction_ASBaseCharacter_ServerSetTargeting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBaseCharacter_ServerSetTargeting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBaseCharacter_ServerSetTargeting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBaseCharacter_ServerSetTargeting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBaseCharacter_ServerSetTargeting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBaseCharacter_ServerSetTargeting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBaseCharacter_NoRegister()
	{
		return ASBaseCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ASBaseCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundTakeHit_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundTakeHit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundDeath_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundDeath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SprintingSpeedModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SprintingSpeedModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWantsToRun_MetaData[];
#endif
		static void NewProp_bWantsToRun_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWantsToRun;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsTargeting_MetaData[];
#endif
		static void NewProp_bIsTargeting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsTargeting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetingSpeedModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetingSpeedModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastTakeHitInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastTakeHitInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBaseCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_SurvivalGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBaseCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBaseCharacter_GetAimOffsets, "GetAimOffsets" }, // 2770943439
		{ &Z_Construct_UFunction_ASBaseCharacter_GetHealth, "GetHealth" }, // 3660585856
		{ &Z_Construct_UFunction_ASBaseCharacter_GetMaxHealth, "GetMaxHealth" }, // 3999762498
		{ &Z_Construct_UFunction_ASBaseCharacter_IsAlive, "IsAlive" }, // 2662788649
		{ &Z_Construct_UFunction_ASBaseCharacter_IsSprinting, "IsSprinting" }, // 1845113315
		{ &Z_Construct_UFunction_ASBaseCharacter_IsTargeting, "IsTargeting" }, // 1607701494
		{ &Z_Construct_UFunction_ASBaseCharacter_OnRep_LastTakeHitInfo, "OnRep_LastTakeHitInfo" }, // 2321420505
		{ &Z_Construct_UFunction_ASBaseCharacter_ServerSetSprinting, "ServerSetSprinting" }, // 107925735
		{ &Z_Construct_UFunction_ASBaseCharacter_ServerSetTargeting, "ServerSetTargeting" }, // 1183856593
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBaseCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/SBaseCharacter.h" },
		{ "ModuleRelativePath", "Public/Player/SBaseCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBaseCharacter_Statics::NewProp_SoundTakeHit_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/Player/SBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBaseCharacter_Statics::NewProp_SoundTakeHit = { "SoundTakeHit", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBaseCharacter, SoundTakeHit), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBaseCharacter_Statics::NewProp_SoundTakeHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBaseCharacter_Statics::NewProp_SoundTakeHit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBaseCharacter_Statics::NewProp_SoundDeath_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/Player/SBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBaseCharacter_Statics::NewProp_SoundDeath = { "SoundDeath", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBaseCharacter, SoundDeath), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBaseCharacter_Statics::NewProp_SoundDeath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBaseCharacter_Statics::NewProp_SoundDeath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBaseCharacter_Statics::NewProp_SprintingSpeedModifier_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Player/SBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBaseCharacter_Statics::NewProp_SprintingSpeedModifier = { "SprintingSpeedModifier", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBaseCharacter, SprintingSpeedModifier), METADATA_PARAMS(Z_Construct_UClass_ASBaseCharacter_Statics::NewProp_SprintingSpeedModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBaseCharacter_Statics::NewProp_SprintingSpeedModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBaseCharacter_Statics::NewProp_bWantsToRun_MetaData[] = {
		{ "Comment", "/* Character wants to run, checked during Tick to see if allowed */" },
		{ "ModuleRelativePath", "Public/Player/SBaseCharacter.h" },
		{ "ToolTip", "Character wants to run, checked during Tick to see if allowed" },
	};
#endif
	void Z_Construct_UClass_ASBaseCharacter_Statics::NewProp_bWantsToRun_SetBit(void* Obj)
	{
		((ASBaseCharacter*)Obj)->bWantsToRun = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBaseCharacter_Statics::NewProp_bWantsToRun = { "bWantsToRun", nullptr, (EPropertyFlags)0x0020080000002020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBaseCharacter), &Z_Construct_UClass_ASBaseCharacter_Statics::NewProp_bWantsToRun_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBaseCharacter_Statics::NewProp_bWantsToRun_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBaseCharacter_Statics::NewProp_bWantsToRun_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBaseCharacter_Statics::NewProp_bIsTargeting_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/SBaseCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ASBaseCharacter_Statics::NewProp_bIsTargeting_SetBit(void* Obj)
	{
		((ASBaseCharacter*)Obj)->bIsTargeting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBaseCharacter_Statics::NewProp_bIsTargeting = { "bIsTargeting", nullptr, (EPropertyFlags)0x0020080000002020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBaseCharacter), &Z_Construct_UClass_ASBaseCharacter_Statics::NewProp_bIsTargeting_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBaseCharacter_Statics::NewProp_bIsTargeting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBaseCharacter_Statics::NewProp_bIsTargeting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBaseCharacter_Statics::NewProp_TargetingSpeedModifier_MetaData[] = {
		{ "Category", "Targeting" },
		{ "ModuleRelativePath", "Public/Player/SBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBaseCharacter_Statics::NewProp_TargetingSpeedModifier = { "TargetingSpeedModifier", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBaseCharacter, TargetingSpeedModifier), METADATA_PARAMS(Z_Construct_UClass_ASBaseCharacter_Statics::NewProp_TargetingSpeedModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBaseCharacter_Statics::NewProp_TargetingSpeedModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBaseCharacter_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "PlayerCondition" },
		{ "ModuleRelativePath", "Public/Player/SBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBaseCharacter_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0020080000010021, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBaseCharacter, Health), METADATA_PARAMS(Z_Construct_UClass_ASBaseCharacter_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBaseCharacter_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBaseCharacter_Statics::NewProp_LastTakeHitInfo_MetaData[] = {
		{ "Comment", "/* Holds hit data to replicate hits and death to clients */" },
		{ "ModuleRelativePath", "Public/Player/SBaseCharacter.h" },
		{ "ToolTip", "Holds hit data to replicate hits and death to clients" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBaseCharacter_Statics::NewProp_LastTakeHitInfo = { "LastTakeHitInfo", "OnRep_LastTakeHitInfo", (EPropertyFlags)0x0020088100002020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBaseCharacter, LastTakeHitInfo), Z_Construct_UScriptStruct_FTakeHitInfo, METADATA_PARAMS(Z_Construct_UClass_ASBaseCharacter_Statics::NewProp_LastTakeHitInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBaseCharacter_Statics::NewProp_LastTakeHitInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBaseCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBaseCharacter_Statics::NewProp_SoundTakeHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBaseCharacter_Statics::NewProp_SoundDeath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBaseCharacter_Statics::NewProp_SprintingSpeedModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBaseCharacter_Statics::NewProp_bWantsToRun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBaseCharacter_Statics::NewProp_bIsTargeting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBaseCharacter_Statics::NewProp_TargetingSpeedModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBaseCharacter_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBaseCharacter_Statics::NewProp_LastTakeHitInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBaseCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBaseCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBaseCharacter_Statics::ClassParams = {
		&ASBaseCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBaseCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBaseCharacter_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ASBaseCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBaseCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBaseCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBaseCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBaseCharacter, 1622660547);
	template<> SURVIVALGAME_API UClass* StaticClass<ASBaseCharacter>()
	{
		return ASBaseCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBaseCharacter(Z_Construct_UClass_ASBaseCharacter, &ASBaseCharacter::StaticClass, TEXT("/Script/SurvivalGame"), TEXT("ASBaseCharacter"), false, nullptr, nullptr, nullptr);

	void ASBaseCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bWantsToRun(TEXT("bWantsToRun"));
		static const FName Name_bIsTargeting(TEXT("bIsTargeting"));
		static const FName Name_Health(TEXT("Health"));
		static const FName Name_LastTakeHitInfo(TEXT("LastTakeHitInfo"));

		const bool bIsValid = true
			&& Name_bWantsToRun == ClassReps[(int32)ENetFields_Private::bWantsToRun].Property->GetFName()
			&& Name_bIsTargeting == ClassReps[(int32)ENetFields_Private::bIsTargeting].Property->GetFName()
			&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName()
			&& Name_LastTakeHitInfo == ClassReps[(int32)ENetFields_Private::LastTakeHitInfo].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBaseCharacter"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBaseCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
