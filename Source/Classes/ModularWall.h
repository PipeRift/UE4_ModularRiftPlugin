// Copyright (C) 2016 PipeRift All Rights Reserved.

#pragma once

#include "GameFramework/Actor.h"
#include "ModularWall.generated.h"

/**
* ModularWall is the base class for a ModularActor that will act as a wall, attaching itself with floors.
* Will have a ModularSet to define its style, and can have different variations.
*
* @see AModularActor
*/
UCLASS(meta = (ShortTooltip = "A modular wall."))
class AModularWall : public AModularActor {
	GENERATED_UCLASS_BODY()

public:

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaSeconds) override;
};