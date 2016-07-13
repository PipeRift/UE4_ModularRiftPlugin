// Copyright (C) 2016 PipeRift All Rights Reserved.

using UnrealBuildTool;
using System.IO;
 
public class ModularRift : ModuleRules
{
    public ModularRift(TargetInfo Target)
    {
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "InputCore",
            "Landscape",
            "PropertyEditor",
            "UnrealEd"
        });

        PrivateIncludePaths.AddRange(new string[] { "ModularRift/Private" });
        PublicIncludePaths.AddRange(new string[] { "ModularRift/Public" });

    }
}