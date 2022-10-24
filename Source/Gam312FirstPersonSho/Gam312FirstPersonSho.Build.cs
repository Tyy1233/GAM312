// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Gam312FirstPersonSho : ModuleRules
{
	public Gam312FirstPersonSho(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
