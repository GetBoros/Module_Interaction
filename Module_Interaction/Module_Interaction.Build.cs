using UnrealBuildTool;

public class Module_Interaction : ModuleRules
{
	public Module_Interaction(ReadOnlyTargetRules Target) : base(Target)  // Make visible to Unreal build system
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
