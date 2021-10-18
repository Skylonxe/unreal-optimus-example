// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UE5ThirdPersonCpp : ModuleRules
{
	public UE5ThirdPersonCpp(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[]
			{ "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "StructUtils" });
	}
}