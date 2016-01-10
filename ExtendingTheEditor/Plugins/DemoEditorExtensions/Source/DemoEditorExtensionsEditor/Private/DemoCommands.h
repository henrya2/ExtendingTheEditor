#pragma once

#include "DemoStyle.h"

class FDemoCommands : public TCommands<FDemoCommands>
{
public:
	FDemoCommands()
		: TCommands<FDemoCommands>(
			TEXT("DemoEditorExtensions"), // Context name for fast lookup
			NSLOCTEXT("Contents", "DemoEditor", "Demo Editor"),
			NAME_None, // Parent
			FDemoStyle::Get()->GetStyleSetName() // Icon Style Set
			)
	{
	}

	// TCommand<> interface
	void RegisterCommands() override;
	// End of TCommand<> interface

public:
	TSharedPtr<FUICommandInfo> TestCommand;
};
