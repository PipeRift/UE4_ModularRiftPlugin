// Copyright (C) 2016 PipeRift All Rights Reserved.

#include "ModularRiftPCH.h"

#include "ModularRiftPlugin.h"
#include "EdModeStyle.h"
 

DEFINE_LOG_CATEGORY(SkunkLog_ModularRift);

void ModularRiftPlugin::StartupModule()
{
	UE_LOG(SkunkLog_ModularRift, Log, TEXT("-----ModularRiftPlugin::StartupModule"));

	// Register the style (for the mode tab)
	EdModeStyle::Initialize();
	EdModeStyle::ReloadTextures();

}
 
void ModularRiftPlugin::ShutdownModule()
{
	UE_LOG(SkunkLog_ModularRift, Log, TEXT("-----ModularRiftPlugin::ShutdownModule"));
}
 
IMPLEMENT_MODULE(ModularRiftPlugin, Module)