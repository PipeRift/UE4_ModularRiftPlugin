// Copyright (C) 2016 PipeRift All Rights Reserved.

using UnrealBuildTool;
 
public class ModularRiftPlugin : ModuleRules {
    public ModularRiftPlugin(TargetInfo Target) {
        PublicDependencyModuleNames.AddRange(
            new string[] {
                "Core",
                "CoreUObject",
                "Engine",
                "InputCore",
                "PropertyEditor",
                "UnrealEd",
                "Slate",
                "SlateCore",
                "EditorStyle",
                "PlacementMode",
                "Projects"
            }
        );

        PrivateIncludePaths.AddRange(new string[] { "ModularRift/Private" });
        PublicIncludePaths.AddRange(new string[] { "ModularRift/Public" });

    }
}
