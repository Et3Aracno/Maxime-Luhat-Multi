// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiPlayer_Maxime_LCameraManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMultiPlayer_Maxime_LCameraManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
MULTIPLAYER_MAXIME_L_API UClass* Z_Construct_UClass_AMultiPlayer_Maxime_LCameraManager();
MULTIPLAYER_MAXIME_L_API UClass* Z_Construct_UClass_AMultiPlayer_Maxime_LCameraManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_MultiPlayer_Maxime_L();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMultiPlayer_Maxime_LCameraManager ***************************************
void AMultiPlayer_Maxime_LCameraManager::StaticRegisterNativesAMultiPlayer_Maxime_LCameraManager()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMultiPlayer_Maxime_LCameraManager;
UClass* AMultiPlayer_Maxime_LCameraManager::GetPrivateStaticClass()
{
	using TClass = AMultiPlayer_Maxime_LCameraManager;
	if (!Z_Registration_Info_UClass_AMultiPlayer_Maxime_LCameraManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MultiPlayer_Maxime_LCameraManager"),
			Z_Registration_Info_UClass_AMultiPlayer_Maxime_LCameraManager.InnerSingleton,
			StaticRegisterNativesAMultiPlayer_Maxime_LCameraManager,
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
	return Z_Registration_Info_UClass_AMultiPlayer_Maxime_LCameraManager.InnerSingleton;
}
UClass* Z_Construct_UClass_AMultiPlayer_Maxime_LCameraManager_NoRegister()
{
	return AMultiPlayer_Maxime_LCameraManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMultiPlayer_Maxime_LCameraManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Basic First Person camera manager.\n *  Limits min/max look pitch.\n */" },
#endif
		{ "IncludePath", "MultiPlayer_Maxime_LCameraManager.h" },
		{ "ModuleRelativePath", "MultiPlayer_Maxime_LCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic First Person camera manager.\nLimits min/max look pitch." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMultiPlayer_Maxime_LCameraManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMultiPlayer_Maxime_LCameraManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
	(UObject* (*)())Z_Construct_UPackage__Script_MultiPlayer_Maxime_L,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiPlayer_Maxime_LCameraManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMultiPlayer_Maxime_LCameraManager_Statics::ClassParams = {
	&AMultiPlayer_Maxime_LCameraManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiPlayer_Maxime_LCameraManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AMultiPlayer_Maxime_LCameraManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMultiPlayer_Maxime_LCameraManager()
{
	if (!Z_Registration_Info_UClass_AMultiPlayer_Maxime_LCameraManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMultiPlayer_Maxime_LCameraManager.OuterSingleton, Z_Construct_UClass_AMultiPlayer_Maxime_LCameraManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMultiPlayer_Maxime_LCameraManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMultiPlayer_Maxime_LCameraManager);
AMultiPlayer_Maxime_LCameraManager::~AMultiPlayer_Maxime_LCameraManager() {}
// ********** End Class AMultiPlayer_Maxime_LCameraManager *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Aracno_Documents_GitHub_Maxime_Luhat_Multi_MultiPlayer_Maxime_L_Source_MultiPlayer_Maxime_L_MultiPlayer_Maxime_LCameraManager_h__Script_MultiPlayer_Maxime_L_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMultiPlayer_Maxime_LCameraManager, AMultiPlayer_Maxime_LCameraManager::StaticClass, TEXT("AMultiPlayer_Maxime_LCameraManager"), &Z_Registration_Info_UClass_AMultiPlayer_Maxime_LCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMultiPlayer_Maxime_LCameraManager), 1380762082U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Aracno_Documents_GitHub_Maxime_Luhat_Multi_MultiPlayer_Maxime_L_Source_MultiPlayer_Maxime_L_MultiPlayer_Maxime_LCameraManager_h__Script_MultiPlayer_Maxime_L_2634837313(TEXT("/Script/MultiPlayer_Maxime_L"),
	Z_CompiledInDeferFile_FID_Users_Aracno_Documents_GitHub_Maxime_Luhat_Multi_MultiPlayer_Maxime_L_Source_MultiPlayer_Maxime_L_MultiPlayer_Maxime_LCameraManager_h__Script_MultiPlayer_Maxime_L_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Aracno_Documents_GitHub_Maxime_Luhat_Multi_MultiPlayer_Maxime_L_Source_MultiPlayer_Maxime_L_MultiPlayer_Maxime_LCameraManager_h__Script_MultiPlayer_Maxime_L_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
