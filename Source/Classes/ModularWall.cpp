// Copyright (C) 2016 PipeRift All Rights Reserved.

#include "ModularRiftPCH.h"
#include "ModularWall.h"


AModularWall::AModularWall(const FObjectInitializer &ObjectInitializer) : Super(ObjectInitializer) {

	// Set this actor to NOT call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	this->SetActorTickEnabled(false);
	//bTickInEditor = true;
}

void AModularWall::BeginPlay() {
	Super::BeginPlay();
}

void AModularWall::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
}