// Copyright (C) 2016 PipeRift All Rights Reserved.

#include "ModularRiftPCH.h"
#include "ModularActor.h"


// Sets default values
AModularActor::AModularActor(const FObjectInitializer &ObjectInitializer) : Super(ObjectInitializer) {
	UE_LOG(SkunkLog_ModularRift, Log, TEXT("-----AModularActor::AModularActor - Creating a new modular object"));

	// Set this actor to NOT call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	this->SetActorTickEnabled(false);
	//bTickInEditor = true;

	// A sphere component to act as root component of the actor
	RootMesh = CreateDefaultSubobject <UStaticMeshComponent>(TEXT("Mesh"));
	//RootMesh->SetDynamic(false);
	RootComponent = RootMesh;

	//Update();      // Sets background colour of the sticky note and adds the text
}

// Called when the game starts or when spawned
void AModularActor::BeginPlay() {
	Super::BeginPlay();
}

// Called every frame
void AModularActor::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
}

// Called when properties are changed
void AModularActor::PostEditChangeProperty(struct FPropertyChangedEvent &e) {
	UE_LOG(SkunkLog_ModularRift, Log, TEXT("-----AModularActor::PostEditChangeProperty"));

	Super::PostEditChangeProperty(e);

	//Update();
}

#undef LOCTEXT_NAMESPACE