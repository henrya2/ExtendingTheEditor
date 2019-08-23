using UnrealBuildTool;

public class DemoEditorExtensionsRuntime : ModuleRules
{
	public DemoEditorExtensionsRuntime(ReadOnlyTargetRules Target) : base(Target)
	{
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(
			new string[] {
				"Core",
				"CoreUObject",
				"Engine",
				"Slate"
			}
		);
	}
}