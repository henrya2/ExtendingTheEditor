#include "DemoEditorExtensionsEditorPrivatePCH.h"
#include "DemoCommands.h"

#define LOCTEXT_NAMESPACE "DemoTools"

void FDemoCommands::RegisterCommands()
{
	UI_COMMAND(TestCommand, "Test Command", "Performs a test command", EUserInterfaceActionType::Button, FInputGesture());
}

#undef LOCTEXT_NAMESPACE
