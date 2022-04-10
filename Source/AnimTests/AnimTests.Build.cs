// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class AnimTests : ModuleRules
{
	public AnimTests(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { 
			"Core", "CoreUObject", "Engine",
			"InputCore", "HeadMountedDisplay",
			"ControlRig", "RigVM", "FullBodyIK" });
	}
}
