using UnrealBuildTool;

public class DemoEditorExtensionsEditor : ModuleRules
{
	public DemoEditorExtensionsEditor(TargetInfo Target)
	{
		PublicDependencyModuleNames.AddRange(
			new string[] {
				"Core",
				"CoreUObject",
				"Engine",
				"Slate",
				"UnrealEd",
				"DemoEditorExtensionsRuntime"
			}
		);
		
		PrivateDependencyModuleNames.AddRange(
			new string[] {
				"InputCore",
				"SlateCore",
				"PropertyEditor",
				"LevelEditor"
			}
		);
	}
}