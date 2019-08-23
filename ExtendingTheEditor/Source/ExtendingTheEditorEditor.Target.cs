// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class ExtendingTheEditorEditorTarget : TargetRules
{
	public ExtendingTheEditorEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		
		ExtraModuleNames.AddRange( new string[] { "ExtendingTheEditor" } );
	}
}
