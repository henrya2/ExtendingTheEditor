#pragma once

#include "BaseEditorTool.generated.h"

UCLASS(Blueprintable, Abstract)
class UBaseEditorTool : public UObject
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, Category = "Hidden")
	FText HelpText;
};