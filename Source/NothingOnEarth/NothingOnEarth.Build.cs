// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class NothingOnEarth : ModuleRules
{
	public NothingOnEarth(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
