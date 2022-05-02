#pragma once

#include "BaseEditorTool.h"
#include "MirrorTool2.generated.h"

UCLASS(Blueprintable)
class UMirrorTool2 : public UBaseEditorTool
{
	GENERATED_BODY()

public:
	UMirrorTool2();

public:
	UPROPERTY(EditAnywhere, Category = "Settings")
	FPlane MirrorPlane;

	UFUNCTION(Exec)
	void MirrorSelectedObjects();
};
