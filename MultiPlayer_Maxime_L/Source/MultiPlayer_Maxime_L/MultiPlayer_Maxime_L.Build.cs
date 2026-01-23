// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MultiPlayer_Maxime_L : ModuleRules
{
	public MultiPlayer_Maxime_L(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"MultiPlayer_Maxime_L",
			"MultiPlayer_Maxime_L/Variant_Horror",
			"MultiPlayer_Maxime_L/Variant_Horror/UI",
			"MultiPlayer_Maxime_L/Variant_Shooter",
			"MultiPlayer_Maxime_L/Variant_Shooter/AI",
			"MultiPlayer_Maxime_L/Variant_Shooter/UI",
			"MultiPlayer_Maxime_L/Variant_Shooter/Weapons"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
