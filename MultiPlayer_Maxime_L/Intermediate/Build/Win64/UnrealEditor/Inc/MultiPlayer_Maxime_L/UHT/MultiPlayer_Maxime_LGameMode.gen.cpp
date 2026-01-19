// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiPlayer_Maxime_LGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMultiPlayer_Maxime_LGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
MULTIPLAYER_MAXIME_L_API UClass* Z_Construct_UClass_AMultiPlayer_Maxime_LGameMode();
MULTIPLAYER_MAXIME_L_API UClass* Z_Construct_UClass_AMultiPlayer_Maxime_LGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_MultiPlayer_Maxime_L();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMultiPlayer_Maxime_LGameMode ********************************************
void AMultiPlayer_Maxime_LGameMode::StaticRegisterNativesAMultiPlayer_Maxime_LGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMultiPlayer_Maxime_LGameMode;
UClass* AMultiPlayer_Maxime_LGameMode::GetPrivateStaticClass()
{
	using TClass = AMultiPlayer_Maxime_LGameMode;
	if (!Z_Registration_Info_UClass_AMultiPlayer_Maxime_LGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MultiPlayer_Maxime_LGameMode"),
			Z_Registration_Info_UClass_AMultiPlayer_Maxime_LGameMode.InnerSingleton,
			StaticRegisterNativesAMultiPlayer_Maxime_LGameMode,
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
	return Z_Registration_Info_UClass_AMultiPlayer_Maxime_LGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AMultiPlayer_Maxime_LGameMode_NoRegister()
{
	return AMultiPlayer_Maxime_LGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMultiPlayer_Maxime_LGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a first person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MultiPlayer_Maxime_LGameMode.h" },
		{ "ModuleRelativePath", "MultiPlayer_Maxime_LGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a first person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMultiPlayer_Maxime_LGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMultiPlayer_Maxime_LGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MultiPlayer_Maxime_L,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiPlayer_Maxime_LGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMultiPlayer_Maxime_LGameMode_Statics::ClassParams = {
	&AMultiPlayer_Maxime_LGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiPlayer_Maxime_LGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AMultiPlayer_Maxime_LGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMultiPlayer_Maxime_LGameMode()
{
	if (!Z_Registration_Info_UClass_AMultiPlayer_Maxime_LGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMultiPlayer_Maxime_LGameMode.OuterSingleton, Z_Construct_UClass_AMultiPlayer_Maxime_LGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMultiPlayer_Maxime_LGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMultiPlayer_Maxime_LGameMode);
AMultiPlayer_Maxime_LGameMode::~AMultiPlayer_Maxime_LGameMode() {}
// ********** End Class AMultiPlayer_Maxime_LGameMode **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Aracno_Documents_GitHub_Maxime_Luhat_Multi_MultiPlayer_Maxime_L_Source_MultiPlayer_Maxime_L_MultiPlayer_Maxime_LGameMode_h__Script_MultiPlayer_Maxime_L_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMultiPlayer_Maxime_LGameMode, AMultiPlayer_Maxime_LGameMode::StaticClass, TEXT("AMultiPlayer_Maxime_LGameMode"), &Z_Registration_Info_UClass_AMultiPlayer_Maxime_LGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMultiPlayer_Maxime_LGameMode), 1032066266U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Aracno_Documents_GitHub_Maxime_Luhat_Multi_MultiPlayer_Maxime_L_Source_MultiPlayer_Maxime_L_MultiPlayer_Maxime_LGameMode_h__Script_MultiPlayer_Maxime_L_3696000516(TEXT("/Script/MultiPlayer_Maxime_L"),
	Z_CompiledInDeferFile_FID_Users_Aracno_Documents_GitHub_Maxime_Luhat_Multi_MultiPlayer_Maxime_L_Source_MultiPlayer_Maxime_L_MultiPlayer_Maxime_LGameMode_h__Script_MultiPlayer_Maxime_L_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Aracno_Documents_GitHub_Maxime_Luhat_Multi_MultiPlayer_Maxime_L_Source_MultiPlayer_Maxime_L_MultiPlayer_Maxime_LGameMode_h__Script_MultiPlayer_Maxime_L_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
