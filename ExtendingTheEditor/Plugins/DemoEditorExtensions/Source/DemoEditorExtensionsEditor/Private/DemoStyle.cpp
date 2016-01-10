#include "DemoEditorExtensionsEditorPrivatePCH.h"
#include "DemoStyle.h"

void FDemoStyle::Initialize()
{
	// Only register once
	if (StyleSet.IsValid())
	{
		return;
	}

	StyleSet = MakeShareable(new FSlateStyleSet(GetStyleSetName()));

	FSlateStyleRegistry::RegisterSlateStyle(*StyleSet.Get());
}

void FDemoStyle::Shutdown()
{
	if (StyleSet.IsValid())
	{
		FSlateStyleRegistry::UnRegisterSlateStyle(*StyleSet.Get());
		ensure(StyleSet.IsUnique());
		StyleSet.Reset();
	}
}

TSharedPtr< class FSlateStyleSet > FDemoStyle::StyleSet = nullptr;

TSharedPtr< class ISlateStyle > FDemoStyle::Get()
{
	return StyleSet;
}

FName FDemoStyle::GetStyleSetName()
{
	return TEXT("DemoStyle");
}
