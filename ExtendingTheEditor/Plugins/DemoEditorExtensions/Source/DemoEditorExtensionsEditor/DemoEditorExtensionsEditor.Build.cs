using UnrealBuildTool;

public class DemoEditorExtensionsEditor : ModuleRules
{
	public DemoEditorExtensionsEditor(ReadOnlyTargetRules Target) : base(Target)
	{
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

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