// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class C_test : ModuleRules
{
	public C_test(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
