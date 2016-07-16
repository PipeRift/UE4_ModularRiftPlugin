// Copyright (C) 2016 PipeRift All Rights Reserved.

#pragma once

#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "ModularFloor.generated.h"

/**
* ModularFloor is the class for a modular floor that can be placed or attached to others in the level.
* Floors can have a ModularSet to define it main style and different variations.
*
* @see AModularActor
*/
UCLASS(meta = (ShortTooltip = "A modular floor."))
class AModularFloor : public AModularActor {
	GENERATED_UCLASS_BODY()

public:

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaSeconds) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Rendering)
		UBoxComponent *StickyArea;
};