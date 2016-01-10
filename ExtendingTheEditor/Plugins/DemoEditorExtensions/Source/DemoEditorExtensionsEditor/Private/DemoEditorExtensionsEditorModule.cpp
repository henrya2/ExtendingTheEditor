#include "DemoEditorExtensionsEditorPrivatePCH.h"
#include "BaseEditorTool.h"
#include "PropertyEditorModule.h"
#include "BaseEditorToolCustomization.h"

#define LOCTEXT_NAMESPACE "DemoTools"

class FDemoEditorExtensionsEditorModule : public IModuleInterface
{
public:
	// IMoudleInterface interface
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	// End of IModuleInterface interface

	static void TriggerTool(UClass* ToolClass);
	static void CreateToolListMenu(class FMenuBuilder& MenuBuilder);
	static void OnToolWindowClosed(const TSharedRef<SWindow>& Window, UBaseEditorTool* Instance);
};

void FDemoEditorExtensionsEditorModule::StartupModule()
{
	// Register the details customizations
	{
		FPropertyEditorModule& PropertyModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>(TEXT("PropertyEditor"));
		PropertyModule.RegisterCustomClassLayout(TEXT("BaseEditorTool"), FOnGetDetailCustomizationInstance::CreateStatic(&FBaseEditorToolCustomization::MakeInstance));
	}
}

void FDemoEditorExtensionsEditorModule::ShutdownModule()
{

}

void FDemoEditorExtensionsEditorModule::TriggerTool(UClass* ToolClass)
{

}

void FDemoEditorExtensionsEditorModule::CreateToolListMenu(class FMenuBuilder& MenuBuilder)
{

}

void FDemoEditorExtensionsEditorModule::OnToolWindowClosed(const TSharedRef<SWindow>& Window, UBaseEditorTool* Instance)
{
	Instance->RemoveFromRoot();
}

IMPLEMENT_MODULE(FDemoEditorExtensionsEditorModule, DemoEditorExtensionsEditor);