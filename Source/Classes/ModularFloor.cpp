// Copyright (C) 2016 PipeRift All Rights Reserved.

#include "ModularRiftPCH.h"
#include "ModularFloor.h"


// Sets default values
AModularFloor::AModularFloor(const FObjectInitializer &ObjectInitializer) : Super(ObjectInitializer) {

	// Set this actor to NOT call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	this->SetActorTickEnabled(false);
	//bTickInEditor = true;

	// A box component to act as the sticky area for walls
	StickyArea = CreateDefaultSubobject <UBoxComponent>(TEXT("StickyArea"));
	StickyArea->AttachToComponent(RootMesh, FAttachmentTransformRules::KeepRelativeTransform);
}

void AModularFloor::BeginPlay() {
	Super::BeginPlay();
}

void AModularFloor::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
}