#include "DemoEditorExtensionsEditorPrivatePCH.h"

#define LOCTEXT_NAMESPACE "DemoTools"

class FDemoEditorExtensionsEditorModule : public IModuleInterface
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};

void FDemoEditorExtensionsEditorModule::StartupModule()
{

}

void FDemoEditorExtensionsEditorModule::ShutdownModule()
{

}

IMPLEMENT_MODULE(FDemoEditorExtensionsEditorModule, DemoEditorExtensionsEditor);