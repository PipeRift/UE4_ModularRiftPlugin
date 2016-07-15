// Copyright (C) 2016 PipeRift All Rights Reserved.

#pragma once

#include "SlateBasics.h"


class EdModeStyle {
public:

	static void Initialize();

	static void Shutdown();

	/** reloads textures used by slate renderer */
	static void ReloadTextures();

	/** @return The Slate style set */
	static const ISlateStyle& Get();

	static FName GetStyleSetName();

private:
	static TSharedRef <class FSlateStyleSet> Create();
	static TSharedPtr <class FSlateStyleSet> StyleInstance;
};
