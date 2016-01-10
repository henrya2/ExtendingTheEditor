#pragma once

#include "BaseEditorTool.h"
#include "MirrorTool.generated.h"

UCLASS(Blueprintable)
class UMirrorTool : public UBaseEditorTool
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Category = "Settings")
	FPlane MirrorPlane;

	UFUNCTION(Exec)
	void MirrorSelectedObjects();
};
