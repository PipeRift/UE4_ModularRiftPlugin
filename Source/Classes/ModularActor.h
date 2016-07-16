// Copyright (C) 2016 PipeRift All Rights Reserved.

#pragma once

#include "GameFramework/Actor.h"
#include "ModularActor.generated.h"

/**
* ModularActor is the base class for an Actor that will have modular properties.
* This properties can be having a ModularSet or being attached to other ModularActors.
* 
*/
UCLASS(config = Game, meta = (ShortTooltip = "A modular object."))
class AModularActor : public AActor {
	GENERATED_UCLASS_BODY()

public:

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaSeconds) override;

	virtual bool ShouldTickIfViewportsOnly() const override { return true; };  // This enables Tick while in the editor

	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& e) override;


	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Rendering)
		UStaticMeshComponent *RootMesh;
};
