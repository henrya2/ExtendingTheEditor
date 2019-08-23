using UnrealBuildTool;

public class DemoEditorExtensionsRuntime : ModuleRules
{
	public DemoEditorExtensionsRuntime(ReadOnlyTargetRules Target) : base(Target)
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