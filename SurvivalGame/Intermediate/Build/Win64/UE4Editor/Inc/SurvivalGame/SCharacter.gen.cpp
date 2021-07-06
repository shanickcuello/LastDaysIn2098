// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SurvivalGame/Public/Player/SCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSCharacter() {}
// Cross Module References
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASCharacter_NoRegister();
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASCharacter();
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASBaseCharacter();
	UPackage* Z_Construct_UPackage__Script_SurvivalGame();
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASWeapon_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	SURVIVALGAME_API UClass* Z_Construct_UClass_USCarryObjectComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASCharacter::execSwapToNewWeaponMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwapToNewWeaponMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASCharacter::execOnRep_CurrentWeapon)
	{
		P_GET_OBJECT(ASWeapon,Z_Param_LastWeapon);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CurrentWeapon(Z_Param_LastWeapon);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASCharacter::execServerEquipWeapon)
	{
		P_GET_OBJECT(ASWeapon,Z_Param_Weapon);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerEquipWeapon_Validate(Z_Param_Weapon))
		{
			RPC_ValidateFailed(TEXT("ServerEquipWeapon_Validate"));
			return;
		}
		P_THIS->ServerEquipWeapon_Implementation(Z_Param_Weapon);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASCharacter::execIsFiring)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsFiring();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASCharacter::execGetCurrentWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ASWeapon**)Z_Param__Result=P_THIS->GetCurrentWeapon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASCharacter::execServerDropWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerDropWeapon_Validate())
		{
			RPC_ValidateFailed(TEXT("ServerDropWeapon_Validate"));
			return;
		}
		P_THIS->ServerDropWeapon_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASCharacter::execRestoreCondition)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_HealthRestored);
		P_GET_PROPERTY(FFloatProperty,Z_Param_HungerRestored);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RestoreCondition(Z_Param_HealthRestored,Z_Param_HungerRestored);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASCharacter::execGetMaxHunger)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxHunger();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASCharacter::execGetHunger)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHunger();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASCharacter::execServerUse)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerUse_Validate())
		{
			RPC_ValidateFailed(TEXT("ServerUse_Validate"));
			return;
		}
		P_THIS->ServerUse_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASCharacter::execServerSetIsJumping)
	{
		P_GET_UBOOL(Z_Param_NewJumping);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerSetIsJumping_Validate(Z_Param_NewJumping))
		{
			RPC_ValidateFailed(TEXT("ServerSetIsJumping_Validate"));
			return;
		}
		P_THIS->ServerSetIsJumping_Implementation(Z_Param_NewJumping);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASCharacter::execIsInitiatedJump)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInitiatedJump();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASCharacter::execMakePawnNoise)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Loudness);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MakePawnNoise(Z_Param_Loudness);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASCharacter::execGetLastMakeNoiseTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetLastMakeNoiseTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASCharacter::execGetLastNoiseLoudness)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetLastNoiseLoudness();
		P_NATIVE_END;
	}
	static FName NAME_ASCharacter_ServerDropWeapon = FName(TEXT("ServerDropWeapon"));
	void ASCharacter::ServerDropWeapon()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASCharacter_ServerDropWeapon),NULL);
	}
	static FName NAME_ASCharacter_ServerEquipWeapon = FName(TEXT("ServerEquipWeapon"));
	void ASCharacter::ServerEquipWeapon(ASWeapon* Weapon)
	{
		SCharacter_eventServerEquipWeapon_Parms Parms;
		Parms.Weapon=Weapon;
		ProcessEvent(FindFunctionChecked(NAME_ASCharacter_ServerEquipWeapon),&Parms);
	}
	static FName NAME_ASCharacter_ServerSetIsJumping = FName(TEXT("ServerSetIsJumping"));
	void ASCharacter::ServerSetIsJumping(bool NewJumping)
	{
		SCharacter_eventServerSetIsJumping_Parms Parms;
		Parms.NewJumping=NewJumping ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASCharacter_ServerSetIsJumping),&Parms);
	}
	static FName NAME_ASCharacter_ServerUse = FName(TEXT("ServerUse"));
	void ASCharacter::ServerUse()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASCharacter_ServerUse),NULL);
	}
	void ASCharacter::StaticRegisterNativesASCharacter()
	{
		UClass* Class = ASCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentWeapon", &ASCharacter::execGetCurrentWeapon },
			{ "GetHunger", &ASCharacter::execGetHunger },
			{ "GetLastMakeNoiseTime", &ASCharacter::execGetLastMakeNoiseTime },
			{ "GetLastNoiseLoudness", &ASCharacter::execGetLastNoiseLoudness },
			{ "GetMaxHunger", &ASCharacter::execGetMaxHunger },
			{ "IsFiring", &ASCharacter::execIsFiring },
			{ "IsInitiatedJump", &ASCharacter::execIsInitiatedJump },
			{ "MakePawnNoise", &ASCharacter::execMakePawnNoise },
			{ "OnRep_CurrentWeapon", &ASCharacter::execOnRep_CurrentWeapon },
			{ "RestoreCondition", &ASCharacter::execRestoreCondition },
			{ "ServerDropWeapon", &ASCharacter::execServerDropWeapon },
			{ "ServerEquipWeapon", &ASCharacter::execServerEquipWeapon },
			{ "ServerSetIsJumping", &ASCharacter::execServerSetIsJumping },
			{ "ServerUse", &ASCharacter::execServerUse },
			{ "SwapToNewWeaponMesh", &ASCharacter::execSwapToNewWeaponMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASCharacter_GetCurrentWeapon_Statics
	{
		struct SCharacter_eventGetCurrentWeapon_Parms
		{
			ASWeapon* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASCharacter_GetCurrentWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SCharacter_eventGetCurrentWeapon_Parms, ReturnValue), Z_Construct_UClass_ASWeapon_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASCharacter_GetCurrentWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASCharacter_GetCurrentWeapon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASCharacter_GetCurrentWeapon_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Player/SCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASCharacter_GetCurrentWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASCharacter, nullptr, "GetCurrentWeapon", nullptr, nullptr, sizeof(SCharacter_eventGetCurrentWeapon_Parms), Z_Construct_UFunction_ASCharacter_GetCurrentWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASCharacter_GetCurrentWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASCharacter_GetCurrentWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASCharacter_GetCurrentWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASCharacter_GetCurrentWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASCharacter_GetCurrentWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASCharacter_GetHunger_Statics
	{
		struct SCharacter_eventGetHunger_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASCharacter_GetHunger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SCharacter_eventGetHunger_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASCharacter_GetHunger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASCharacter_GetHunger_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASCharacter_GetHunger_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerCondition" },
		{ "Comment", "/************************************************************************/" },
		{ "ModuleRelativePath", "Public/Player/SCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASCharacter_GetHunger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASCharacter, nullptr, "GetHunger", nullptr, nullptr, sizeof(SCharacter_eventGetHunger_Parms), Z_Construct_UFunction_ASCharacter_GetHunger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASCharacter_GetHunger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASCharacter_GetHunger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASCharacter_GetHunger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASCharacter_GetHunger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASCharacter_GetHunger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASCharacter_GetLastMakeNoiseTime_Statics
	{
		struct SCharacter_eventGetLastMakeNoiseTime_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASCharacter_GetLastMakeNoiseTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SCharacter_eventGetLastMakeNoiseTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASCharacter_GetLastMakeNoiseTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASCharacter_GetLastMakeNoiseTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASCharacter_GetLastMakeNoiseTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/Player/SCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASCharacter_GetLastMakeNoiseTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASCharacter, nullptr, "GetLastMakeNoiseTime", nullptr, nullptr, sizeof(SCharacter_eventGetLastMakeNoiseTime_Parms), Z_Construct_UFunction_ASCharacter_GetLastMakeNoiseTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASCharacter_GetLastMakeNoiseTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASCharacter_GetLastMakeNoiseTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASCharacter_GetLastMakeNoiseTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASCharacter_GetLastMakeNoiseTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASCharacter_GetLastMakeNoiseTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASCharacter_GetLastNoiseLoudness_Statics
	{
		struct SCharacter_eventGetLastNoiseLoudness_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASCharacter_GetLastNoiseLoudness_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SCharacter_eventGetLastNoiseLoudness_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASCharacter_GetLastNoiseLoudness_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASCharacter_GetLastNoiseLoudness_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASCharacter_GetLastNoiseLoudness_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/Player/SCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASCharacter_GetLastNoiseLoudness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASCharacter, nullptr, "GetLastNoiseLoudness", nullptr, nullptr, sizeof(SCharacter_eventGetLastNoiseLoudness_Parms), Z_Construct_UFunction_ASCharacter_GetLastNoiseLoudness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASCharacter_GetLastNoiseLoudness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASCharacter_GetLastNoiseLoudness_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASCharacter_GetLastNoiseLoudness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASCharacter_GetLastNoiseLoudness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASCharacter_GetLastNoiseLoudness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASCharacter_GetMaxHunger_Statics
	{
		struct SCharacter_eventGetMaxHunger_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASCharacter_GetMaxHunger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SCharacter_eventGetMaxHunger_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASCharacter_GetMaxHunger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASCharacter_GetMaxHunger_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASCharacter_GetMaxHunger_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerCondition" },
		{ "ModuleRelativePath", "Public/Player/SCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASCharacter_GetMaxHunger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASCharacter, nullptr, "GetMaxHunger", nullptr, nullptr, sizeof(SCharacter_eventGetMaxHunger_Parms), Z_Construct_UFunction_ASCharacter_GetMaxHunger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASCharacter_GetMaxHunger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASCharacter_GetMaxHunger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASCharacter_GetMaxHunger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASCharacter_GetMaxHunger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASCharacter_GetMaxHunger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASCharacter_IsFiring_Statics
	{
		struct SCharacter_eventIsFiring_Parms
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
	void Z_Construct_UFunction_ASCharacter_IsFiring_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SCharacter_eventIsFiring_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASCharacter_IsFiring_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SCharacter_eventIsFiring_Parms), &Z_Construct_UFunction_ASCharacter_IsFiring_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASCharacter_IsFiring_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASCharacter_IsFiring_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASCharacter_IsFiring_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Player/SCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASCharacter_IsFiring_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASCharacter, nullptr, "IsFiring", nullptr, nullptr, sizeof(SCharacter_eventIsFiring_Parms), Z_Construct_UFunction_ASCharacter_IsFiring_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASCharacter_IsFiring_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASCharacter_IsFiring_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASCharacter_IsFiring_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASCharacter_IsFiring()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASCharacter_IsFiring_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASCharacter_IsInitiatedJump_Statics
	{
		struct SCharacter_eventIsInitiatedJump_Parms
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
	void Z_Construct_UFunction_ASCharacter_IsInitiatedJump_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SCharacter_eventIsInitiatedJump_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASCharacter_IsInitiatedJump_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SCharacter_eventIsInitiatedJump_Parms), &Z_Construct_UFunction_ASCharacter_IsInitiatedJump_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASCharacter_IsInitiatedJump_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASCharacter_IsInitiatedJump_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASCharacter_IsInitiatedJump_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Player/SCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASCharacter_IsInitiatedJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASCharacter, nullptr, "IsInitiatedJump", nullptr, nullptr, sizeof(SCharacter_eventIsInitiatedJump_Parms), Z_Construct_UFunction_ASCharacter_IsInitiatedJump_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASCharacter_IsInitiatedJump_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASCharacter_IsInitiatedJump_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASCharacter_IsInitiatedJump_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASCharacter_IsInitiatedJump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASCharacter_IsInitiatedJump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASCharacter_MakePawnNoise_Statics
	{
		struct SCharacter_eventMakePawnNoise_Parms
		{
			float Loudness;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Loudness;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASCharacter_MakePawnNoise_Statics::NewProp_Loudness = { "Loudness", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SCharacter_eventMakePawnNoise_Parms, Loudness), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASCharacter_MakePawnNoise_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASCharacter_MakePawnNoise_Statics::NewProp_Loudness,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASCharacter_MakePawnNoise_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "Comment", "/* MakeNoise hook to trigger AI noise emitting (Loudness between 0.0-1.0)  */" },
		{ "ModuleRelativePath", "Public/Player/SCharacter.h" },
		{ "ToolTip", "MakeNoise hook to trigger AI noise emitting (Loudness between 0.0-1.0)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASCharacter_MakePawnNoise_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASCharacter, nullptr, "MakePawnNoise", nullptr, nullptr, sizeof(SCharacter_eventMakePawnNoise_Parms), Z_Construct_UFunction_ASCharacter_MakePawnNoise_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASCharacter_MakePawnNoise_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASCharacter_MakePawnNoise_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASCharacter_MakePawnNoise_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASCharacter_MakePawnNoise()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASCharacter_MakePawnNoise_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASCharacter_OnRep_CurrentWeapon_Statics
	{
		struct SCharacter_eventOnRep_CurrentWeapon_Parms
		{
			ASWeapon* LastWeapon;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LastWeapon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASCharacter_OnRep_CurrentWeapon_Statics::NewProp_LastWeapon = { "LastWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SCharacter_eventOnRep_CurrentWeapon_Parms, LastWeapon), Z_Construct_UClass_ASWeapon_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASCharacter_OnRep_CurrentWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASCharacter_OnRep_CurrentWeapon_Statics::NewProp_LastWeapon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASCharacter_OnRep_CurrentWeapon_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* OnRep functions can use a parameter to hold the previous value of the variable. Very useful when you need to handle UnEquip etc. */" },
		{ "ModuleRelativePath", "Public/Player/SCharacter.h" },
		{ "ToolTip", "OnRep functions can use a parameter to hold the previous value of the variable. Very useful when you need to handle UnEquip etc." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASCharacter_OnRep_CurrentWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASCharacter, nullptr, "OnRep_CurrentWeapon", nullptr, nullptr, sizeof(SCharacter_eventOnRep_CurrentWeapon_Parms), Z_Construct_UFunction_ASCharacter_OnRep_CurrentWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASCharacter_OnRep_CurrentWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASCharacter_OnRep_CurrentWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASCharacter_OnRep_CurrentWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASCharacter_OnRep_CurrentWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASCharacter_OnRep_CurrentWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASCharacter_RestoreCondition_Statics
	{
		struct SCharacter_eventRestoreCondition_Parms
		{
			float HealthRestored;
			float HungerRestored;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HealthRestored;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HungerRestored;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASCharacter_RestoreCondition_Statics::NewProp_HealthRestored = { "HealthRestored", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SCharacter_eventRestoreCondition_Parms, HealthRestored), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASCharacter_RestoreCondition_Statics::NewProp_HungerRestored = { "HungerRestored", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SCharacter_eventRestoreCondition_Parms, HungerRestored), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASCharacter_RestoreCondition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASCharacter_RestoreCondition_Statics::NewProp_HealthRestored,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASCharacter_RestoreCondition_Statics::NewProp_HungerRestored,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASCharacter_RestoreCondition_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerCondition" },
		{ "ModuleRelativePath", "Public/Player/SCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASCharacter_RestoreCondition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASCharacter, nullptr, "RestoreCondition", nullptr, nullptr, sizeof(SCharacter_eventRestoreCondition_Parms), Z_Construct_UFunction_ASCharacter_RestoreCondition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASCharacter_RestoreCondition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASCharacter_RestoreCondition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASCharacter_RestoreCondition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASCharacter_RestoreCondition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASCharacter_RestoreCondition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASCharacter_ServerDropWeapon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASCharacter_ServerDropWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/SCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASCharacter_ServerDropWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASCharacter, nullptr, "ServerDropWeapon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASCharacter_ServerDropWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASCharacter_ServerDropWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASCharacter_ServerDropWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASCharacter_ServerDropWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASCharacter_ServerEquipWeapon_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Weapon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASCharacter_ServerEquipWeapon_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SCharacter_eventServerEquipWeapon_Parms, Weapon), Z_Construct_UClass_ASWeapon_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASCharacter_ServerEquipWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASCharacter_ServerEquipWeapon_Statics::NewProp_Weapon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASCharacter_ServerEquipWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/SCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASCharacter_ServerEquipWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASCharacter, nullptr, "ServerEquipWeapon", nullptr, nullptr, sizeof(SCharacter_eventServerEquipWeapon_Parms), Z_Construct_UFunction_ASCharacter_ServerEquipWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASCharacter_ServerEquipWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASCharacter_ServerEquipWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASCharacter_ServerEquipWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASCharacter_ServerEquipWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASCharacter_ServerEquipWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASCharacter_ServerSetIsJumping_Statics
	{
		static void NewProp_NewJumping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewJumping;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASCharacter_ServerSetIsJumping_Statics::NewProp_NewJumping_SetBit(void* Obj)
	{
		((SCharacter_eventServerSetIsJumping_Parms*)Obj)->NewJumping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASCharacter_ServerSetIsJumping_Statics::NewProp_NewJumping = { "NewJumping", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SCharacter_eventServerSetIsJumping_Parms), &Z_Construct_UFunction_ASCharacter_ServerSetIsJumping_Statics::NewProp_NewJumping_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASCharacter_ServerSetIsJumping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASCharacter_ServerSetIsJumping_Statics::NewProp_NewJumping,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASCharacter_ServerSetIsJumping_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/SCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASCharacter_ServerSetIsJumping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASCharacter, nullptr, "ServerSetIsJumping", nullptr, nullptr, sizeof(SCharacter_eventServerSetIsJumping_Parms), Z_Construct_UFunction_ASCharacter_ServerSetIsJumping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASCharacter_ServerSetIsJumping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASCharacter_ServerSetIsJumping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASCharacter_ServerSetIsJumping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASCharacter_ServerSetIsJumping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASCharacter_ServerSetIsJumping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASCharacter_ServerUse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASCharacter_ServerUse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/SCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASCharacter_ServerUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASCharacter, nullptr, "ServerUse", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASCharacter_ServerUse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASCharacter_ServerUse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASCharacter_ServerUse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASCharacter_ServerUse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASCharacter_SwapToNewWeaponMesh_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASCharacter_SwapToNewWeaponMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/* Update the weapon mesh to the newly equipped weapon, this is triggered during an anim montage.\n\x09\x09NOTE: Requires an AnimNotify created in the Equip animation to tell us when to swap the meshes. */" },
		{ "ModuleRelativePath", "Public/Player/SCharacter.h" },
		{ "ToolTip", "Update the weapon mesh to the newly equipped weapon, this is triggered during an anim montage.\n              NOTE: Requires an AnimNotify created in the Equip animation to tell us when to swap the meshes." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASCharacter_SwapToNewWeaponMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASCharacter, nullptr, "SwapToNewWeaponMesh", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASCharacter_SwapToNewWeaponMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASCharacter_SwapToNewWeaponMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASCharacter_SwapToNewWeaponMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASCharacter_SwapToNewWeaponMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASCharacter_NoRegister()
	{
		return ASCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ASCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoomComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoomComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CarriedObjectComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CarriedObjectComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsJumping_MetaData[];
#endif
		static void NewProp_bIsJumping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsJumping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxUseDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxUseDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncrementHungerInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IncrementHungerInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncrementHungerAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IncrementHungerAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CriticalHungerThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CriticalHungerThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hunger_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Hunger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHunger_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHunger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HungerDamagePerInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HungerDamagePerInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HungerDamageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_HungerDamageType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponAttachPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_WeaponAttachPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PelvisAttachPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PelvisAttachPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpineAttachPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SpineAttachPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DropWeaponMaxDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DropWeaponMaxDistance;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Inventory_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Inventory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviousWeapon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBaseCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_SurvivalGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASCharacter_GetCurrentWeapon, "GetCurrentWeapon" }, // 831719
		{ &Z_Construct_UFunction_ASCharacter_GetHunger, "GetHunger" }, // 2933891633
		{ &Z_Construct_UFunction_ASCharacter_GetLastMakeNoiseTime, "GetLastMakeNoiseTime" }, // 1299497764
		{ &Z_Construct_UFunction_ASCharacter_GetLastNoiseLoudness, "GetLastNoiseLoudness" }, // 3310218645
		{ &Z_Construct_UFunction_ASCharacter_GetMaxHunger, "GetMaxHunger" }, // 4131576922
		{ &Z_Construct_UFunction_ASCharacter_IsFiring, "IsFiring" }, // 3539572895
		{ &Z_Construct_UFunction_ASCharacter_IsInitiatedJump, "IsInitiatedJump" }, // 2650591350
		{ &Z_Construct_UFunction_ASCharacter_MakePawnNoise, "MakePawnNoise" }, // 4021322905
		{ &Z_Construct_UFunction_ASCharacter_OnRep_CurrentWeapon, "OnRep_CurrentWeapon" }, // 3482244558
		{ &Z_Construct_UFunction_ASCharacter_RestoreCondition, "RestoreCondition" }, // 4274874887
		{ &Z_Construct_UFunction_ASCharacter_ServerDropWeapon, "ServerDropWeapon" }, // 55726771
		{ &Z_Construct_UFunction_ASCharacter_ServerEquipWeapon, "ServerEquipWeapon" }, // 1642029612
		{ &Z_Construct_UFunction_ASCharacter_ServerSetIsJumping, "ServerSetIsJumping" }, // 3636142290
		{ &Z_Construct_UFunction_ASCharacter_ServerUse, "ServerUse" }, // 1804032586
		{ &Z_Construct_UFunction_ASCharacter_SwapToNewWeaponMesh, "SwapToNewWeaponMesh" }, // 2409390813
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/SCharacter.h" },
		{ "ModuleRelativePath", "Public/Player/SCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::NewProp_CameraBoomComp_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/* Boom to handle distance to player mesh. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/SCharacter.h" },
		{ "ToolTip", "Boom to handle distance to player mesh." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_CameraBoomComp = { "CameraBoomComp", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacter, CameraBoomComp), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASCharacter_Statics::NewProp_CameraBoomComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_CameraBoomComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::NewProp_CameraComp_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/* Primary camera of the player*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/SCharacter.h" },
		{ "ToolTip", "Primary camera of the player" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_CameraComp = { "CameraComp", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacter, CameraComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASCharacter_Statics::NewProp_CameraComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_CameraComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::NewProp_CarriedObjectComp_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/SCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_CarriedObjectComp = { "CarriedObjectComp", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacter, CarriedObjectComp), Z_Construct_UClass_USCarryObjectComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASCharacter_Statics::NewProp_CarriedObjectComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_CarriedObjectComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::NewProp_bIsJumping_MetaData[] = {
		{ "Comment", "/* Is character currently performing a jump action. Resets on landed.  */" },
		{ "ModuleRelativePath", "Public/Player/SCharacter.h" },
		{ "ToolTip", "Is character currently performing a jump action. Resets on landed." },
	};
#endif
	void Z_Construct_UClass_ASCharacter_Statics::NewProp_bIsJumping_SetBit(void* Obj)
	{
		((ASCharacter*)Obj)->bIsJumping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_bIsJumping = { "bIsJumping", nullptr, (EPropertyFlags)0x0010000000002020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASCharacter), &Z_Construct_UClass_ASCharacter_Statics::NewProp_bIsJumping_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASCharacter_Statics::NewProp_bIsJumping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_bIsJumping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::NewProp_MaxUseDistance_MetaData[] = {
		{ "Category", "ObjectInteraction" },
		{ "Comment", "/*Max distance to use/focus on actors. */" },
		{ "ModuleRelativePath", "Public/Player/SCharacter.h" },
		{ "ToolTip", "Max distance to use/focus on actors." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_MaxUseDistance = { "MaxUseDistance", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacter, MaxUseDistance), METADATA_PARAMS(Z_Construct_UClass_ASCharacter_Statics::NewProp_MaxUseDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_MaxUseDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::NewProp_IncrementHungerInterval_MetaData[] = {
		{ "Category", "PlayerCondition" },
		{ "ModuleRelativePath", "Public/Player/SCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_IncrementHungerInterval = { "IncrementHungerInterval", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacter, IncrementHungerInterval), METADATA_PARAMS(Z_Construct_UClass_ASCharacter_Statics::NewProp_IncrementHungerInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_IncrementHungerInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::NewProp_IncrementHungerAmount_MetaData[] = {
		{ "Category", "PlayerCondition" },
		{ "ModuleRelativePath", "Public/Player/SCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_IncrementHungerAmount = { "IncrementHungerAmount", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacter, IncrementHungerAmount), METADATA_PARAMS(Z_Construct_UClass_ASCharacter_Statics::NewProp_IncrementHungerAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_IncrementHungerAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::NewProp_CriticalHungerThreshold_MetaData[] = {
		{ "Category", "PlayerCondition" },
		{ "Comment", "/* Limit when player suffers Hitpoints from extreme hunger */" },
		{ "ModuleRelativePath", "Public/Player/SCharacter.h" },
		{ "ToolTip", "Limit when player suffers Hitpoints from extreme hunger" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_CriticalHungerThreshold = { "CriticalHungerThreshold", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacter, CriticalHungerThreshold), METADATA_PARAMS(Z_Construct_UClass_ASCharacter_Statics::NewProp_CriticalHungerThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_CriticalHungerThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::NewProp_Hunger_MetaData[] = {
		{ "Category", "PlayerCondition" },
		{ "ModuleRelativePath", "Public/Player/SCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_Hunger = { "Hunger", nullptr, (EPropertyFlags)0x0010000000010021, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacter, Hunger), METADATA_PARAMS(Z_Construct_UClass_ASCharacter_Statics::NewProp_Hunger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_Hunger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::NewProp_MaxHunger_MetaData[] = {
		{ "Category", "PlayerCondition" },
		{ "Comment", "// Documentation Note: MaxHunger does not need to be replicated, only values that change and are displayed or used by clients should ever be replicated.\n" },
		{ "ModuleRelativePath", "Public/Player/SCharacter.h" },
		{ "ToolTip", "Documentation Note: MaxHunger does not need to be replicated, only values that change and are displayed or used by clients should ever be replicated." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_MaxHunger = { "MaxHunger", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacter, MaxHunger), METADATA_PARAMS(Z_Construct_UClass_ASCharacter_Statics::NewProp_MaxHunger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_MaxHunger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::NewProp_HungerDamagePerInterval_MetaData[] = {
		{ "Category", "PlayerCondition" },
		{ "ModuleRelativePath", "Public/Player/SCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_HungerDamagePerInterval = { "HungerDamagePerInterval", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacter, HungerDamagePerInterval), METADATA_PARAMS(Z_Construct_UClass_ASCharacter_Statics::NewProp_HungerDamagePerInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_HungerDamagePerInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::NewProp_HungerDamageType_MetaData[] = {
		{ "Category", "PlayerCondition" },
		{ "Comment", "/* Damage type applied when player suffers critical hunger */" },
		{ "ModuleRelativePath", "Public/Player/SCharacter.h" },
		{ "ToolTip", "Damage type applied when player suffers critical hunger" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_HungerDamageType = { "HungerDamageType", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacter, HungerDamageType), Z_Construct_UClass_UDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASCharacter_Statics::NewProp_HungerDamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_HungerDamageType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::NewProp_WeaponAttachPoint_MetaData[] = {
		{ "Category", "Sockets" },
		{ "Comment", "/* Attachpoint for active weapon/item in hands */" },
		{ "ModuleRelativePath", "Public/Player/SCharacter.h" },
		{ "ToolTip", "Attachpoint for active weapon/item in hands" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_WeaponAttachPoint = { "WeaponAttachPoint", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacter, WeaponAttachPoint), METADATA_PARAMS(Z_Construct_UClass_ASCharacter_Statics::NewProp_WeaponAttachPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_WeaponAttachPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::NewProp_PelvisAttachPoint_MetaData[] = {
		{ "Category", "Sockets" },
		{ "Comment", "/* Attachpoint for items carried on the belt/pelvis. */" },
		{ "ModuleRelativePath", "Public/Player/SCharacter.h" },
		{ "ToolTip", "Attachpoint for items carried on the belt/pelvis." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_PelvisAttachPoint = { "PelvisAttachPoint", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacter, PelvisAttachPoint), METADATA_PARAMS(Z_Construct_UClass_ASCharacter_Statics::NewProp_PelvisAttachPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_PelvisAttachPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::NewProp_SpineAttachPoint_MetaData[] = {
		{ "Category", "Sockets" },
		{ "Comment", "/* Attachpoint for primary weapons */" },
		{ "ModuleRelativePath", "Public/Player/SCharacter.h" },
		{ "ToolTip", "Attachpoint for primary weapons" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_SpineAttachPoint = { "SpineAttachPoint", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacter, SpineAttachPoint), METADATA_PARAMS(Z_Construct_UClass_ASCharacter_Statics::NewProp_SpineAttachPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_SpineAttachPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::NewProp_DropWeaponMaxDistance_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/* Distance away from character when dropping inventory items. */" },
		{ "ModuleRelativePath", "Public/Player/SCharacter.h" },
		{ "ToolTip", "Distance away from character when dropping inventory items." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_DropWeaponMaxDistance = { "DropWeaponMaxDistance", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacter, DropWeaponMaxDistance), METADATA_PARAMS(Z_Construct_UClass_ASCharacter_Statics::NewProp_DropWeaponMaxDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_DropWeaponMaxDistance_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_Inventory_Inner = { "Inventory", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASWeapon_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::NewProp_Inventory_MetaData[] = {
		{ "Comment", "/* All weapons/items the player currently holds */" },
		{ "ModuleRelativePath", "Public/Player/SCharacter.h" },
		{ "ToolTip", "All weapons/items the player currently holds" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0010000000002020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacter, Inventory), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASCharacter_Statics::NewProp_Inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_Inventory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::NewProp_CurrentWeapon_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/SCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_CurrentWeapon = { "CurrentWeapon", "OnRep_CurrentWeapon", (EPropertyFlags)0x0010000100002020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacter, CurrentWeapon), Z_Construct_UClass_ASWeapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASCharacter_Statics::NewProp_CurrentWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_CurrentWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::NewProp_PreviousWeapon_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/SCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_PreviousWeapon = { "PreviousWeapon", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacter, PreviousWeapon), Z_Construct_UClass_ASWeapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASCharacter_Statics::NewProp_PreviousWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_PreviousWeapon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_CameraBoomComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_CameraComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_CarriedObjectComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_bIsJumping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_MaxUseDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_IncrementHungerInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_IncrementHungerAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_CriticalHungerThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_Hunger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_MaxHunger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_HungerDamagePerInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_HungerDamageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_WeaponAttachPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_PelvisAttachPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_SpineAttachPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_DropWeaponMaxDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_Inventory_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_Inventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_CurrentWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_PreviousWeapon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASCharacter_Statics::ClassParams = {
		&ASCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASCharacter, 3377226759);
	template<> SURVIVALGAME_API UClass* StaticClass<ASCharacter>()
	{
		return ASCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASCharacter(Z_Construct_UClass_ASCharacter, &ASCharacter::StaticClass, TEXT("/Script/SurvivalGame"), TEXT("ASCharacter"), false, nullptr, nullptr, nullptr);

	void ASCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bIsJumping(TEXT("bIsJumping"));
		static const FName Name_Hunger(TEXT("Hunger"));
		static const FName Name_Inventory(TEXT("Inventory"));
		static const FName Name_CurrentWeapon(TEXT("CurrentWeapon"));

		const bool bIsValid = true
			&& Name_bIsJumping == ClassReps[(int32)ENetFields_Private::bIsJumping].Property->GetFName()
			&& Name_Hunger == ClassReps[(int32)ENetFields_Private::Hunger].Property->GetFName()
			&& Name_Inventory == ClassReps[(int32)ENetFields_Private::Inventory].Property->GetFName()
			&& Name_CurrentWeapon == ClassReps[(int32)ENetFields_Private::CurrentWeapon].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASCharacter"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
