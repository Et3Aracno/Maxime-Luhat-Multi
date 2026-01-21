// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiPlayer_Maxime_LCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMultiPlayer_Maxime_LCharacter() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
MULTIPLAYER_MAXIME_L_API UClass* Z_Construct_UClass_AMultiPlayer_Maxime_LCharacter();
MULTIPLAYER_MAXIME_L_API UClass* Z_Construct_UClass_AMultiPlayer_Maxime_LCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_MultiPlayer_Maxime_L();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMultiPlayer_Maxime_LCharacter Function DoAim ****************************
struct Z_Construct_UFunction_AMultiPlayer_Maxime_LCharacter_DoAim_Statics
{
	struct MultiPlayer_Maxime_LCharacter_eventDoAim_Parms
	{
		float Yaw;
		float Pitch;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles aim inputs from either controls or UI interfaces */" },
#endif
		{ "ModuleRelativePath", "MultiPlayer_Maxime_LCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles aim inputs from either controls or UI interfaces" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Yaw;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Pitch;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMultiPlayer_Maxime_LCharacter_DoAim_Statics::NewProp_Yaw = { "Yaw", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiPlayer_Maxime_LCharacter_eventDoAim_Parms, Yaw), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMultiPlayer_Maxime_LCharacter_DoAim_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiPlayer_Maxime_LCharacter_eventDoAim_Parms, Pitch), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiPlayer_Maxime_LCharacter_DoAim_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiPlayer_Maxime_LCharacter_DoAim_Statics::NewProp_Yaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiPlayer_Maxime_LCharacter_DoAim_Statics::NewProp_Pitch,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiPlayer_Maxime_LCharacter_DoAim_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiPlayer_Maxime_LCharacter_DoAim_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMultiPlayer_Maxime_LCharacter, nullptr, "DoAim", Z_Construct_UFunction_AMultiPlayer_Maxime_LCharacter_DoAim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiPlayer_Maxime_LCharacter_DoAim_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiPlayer_Maxime_LCharacter_DoAim_Statics::MultiPlayer_Maxime_LCharacter_eventDoAim_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiPlayer_Maxime_LCharacter_DoAim_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiPlayer_Maxime_LCharacter_DoAim_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMultiPlayer_Maxime_LCharacter_DoAim_Statics::MultiPlayer_Maxime_LCharacter_eventDoAim_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiPlayer_Maxime_LCharacter_DoAim()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiPlayer_Maxime_LCharacter_DoAim_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiPlayer_Maxime_LCharacter::execDoAim)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Yaw);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Pitch);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoAim(Z_Param_Yaw,Z_Param_Pitch);
	P_NATIVE_END;
}
// ********** End Class AMultiPlayer_Maxime_LCharacter Function DoAim ******************************

// ********** Begin Class AMultiPlayer_Maxime_LCharacter Function DoJumpEnd ************************
struct Z_Construct_UFunction_AMultiPlayer_Maxime_LCharacter_DoJumpEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles jump end inputs from either controls or UI interfaces */" },
#endif
		{ "ModuleRelativePath", "MultiPlayer_Maxime_LCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles jump end inputs from either controls or UI interfaces" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiPlayer_Maxime_LCharacter_DoJumpEnd_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMultiPlayer_Maxime_LCharacter, nullptr, "DoJumpEnd", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiPlayer_Maxime_LCharacter_DoJumpEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiPlayer_Maxime_LCharacter_DoJumpEnd_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AMultiPlayer_Maxime_LCharacter_DoJumpEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiPlayer_Maxime_LCharacter_DoJumpEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiPlayer_Maxime_LCharacter::execDoJumpEnd)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoJumpEnd();
	P_NATIVE_END;
}
// ********** End Class AMultiPlayer_Maxime_LCharacter Function DoJumpEnd **************************

// ********** Begin Class AMultiPlayer_Maxime_LCharacter Function DoJumpStart **********************
struct Z_Construct_UFunction_AMultiPlayer_Maxime_LCharacter_DoJumpStart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles jump start inputs from either controls or UI interfaces */" },
#endif
		{ "ModuleRelativePath", "MultiPlayer_Maxime_LCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles jump start inputs from either controls or UI interfaces" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiPlayer_Maxime_LCharacter_DoJumpStart_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMultiPlayer_Maxime_LCharacter, nullptr, "DoJumpStart", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiPlayer_Maxime_LCharacter_DoJumpStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiPlayer_Maxime_LCharacter_DoJumpStart_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AMultiPlayer_Maxime_LCharacter_DoJumpStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiPlayer_Maxime_LCharacter_DoJumpStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiPlayer_Maxime_LCharacter::execDoJumpStart)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoJumpStart();
	P_NATIVE_END;
}
// ********** End Class AMultiPlayer_Maxime_LCharacter Function DoJumpStart ************************

// ********** Begin Class AMultiPlayer_Maxime_LCharacter Function DoMove ***************************
struct Z_Construct_UFunction_AMultiPlayer_Maxime_LCharacter_DoMove_Statics
{
	struct MultiPlayer_Maxime_LCharacter_eventDoMove_Parms
	{
		float Right;
		float Forward;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles move inputs from either controls or UI interfaces */" },
#endif
		{ "ModuleRelativePath", "MultiPlayer_Maxime_LCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles move inputs from either controls or UI interfaces" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Right;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Forward;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMultiPlayer_Maxime_LCharacter_DoMove_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiPlayer_Maxime_LCharacter_eventDoMove_Parms, Right), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMultiPlayer_Maxime_LCharacter_DoMove_Statics::NewProp_Forward = { "Forward", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiPlayer_Maxime_LCharacter_eventDoMove_Parms, Forward), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiPlayer_Maxime_LCharacter_DoMove_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiPlayer_Maxime_LCharacter_DoMove_Statics::NewProp_Right,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiPlayer_Maxime_LCharacter_DoMove_Statics::NewProp_Forward,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiPlayer_Maxime_LCharacter_DoMove_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiPlayer_Maxime_LCharacter_DoMove_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMultiPlayer_Maxime_LCharacter, nullptr, "DoMove", Z_Construct_UFunction_AMultiPlayer_Maxime_LCharacter_DoMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiPlayer_Maxime_LCharacter_DoMove_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiPlayer_Maxime_LCharacter_DoMove_Statics::MultiPlayer_Maxime_LCharacter_eventDoMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiPlayer_Maxime_LCharacter_DoMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiPlayer_Maxime_LCharacter_DoMove_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMultiPlayer_Maxime_LCharacter_DoMove_Statics::MultiPlayer_Maxime_LCharacter_eventDoMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiPlayer_Maxime_LCharacter_DoMove()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiPlayer_Maxime_LCharacter_DoMove_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiPlayer_Maxime_LCharacter::execDoMove)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Right);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Forward);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoMove(Z_Param_Right,Z_Param_Forward);
	P_NATIVE_END;
}
// ********** End Class AMultiPlayer_Maxime_LCharacter Function DoMove *****************************

// ********** Begin Class AMultiPlayer_Maxime_LCharacter *******************************************
void AMultiPlayer_Maxime_LCharacter::StaticRegisterNativesAMultiPlayer_Maxime_LCharacter()
{
	UClass* Class = AMultiPlayer_Maxime_LCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DoAim", &AMultiPlayer_Maxime_LCharacter::execDoAim },
		{ "DoJumpEnd", &AMultiPlayer_Maxime_LCharacter::execDoJumpEnd },
		{ "DoJumpStart", &AMultiPlayer_Maxime_LCharacter::execDoJumpStart },
		{ "DoMove", &AMultiPlayer_Maxime_LCharacter::execDoMove },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMultiPlayer_Maxime_LCharacter;
UClass* AMultiPlayer_Maxime_LCharacter::GetPrivateStaticClass()
{
	using TClass = AMultiPlayer_Maxime_LCharacter;
	if (!Z_Registration_Info_UClass_AMultiPlayer_Maxime_LCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MultiPlayer_Maxime_LCharacter"),
			Z_Registration_Info_UClass_AMultiPlayer_Maxime_LCharacter.InnerSingleton,
			StaticRegisterNativesAMultiPlayer_Maxime_LCharacter,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AMultiPlayer_Maxime_LCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_AMultiPlayer_Maxime_LCharacter_NoRegister()
{
	return AMultiPlayer_Maxime_LCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMultiPlayer_Maxime_LCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  A basic first person character\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MultiPlayer_Maxime_LCharacter.h" },
		{ "ModuleRelativePath", "MultiPlayer_Maxime_LCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A basic first person character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pawn mesh: first person view (arms; seen only by self) */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MultiPlayer_Maxime_LCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pawn mesh: first person view (arms; seen only by self)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** First person camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MultiPlayer_Maxime_LCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "First person camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "MultiPlayer_Maxime_LCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "MultiPlayer_Maxime_LCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "MultiPlayer_Maxime_LCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseLookAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Mouse Look Input Action */" },
#endif
		{ "ModuleRelativePath", "MultiPlayer_Maxime_LCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mouse Look Input Action" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MouseLookAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMultiPlayer_Maxime_LCharacter_DoAim, "DoAim" }, // 1078638256
		{ &Z_Construct_UFunction_AMultiPlayer_Maxime_LCharacter_DoJumpEnd, "DoJumpEnd" }, // 2999441533
		{ &Z_Construct_UFunction_AMultiPlayer_Maxime_LCharacter_DoJumpStart, "DoJumpStart" }, // 692125433
		{ &Z_Construct_UFunction_AMultiPlayer_Maxime_LCharacter_DoMove, "DoMove" }, // 2482216868
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMultiPlayer_Maxime_LCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiPlayer_Maxime_LCharacter_Statics::NewProp_FirstPersonMesh = { "FirstPersonMesh", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiPlayer_Maxime_LCharacter, FirstPersonMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstPersonMesh_MetaData), NewProp_FirstPersonMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiPlayer_Maxime_LCharacter_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiPlayer_Maxime_LCharacter, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstPersonCameraComponent_MetaData), NewProp_FirstPersonCameraComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiPlayer_Maxime_LCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiPlayer_Maxime_LCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiPlayer_Maxime_LCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiPlayer_Maxime_LCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiPlayer_Maxime_LCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiPlayer_Maxime_LCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiPlayer_Maxime_LCharacter_Statics::NewProp_MouseLookAction = { "MouseLookAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiPlayer_Maxime_LCharacter, MouseLookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseLookAction_MetaData), NewProp_MouseLookAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMultiPlayer_Maxime_LCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiPlayer_Maxime_LCharacter_Statics::NewProp_FirstPersonMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiPlayer_Maxime_LCharacter_Statics::NewProp_FirstPersonCameraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiPlayer_Maxime_LCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiPlayer_Maxime_LCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiPlayer_Maxime_LCharacter_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiPlayer_Maxime_LCharacter_Statics::NewProp_MouseLookAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiPlayer_Maxime_LCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMultiPlayer_Maxime_LCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_MultiPlayer_Maxime_L,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiPlayer_Maxime_LCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMultiPlayer_Maxime_LCharacter_Statics::ClassParams = {
	&AMultiPlayer_Maxime_LCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMultiPlayer_Maxime_LCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMultiPlayer_Maxime_LCharacter_Statics::PropPointers),
	0,
	0x008001A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiPlayer_Maxime_LCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AMultiPlayer_Maxime_LCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMultiPlayer_Maxime_LCharacter()
{
	if (!Z_Registration_Info_UClass_AMultiPlayer_Maxime_LCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMultiPlayer_Maxime_LCharacter.OuterSingleton, Z_Construct_UClass_AMultiPlayer_Maxime_LCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMultiPlayer_Maxime_LCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMultiPlayer_Maxime_LCharacter);
AMultiPlayer_Maxime_LCharacter::~AMultiPlayer_Maxime_LCharacter() {}
// ********** End Class AMultiPlayer_Maxime_LCharacter *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_mluhat_Documents_GitHub_Maxime_Luhat_Multi_MultiPlayer_Maxime_L_Source_MultiPlayer_Maxime_L_MultiPlayer_Maxime_LCharacter_h__Script_MultiPlayer_Maxime_L_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMultiPlayer_Maxime_LCharacter, AMultiPlayer_Maxime_LCharacter::StaticClass, TEXT("AMultiPlayer_Maxime_LCharacter"), &Z_Registration_Info_UClass_AMultiPlayer_Maxime_LCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMultiPlayer_Maxime_LCharacter), 1395922107U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mluhat_Documents_GitHub_Maxime_Luhat_Multi_MultiPlayer_Maxime_L_Source_MultiPlayer_Maxime_L_MultiPlayer_Maxime_LCharacter_h__Script_MultiPlayer_Maxime_L_3370493189(TEXT("/Script/MultiPlayer_Maxime_L"),
	Z_CompiledInDeferFile_FID_Users_mluhat_Documents_GitHub_Maxime_Luhat_Multi_MultiPlayer_Maxime_L_Source_MultiPlayer_Maxime_L_MultiPlayer_Maxime_LCharacter_h__Script_MultiPlayer_Maxime_L_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mluhat_Documents_GitHub_Maxime_Luhat_Multi_MultiPlayer_Maxime_L_Source_MultiPlayer_Maxime_L_MultiPlayer_Maxime_LCharacter_h__Script_MultiPlayer_Maxime_L_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
