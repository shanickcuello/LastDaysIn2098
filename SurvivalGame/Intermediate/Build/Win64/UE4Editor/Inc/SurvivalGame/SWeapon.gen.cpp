// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SurvivalGame/Public/Items/SWeapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSWeapon() {}
// Cross Module References
	SURVIVALGAME_API UEnum* Z_Construct_UEnum_SurvivalGame_EWeaponState();
	UPackage* Z_Construct_UPackage__Script_SurvivalGame();
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASWeapon_NoRegister();
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASWeapon();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	SURVIVALGAME_API UEnum* Z_Construct_UEnum_SurvivalGame_EInventorySlot();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SURVIVALGAME_API UClass* Z_Construct_UClass_ASWeaponPickup_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
// End Cross Module References
	static UEnum* EWeaponState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SurvivalGame_EWeaponState, Z_Construct_UPackage__Script_SurvivalGame(), TEXT("EWeaponState"));
		}
		return Singleton;
	}
	template<> SURVIVALGAME_API UEnum* StaticEnum<EWeaponState>()
	{
		return EWeaponState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWeaponState(EWeaponState_StaticEnum, TEXT("/Script/SurvivalGame"), TEXT("EWeaponState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SurvivalGame_EWeaponState_Hash() { return 2176230828U; }
	UEnum* Z_Construct_UEnum_SurvivalGame_EWeaponState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SurvivalGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWeaponState"), 0, Get_Z_Construct_UEnum_SurvivalGame_EWeaponState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWeaponState::Idle", (int64)EWeaponState::Idle },
				{ "EWeaponState::Firing", (int64)EWeaponState::Firing },
				{ "EWeaponState::Equipping", (int64)EWeaponState::Equipping },
				{ "EWeaponState::Reloading", (int64)EWeaponState::Reloading },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Equipping.Name", "EWeaponState::Equipping" },
				{ "Firing.Name", "EWeaponState::Firing" },
				{ "Idle.Name", "EWeaponState::Idle" },
				{ "ModuleRelativePath", "Public/Items/SWeapon.h" },
				{ "Reloading.Name", "EWeaponState::Reloading" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SurvivalGame,
				nullptr,
				"EWeaponState",
				"EWeaponState",
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
	DEFINE_FUNCTION(ASWeapon::execGetMaxAmmo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMaxAmmo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASWeapon::execGetMaxAmmoPerClip)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMaxAmmoPerClip();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASWeapon::execGetCurrentAmmoInClip)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCurrentAmmoInClip();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASWeapon::execGetCurrentAmmo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCurrentAmmo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASWeapon::execServerStopReload)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerStopReload_Validate())
		{
			RPC_ValidateFailed(TEXT("ServerStopReload_Validate"));
			return;
		}
		P_THIS->ServerStopReload_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASWeapon::execServerStartReload)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerStartReload_Validate())
		{
			RPC_ValidateFailed(TEXT("ServerStartReload_Validate"));
			return;
		}
		P_THIS->ServerStartReload_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASWeapon::execOnRep_Reload)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Reload();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASWeapon::execClientStartReload)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientStartReload_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASWeapon::execOnRep_BurstCounter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_BurstCounter();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASWeapon::execServerHandleFiring)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerHandleFiring_Validate())
		{
			RPC_ValidateFailed(TEXT("ServerHandleFiring_Validate"));
			return;
		}
		P_THIS->ServerHandleFiring_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASWeapon::execServerStopFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerStopFire_Validate())
		{
			RPC_ValidateFailed(TEXT("ServerStopFire_Validate"));
			return;
		}
		P_THIS->ServerStopFire_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASWeapon::execServerStartFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerStartFire_Validate())
		{
			RPC_ValidateFailed(TEXT("ServerStartFire_Validate"));
			return;
		}
		P_THIS->ServerStartFire_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASWeapon::execGetPawnOwner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ASCharacter**)Z_Param__Result=P_THIS->GetPawnOwner();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASWeapon::execGetWeaponMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetWeaponMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASWeapon::execOnRep_MyPawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MyPawn();
		P_NATIVE_END;
	}
	static FName NAME_ASWeapon_ClientStartReload = FName(TEXT("ClientStartReload"));
	void ASWeapon::ClientStartReload()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASWeapon_ClientStartReload),NULL);
	}
	static FName NAME_ASWeapon_ServerHandleFiring = FName(TEXT("ServerHandleFiring"));
	void ASWeapon::ServerHandleFiring()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASWeapon_ServerHandleFiring),NULL);
	}
	static FName NAME_ASWeapon_ServerStartFire = FName(TEXT("ServerStartFire"));
	void ASWeapon::ServerStartFire()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASWeapon_ServerStartFire),NULL);
	}
	static FName NAME_ASWeapon_ServerStartReload = FName(TEXT("ServerStartReload"));
	void ASWeapon::ServerStartReload()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASWeapon_ServerStartReload),NULL);
	}
	static FName NAME_ASWeapon_ServerStopFire = FName(TEXT("ServerStopFire"));
	void ASWeapon::ServerStopFire()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASWeapon_ServerStopFire),NULL);
	}
	static FName NAME_ASWeapon_ServerStopReload = FName(TEXT("ServerStopReload"));
	void ASWeapon::ServerStopReload()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASWeapon_ServerStopReload),NULL);
	}
	void ASWeapon::StaticRegisterNativesASWeapon()
	{
		UClass* Class = ASWeapon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClientStartReload", &ASWeapon::execClientStartReload },
			{ "GetCurrentAmmo", &ASWeapon::execGetCurrentAmmo },
			{ "GetCurrentAmmoInClip", &ASWeapon::execGetCurrentAmmoInClip },
			{ "GetMaxAmmo", &ASWeapon::execGetMaxAmmo },
			{ "GetMaxAmmoPerClip", &ASWeapon::execGetMaxAmmoPerClip },
			{ "GetPawnOwner", &ASWeapon::execGetPawnOwner },
			{ "GetWeaponMesh", &ASWeapon::execGetWeaponMesh },
			{ "OnRep_BurstCounter", &ASWeapon::execOnRep_BurstCounter },
			{ "OnRep_MyPawn", &ASWeapon::execOnRep_MyPawn },
			{ "OnRep_Reload", &ASWeapon::execOnRep_Reload },
			{ "ServerHandleFiring", &ASWeapon::execServerHandleFiring },
			{ "ServerStartFire", &ASWeapon::execServerStartFire },
			{ "ServerStartReload", &ASWeapon::execServerStartReload },
			{ "ServerStopFire", &ASWeapon::execServerStopFire },
			{ "ServerStopReload", &ASWeapon::execServerStopReload },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASWeapon_ClientStartReload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASWeapon_ClientStartReload_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* Trigger reload from server */" },
		{ "ModuleRelativePath", "Public/Items/SWeapon.h" },
		{ "ToolTip", "Trigger reload from server" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASWeapon_ClientStartReload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASWeapon, nullptr, "ClientStartReload", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASWeapon_ClientStartReload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASWeapon_ClientStartReload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASWeapon_ClientStartReload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASWeapon_ClientStartReload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASWeapon_GetCurrentAmmo_Statics
	{
		struct SWeapon_eventGetCurrentAmmo_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASWeapon_GetCurrentAmmo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SWeapon_eventGetCurrentAmmo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASWeapon_GetCurrentAmmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASWeapon_GetCurrentAmmo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASWeapon_GetCurrentAmmo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ammo" },
		{ "ModuleRelativePath", "Public/Items/SWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASWeapon_GetCurrentAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASWeapon, nullptr, "GetCurrentAmmo", nullptr, nullptr, sizeof(SWeapon_eventGetCurrentAmmo_Parms), Z_Construct_UFunction_ASWeapon_GetCurrentAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASWeapon_GetCurrentAmmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASWeapon_GetCurrentAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASWeapon_GetCurrentAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASWeapon_GetCurrentAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASWeapon_GetCurrentAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASWeapon_GetCurrentAmmoInClip_Statics
	{
		struct SWeapon_eventGetCurrentAmmoInClip_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASWeapon_GetCurrentAmmoInClip_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SWeapon_eventGetCurrentAmmoInClip_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASWeapon_GetCurrentAmmoInClip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASWeapon_GetCurrentAmmoInClip_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASWeapon_GetCurrentAmmoInClip_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ammo" },
		{ "ModuleRelativePath", "Public/Items/SWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASWeapon_GetCurrentAmmoInClip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASWeapon, nullptr, "GetCurrentAmmoInClip", nullptr, nullptr, sizeof(SWeapon_eventGetCurrentAmmoInClip_Parms), Z_Construct_UFunction_ASWeapon_GetCurrentAmmoInClip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASWeapon_GetCurrentAmmoInClip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASWeapon_GetCurrentAmmoInClip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASWeapon_GetCurrentAmmoInClip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASWeapon_GetCurrentAmmoInClip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASWeapon_GetCurrentAmmoInClip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASWeapon_GetMaxAmmo_Statics
	{
		struct SWeapon_eventGetMaxAmmo_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASWeapon_GetMaxAmmo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SWeapon_eventGetMaxAmmo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASWeapon_GetMaxAmmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASWeapon_GetMaxAmmo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASWeapon_GetMaxAmmo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ammo" },
		{ "ModuleRelativePath", "Public/Items/SWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASWeapon_GetMaxAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASWeapon, nullptr, "GetMaxAmmo", nullptr, nullptr, sizeof(SWeapon_eventGetMaxAmmo_Parms), Z_Construct_UFunction_ASWeapon_GetMaxAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASWeapon_GetMaxAmmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASWeapon_GetMaxAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASWeapon_GetMaxAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASWeapon_GetMaxAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASWeapon_GetMaxAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASWeapon_GetMaxAmmoPerClip_Statics
	{
		struct SWeapon_eventGetMaxAmmoPerClip_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASWeapon_GetMaxAmmoPerClip_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SWeapon_eventGetMaxAmmoPerClip_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASWeapon_GetMaxAmmoPerClip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASWeapon_GetMaxAmmoPerClip_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASWeapon_GetMaxAmmoPerClip_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ammo" },
		{ "ModuleRelativePath", "Public/Items/SWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASWeapon_GetMaxAmmoPerClip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASWeapon, nullptr, "GetMaxAmmoPerClip", nullptr, nullptr, sizeof(SWeapon_eventGetMaxAmmoPerClip_Parms), Z_Construct_UFunction_ASWeapon_GetMaxAmmoPerClip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASWeapon_GetMaxAmmoPerClip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASWeapon_GetMaxAmmoPerClip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASWeapon_GetMaxAmmoPerClip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASWeapon_GetMaxAmmoPerClip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASWeapon_GetMaxAmmoPerClip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASWeapon_GetPawnOwner_Statics
	{
		struct SWeapon_eventGetPawnOwner_Parms
		{
			ASCharacter* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASWeapon_GetPawnOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SWeapon_eventGetPawnOwner_Parms, ReturnValue), Z_Construct_UClass_ASCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASWeapon_GetPawnOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASWeapon_GetPawnOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASWeapon_GetPawnOwner_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "Comment", "/* Get pawn owner */" },
		{ "ModuleRelativePath", "Public/Items/SWeapon.h" },
		{ "ToolTip", "Get pawn owner" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASWeapon_GetPawnOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASWeapon, nullptr, "GetPawnOwner", nullptr, nullptr, sizeof(SWeapon_eventGetPawnOwner_Parms), Z_Construct_UFunction_ASWeapon_GetPawnOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASWeapon_GetPawnOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASWeapon_GetPawnOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASWeapon_GetPawnOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASWeapon_GetPawnOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASWeapon_GetPawnOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASWeapon_GetWeaponMesh_Statics
	{
		struct SWeapon_eventGetWeaponMesh_Parms
		{
			USkeletalMeshComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASWeapon_GetWeaponMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASWeapon_GetWeaponMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SWeapon_eventGetWeaponMesh_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASWeapon_GetWeaponMesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASWeapon_GetWeaponMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASWeapon_GetWeaponMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASWeapon_GetWeaponMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASWeapon_GetWeaponMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "Comment", "/** get weapon mesh (needs pawn owner to determine variant) */" },
		{ "ModuleRelativePath", "Public/Items/SWeapon.h" },
		{ "ToolTip", "get weapon mesh (needs pawn owner to determine variant)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASWeapon_GetWeaponMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASWeapon, nullptr, "GetWeaponMesh", nullptr, nullptr, sizeof(SWeapon_eventGetWeaponMesh_Parms), Z_Construct_UFunction_ASWeapon_GetWeaponMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASWeapon_GetWeaponMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASWeapon_GetWeaponMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASWeapon_GetWeaponMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASWeapon_GetWeaponMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASWeapon_GetWeaponMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASWeapon_OnRep_BurstCounter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASWeapon_OnRep_BurstCounter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/SWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASWeapon_OnRep_BurstCounter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASWeapon, nullptr, "OnRep_BurstCounter", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASWeapon_OnRep_BurstCounter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASWeapon_OnRep_BurstCounter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASWeapon_OnRep_BurstCounter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASWeapon_OnRep_BurstCounter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASWeapon_OnRep_MyPawn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASWeapon_OnRep_MyPawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/SWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASWeapon_OnRep_MyPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASWeapon, nullptr, "OnRep_MyPawn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASWeapon_OnRep_MyPawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASWeapon_OnRep_MyPawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASWeapon_OnRep_MyPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASWeapon_OnRep_MyPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASWeapon_OnRep_Reload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASWeapon_OnRep_Reload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/SWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASWeapon_OnRep_Reload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASWeapon, nullptr, "OnRep_Reload", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASWeapon_OnRep_Reload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASWeapon_OnRep_Reload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASWeapon_OnRep_Reload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASWeapon_OnRep_Reload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASWeapon_ServerHandleFiring_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASWeapon_ServerHandleFiring_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/SWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASWeapon_ServerHandleFiring_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASWeapon, nullptr, "ServerHandleFiring", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASWeapon_ServerHandleFiring_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASWeapon_ServerHandleFiring_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASWeapon_ServerHandleFiring()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASWeapon_ServerHandleFiring_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASWeapon_ServerStartFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASWeapon_ServerStartFire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/SWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASWeapon_ServerStartFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASWeapon, nullptr, "ServerStartFire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASWeapon_ServerStartFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASWeapon_ServerStartFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASWeapon_ServerStartFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASWeapon_ServerStartFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASWeapon_ServerStartReload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASWeapon_ServerStartReload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/SWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASWeapon_ServerStartReload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASWeapon, nullptr, "ServerStartReload", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASWeapon_ServerStartReload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASWeapon_ServerStartReload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASWeapon_ServerStartReload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASWeapon_ServerStartReload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASWeapon_ServerStopFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASWeapon_ServerStopFire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/SWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASWeapon_ServerStopFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASWeapon, nullptr, "ServerStopFire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASWeapon_ServerStopFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASWeapon_ServerStopFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASWeapon_ServerStopFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASWeapon_ServerStopFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASWeapon_ServerStopReload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASWeapon_ServerStopReload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/SWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASWeapon_ServerStopReload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASWeapon, nullptr, "ServerStopReload", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASWeapon_ServerStopReload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASWeapon_ServerStopReload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASWeapon_ServerStopReload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASWeapon_ServerStopReload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASWeapon_NoRegister()
	{
		return ASWeapon::StaticClass();
	}
	struct Z_Construct_UClass_ASWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShotsPerMinute_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShotsPerMinute;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StorageSlot_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StorageSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StorageSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyPawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyPawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponPickupClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WeaponPickupClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EquipSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuzzleFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MuzzleFX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EquipAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuzzlePSC_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MuzzlePSC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuzzleAttachPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MuzzleAttachPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BurstCounter_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BurstCounter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutOfAmmoSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutOfAmmoSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoAnimReloadDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NoAnimReloadDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoEquipAnimDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NoEquipAnimDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPendingReload_MetaData[];
#endif
		static void NewProp_bPendingReload_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPendingReload;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentAmmoInClip_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentAmmoInClip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAmmoPerClip_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxAmmoPerClip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReloadSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReloadSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReloadAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReloadAnim;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SurvivalGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASWeapon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASWeapon_ClientStartReload, "ClientStartReload" }, // 1081777445
		{ &Z_Construct_UFunction_ASWeapon_GetCurrentAmmo, "GetCurrentAmmo" }, // 3504042860
		{ &Z_Construct_UFunction_ASWeapon_GetCurrentAmmoInClip, "GetCurrentAmmoInClip" }, // 1144501585
		{ &Z_Construct_UFunction_ASWeapon_GetMaxAmmo, "GetMaxAmmo" }, // 3018562656
		{ &Z_Construct_UFunction_ASWeapon_GetMaxAmmoPerClip, "GetMaxAmmoPerClip" }, // 1633423652
		{ &Z_Construct_UFunction_ASWeapon_GetPawnOwner, "GetPawnOwner" }, // 4189219850
		{ &Z_Construct_UFunction_ASWeapon_GetWeaponMesh, "GetWeaponMesh" }, // 4250493568
		{ &Z_Construct_UFunction_ASWeapon_OnRep_BurstCounter, "OnRep_BurstCounter" }, // 1366690823
		{ &Z_Construct_UFunction_ASWeapon_OnRep_MyPawn, "OnRep_MyPawn" }, // 3861964826
		{ &Z_Construct_UFunction_ASWeapon_OnRep_Reload, "OnRep_Reload" }, // 2389323935
		{ &Z_Construct_UFunction_ASWeapon_ServerHandleFiring, "ServerHandleFiring" }, // 4276129655
		{ &Z_Construct_UFunction_ASWeapon_ServerStartFire, "ServerStartFire" }, // 870699434
		{ &Z_Construct_UFunction_ASWeapon_ServerStartReload, "ServerStartReload" }, // 3559701475
		{ &Z_Construct_UFunction_ASWeapon_ServerStopFire, "ServerStopFire" }, // 1025225966
		{ &Z_Construct_UFunction_ASWeapon_ServerStopReload, "ServerStopReload" }, // 2966641731
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeapon_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Items/SWeapon.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Items/SWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeapon_Statics::NewProp_ShotsPerMinute_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Items/SWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASWeapon_Statics::NewProp_ShotsPerMinute = { "ShotsPerMinute", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeapon, ShotsPerMinute), METADATA_PARAMS(Z_Construct_UClass_ASWeapon_Statics::NewProp_ShotsPerMinute_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASWeapon_Statics::NewProp_ShotsPerMinute_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASWeapon_Statics::NewProp_StorageSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeapon_Statics::NewProp_StorageSlot_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "/* The character socket to store this item at. */" },
		{ "ModuleRelativePath", "Public/Items/SWeapon.h" },
		{ "ToolTip", "The character socket to store this item at." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASWeapon_Statics::NewProp_StorageSlot = { "StorageSlot", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeapon, StorageSlot), Z_Construct_UEnum_SurvivalGame_EInventorySlot, METADATA_PARAMS(Z_Construct_UClass_ASWeapon_Statics::NewProp_StorageSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASWeapon_Statics::NewProp_StorageSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeapon_Statics::NewProp_MyPawn_MetaData[] = {
		{ "Comment", "/** pawn owner */" },
		{ "ModuleRelativePath", "Public/Items/SWeapon.h" },
		{ "ToolTip", "pawn owner" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASWeapon_Statics::NewProp_MyPawn = { "MyPawn", "OnRep_MyPawn", (EPropertyFlags)0x0020080100002020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeapon, MyPawn), Z_Construct_UClass_ASCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASWeapon_Statics::NewProp_MyPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASWeapon_Statics::NewProp_MyPawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeapon_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** weapon mesh: 3rd person view */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/SWeapon.h" },
		{ "ToolTip", "weapon mesh: 3rd person view" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASWeapon_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00200800000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeapon, Mesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASWeapon_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASWeapon_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeapon_Statics::NewProp_WeaponPickupClass_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "/* The class to spawn in the level when dropped */" },
		{ "ModuleRelativePath", "Public/Items/SWeapon.h" },
		{ "ToolTip", "The class to spawn in the level when dropped" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASWeapon_Statics::NewProp_WeaponPickupClass = { "WeaponPickupClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeapon, WeaponPickupClass), Z_Construct_UClass_ASWeaponPickup_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASWeapon_Statics::NewProp_WeaponPickupClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASWeapon_Statics::NewProp_WeaponPickupClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeapon_Statics::NewProp_FireSound_MetaData[] = {
		{ "Category", "Sounds" },
		{ "ModuleRelativePath", "Public/Items/SWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASWeapon_Statics::NewProp_FireSound = { "FireSound", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeapon, FireSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASWeapon_Statics::NewProp_FireSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASWeapon_Statics::NewProp_FireSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeapon_Statics::NewProp_EquipSound_MetaData[] = {
		{ "Category", "Sounds" },
		{ "ModuleRelativePath", "Public/Items/SWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASWeapon_Statics::NewProp_EquipSound = { "EquipSound", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeapon, EquipSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASWeapon_Statics::NewProp_EquipSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASWeapon_Statics::NewProp_EquipSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeapon_Statics::NewProp_MuzzleFX_MetaData[] = {
		{ "Category", "SWeapon" },
		{ "ModuleRelativePath", "Public/Items/SWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASWeapon_Statics::NewProp_MuzzleFX = { "MuzzleFX", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeapon, MuzzleFX), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASWeapon_Statics::NewProp_MuzzleFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASWeapon_Statics::NewProp_MuzzleFX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeapon_Statics::NewProp_EquipAnim_MetaData[] = {
		{ "Category", "SWeapon" },
		{ "ModuleRelativePath", "Public/Items/SWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASWeapon_Statics::NewProp_EquipAnim = { "EquipAnim", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeapon, EquipAnim), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASWeapon_Statics::NewProp_EquipAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASWeapon_Statics::NewProp_EquipAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeapon_Statics::NewProp_FireAnim_MetaData[] = {
		{ "Category", "SWeapon" },
		{ "ModuleRelativePath", "Public/Items/SWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASWeapon_Statics::NewProp_FireAnim = { "FireAnim", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeapon, FireAnim), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASWeapon_Statics::NewProp_FireAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASWeapon_Statics::NewProp_FireAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeapon_Statics::NewProp_MuzzlePSC_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/SWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASWeapon_Statics::NewProp_MuzzlePSC = { "MuzzlePSC", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeapon, MuzzlePSC), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASWeapon_Statics::NewProp_MuzzlePSC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASWeapon_Statics::NewProp_MuzzlePSC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeapon_Statics::NewProp_MuzzleAttachPoint_MetaData[] = {
		{ "Category", "SWeapon" },
		{ "ModuleRelativePath", "Public/Items/SWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASWeapon_Statics::NewProp_MuzzleAttachPoint = { "MuzzleAttachPoint", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeapon, MuzzleAttachPoint), METADATA_PARAMS(Z_Construct_UClass_ASWeapon_Statics::NewProp_MuzzleAttachPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASWeapon_Statics::NewProp_MuzzleAttachPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeapon_Statics::NewProp_BurstCounter_MetaData[] = {
		{ "ModuleRelativePath", "Public/Items/SWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASWeapon_Statics::NewProp_BurstCounter = { "BurstCounter", "OnRep_BurstCounter", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeapon, BurstCounter), METADATA_PARAMS(Z_Construct_UClass_ASWeapon_Statics::NewProp_BurstCounter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASWeapon_Statics::NewProp_BurstCounter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeapon_Statics::NewProp_OutOfAmmoSound_MetaData[] = {
		{ "Category", "Sounds" },
		{ "ModuleRelativePath", "Public/Items/SWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASWeapon_Statics::NewProp_OutOfAmmoSound = { "OutOfAmmoSound", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeapon, OutOfAmmoSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASWeapon_Statics::NewProp_OutOfAmmoSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASWeapon_Statics::NewProp_OutOfAmmoSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeapon_Statics::NewProp_NoAnimReloadDuration_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/* Time to assign on reload when no animation is found */" },
		{ "ModuleRelativePath", "Public/Items/SWeapon.h" },
		{ "ToolTip", "Time to assign on reload when no animation is found" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASWeapon_Statics::NewProp_NoAnimReloadDuration = { "NoAnimReloadDuration", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeapon, NoAnimReloadDuration), METADATA_PARAMS(Z_Construct_UClass_ASWeapon_Statics::NewProp_NoAnimReloadDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASWeapon_Statics::NewProp_NoAnimReloadDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeapon_Statics::NewProp_NoEquipAnimDuration_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/* Time to assign on equip when no animation is found */" },
		{ "ModuleRelativePath", "Public/Items/SWeapon.h" },
		{ "ToolTip", "Time to assign on equip when no animation is found" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASWeapon_Statics::NewProp_NoEquipAnimDuration = { "NoEquipAnimDuration", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeapon, NoEquipAnimDuration), METADATA_PARAMS(Z_Construct_UClass_ASWeapon_Statics::NewProp_NoEquipAnimDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASWeapon_Statics::NewProp_NoEquipAnimDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeapon_Statics::NewProp_bPendingReload_MetaData[] = {
		{ "ModuleRelativePath", "Public/Items/SWeapon.h" },
	};
#endif
	void Z_Construct_UClass_ASWeapon_Statics::NewProp_bPendingReload_SetBit(void* Obj)
	{
		((ASWeapon*)Obj)->bPendingReload = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASWeapon_Statics::NewProp_bPendingReload = { "bPendingReload", "OnRep_Reload", (EPropertyFlags)0x0020080100002020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASWeapon), &Z_Construct_UClass_ASWeapon_Statics::NewProp_bPendingReload_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASWeapon_Statics::NewProp_bPendingReload_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASWeapon_Statics::NewProp_bPendingReload_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeapon_Statics::NewProp_CurrentAmmo_MetaData[] = {
		{ "ModuleRelativePath", "Public/Items/SWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASWeapon_Statics::NewProp_CurrentAmmo = { "CurrentAmmo", nullptr, (EPropertyFlags)0x0020080000002020, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeapon, CurrentAmmo), METADATA_PARAMS(Z_Construct_UClass_ASWeapon_Statics::NewProp_CurrentAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASWeapon_Statics::NewProp_CurrentAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeapon_Statics::NewProp_CurrentAmmoInClip_MetaData[] = {
		{ "ModuleRelativePath", "Public/Items/SWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASWeapon_Statics::NewProp_CurrentAmmoInClip = { "CurrentAmmoInClip", nullptr, (EPropertyFlags)0x0020080000002020, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeapon, CurrentAmmoInClip), METADATA_PARAMS(Z_Construct_UClass_ASWeapon_Statics::NewProp_CurrentAmmoInClip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASWeapon_Statics::NewProp_CurrentAmmoInClip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeapon_Statics::NewProp_StartAmmo_MetaData[] = {
		{ "Category", "SWeapon" },
		{ "Comment", "/* Weapon ammo on spawn */" },
		{ "ModuleRelativePath", "Public/Items/SWeapon.h" },
		{ "ToolTip", "Weapon ammo on spawn" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASWeapon_Statics::NewProp_StartAmmo = { "StartAmmo", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeapon, StartAmmo), METADATA_PARAMS(Z_Construct_UClass_ASWeapon_Statics::NewProp_StartAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASWeapon_Statics::NewProp_StartAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeapon_Statics::NewProp_MaxAmmo_MetaData[] = {
		{ "Category", "SWeapon" },
		{ "ModuleRelativePath", "Public/Items/SWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASWeapon_Statics::NewProp_MaxAmmo = { "MaxAmmo", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeapon, MaxAmmo), METADATA_PARAMS(Z_Construct_UClass_ASWeapon_Statics::NewProp_MaxAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASWeapon_Statics::NewProp_MaxAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeapon_Statics::NewProp_MaxAmmoPerClip_MetaData[] = {
		{ "Category", "SWeapon" },
		{ "ModuleRelativePath", "Public/Items/SWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASWeapon_Statics::NewProp_MaxAmmoPerClip = { "MaxAmmoPerClip", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeapon, MaxAmmoPerClip), METADATA_PARAMS(Z_Construct_UClass_ASWeapon_Statics::NewProp_MaxAmmoPerClip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASWeapon_Statics::NewProp_MaxAmmoPerClip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeapon_Statics::NewProp_ReloadSound_MetaData[] = {
		{ "Category", "Sounds" },
		{ "ModuleRelativePath", "Public/Items/SWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASWeapon_Statics::NewProp_ReloadSound = { "ReloadSound", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeapon, ReloadSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASWeapon_Statics::NewProp_ReloadSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASWeapon_Statics::NewProp_ReloadSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASWeapon_Statics::NewProp_ReloadAnim_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Items/SWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASWeapon_Statics::NewProp_ReloadAnim = { "ReloadAnim", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASWeapon, ReloadAnim), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASWeapon_Statics::NewProp_ReloadAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASWeapon_Statics::NewProp_ReloadAnim_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeapon_Statics::NewProp_ShotsPerMinute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeapon_Statics::NewProp_StorageSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeapon_Statics::NewProp_StorageSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeapon_Statics::NewProp_MyPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeapon_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeapon_Statics::NewProp_WeaponPickupClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeapon_Statics::NewProp_FireSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeapon_Statics::NewProp_EquipSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeapon_Statics::NewProp_MuzzleFX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeapon_Statics::NewProp_EquipAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeapon_Statics::NewProp_FireAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeapon_Statics::NewProp_MuzzlePSC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeapon_Statics::NewProp_MuzzleAttachPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeapon_Statics::NewProp_BurstCounter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeapon_Statics::NewProp_OutOfAmmoSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeapon_Statics::NewProp_NoAnimReloadDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeapon_Statics::NewProp_NoEquipAnimDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeapon_Statics::NewProp_bPendingReload,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeapon_Statics::NewProp_CurrentAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeapon_Statics::NewProp_CurrentAmmoInClip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeapon_Statics::NewProp_StartAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeapon_Statics::NewProp_MaxAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeapon_Statics::NewProp_MaxAmmoPerClip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeapon_Statics::NewProp_ReloadSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASWeapon_Statics::NewProp_ReloadAnim,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASWeapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASWeapon_Statics::ClassParams = {
		&ASWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASWeapon_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ASWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASWeapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASWeapon, 1003455711);
	template<> SURVIVALGAME_API UClass* StaticClass<ASWeapon>()
	{
		return ASWeapon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASWeapon(Z_Construct_UClass_ASWeapon, &ASWeapon::StaticClass, TEXT("/Script/SurvivalGame"), TEXT("ASWeapon"), false, nullptr, nullptr, nullptr);

	void ASWeapon::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_MyPawn(TEXT("MyPawn"));
		static const FName Name_BurstCounter(TEXT("BurstCounter"));
		static const FName Name_bPendingReload(TEXT("bPendingReload"));
		static const FName Name_CurrentAmmo(TEXT("CurrentAmmo"));
		static const FName Name_CurrentAmmoInClip(TEXT("CurrentAmmoInClip"));

		const bool bIsValid = true
			&& Name_MyPawn == ClassReps[(int32)ENetFields_Private::MyPawn].Property->GetFName()
			&& Name_BurstCounter == ClassReps[(int32)ENetFields_Private::BurstCounter].Property->GetFName()
			&& Name_bPendingReload == ClassReps[(int32)ENetFields_Private::bPendingReload].Property->GetFName()
			&& Name_CurrentAmmo == ClassReps[(int32)ENetFields_Private::CurrentAmmo].Property->GetFName()
			&& Name_CurrentAmmoInClip == ClassReps[(int32)ENetFields_Private::CurrentAmmoInClip].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASWeapon"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
