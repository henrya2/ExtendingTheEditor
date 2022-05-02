#include "MirrorTool2.h"
#include "DemoEditorExtensionsEditorPrivatePCH.h"
#include "ScopedTransaction.h"

#define LOCTEXT_NAMESPACE "DemoTools"

UMirrorTool2::UMirrorTool2()
	: Super(FObjectInitializer::Get())
{
	MirrorPlane = FPlane(1.0, 0.0f, 0.0f, 0.0f);
}

void UMirrorTool2::MirrorSelectedObjects()
{
	FScopedTransaction Transaction(LOCTEXT("MirrorAboutPlane", "Mirror about plane"));
	for (FSelectionIterator It(GEditor->GetSelectedActorIterator()); It; ++It)
	{
		if (AActor* Actor = Cast<AActor>(*It))
		{
			const FVector CurrentPos = Actor->GetActorLocation();
			const FVector NewPos = CurrentPos.MirrorByPlane(MirrorPlane);

			Actor->Modify();
			Actor->SetActorLocation(NewPos);
		}
	}
}

#undef LOCTEXT_NAMESPACE
