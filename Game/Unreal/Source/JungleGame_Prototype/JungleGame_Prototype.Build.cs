// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class JungleGame_Prototype : ModuleRules
{
	public JungleGame_Prototype(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
