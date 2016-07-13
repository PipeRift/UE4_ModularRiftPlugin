// Copyright (C) 2016 PipeRift All Rights Reserved.

#include "ModularRiftPCH.h"

#include "ModularRift.h"
#include "EdModeStyle.h"
 

DEFINE_LOG_CATEGORY(SkunkLog_ModularRift);

void ModularRiftImpl::StartupModule()
{
	UE_LOG(SkunkLog_ModularRift, Log, TEXT("-----ModularRift::StartupModule"));

	// Register the style (for the mode tab)
	EdModeStyle::Initialize();
	EdModeStyle::ReloadTextures();

}
 
void ModularRiftImpl::ShutdownModule()
{
	UE_LOG(SkunkLog_ModularRift, Log, TEXT("-----ModularRift::ShutdownModule"));
}
 
IMPLEMENT_MODULE(ModularRiftImpl, Module)