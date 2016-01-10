using UnrealBuildTool;

public class DemoEditorExtensionsRuntime : ModuleRules
{
	public DemoEditorExtensionsRuntime(TargetInfo Target)
	{
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