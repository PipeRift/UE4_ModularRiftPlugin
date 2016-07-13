// Copyright (C) 2016 PipeRift All Rights Reserved.

#pragma once
 
#include "ModuleManager.h"
#include "LevelEditor.h"
#include "LevelEditorActions.h"
#include "SharedPointer.h"
 
class ModularRiftImpl : public IModuleInterface
{
public:
	/** IModuleInterface implementation */
	void StartupModule();
	void ShutdownModule();

private:
	void AddMainToolbarTab();
	void RegisterEdModeUsingFactory();
	void RegisterEdMode();
	void AddEditorModeExtension();
	void RegisterCommands();

	void AddToolbarExtension(FToolBarBuilder &);

	TSharedPtr <FUICommandList> MyPluginCommands;
	TSharedPtr <FExtensibilityManager> MyExtensionManager;

	TSharedPtr <FExtender> stickyNoteModeExtender;
	TSharedPtr <const FExtensionBase> ToolbarExtension;
};