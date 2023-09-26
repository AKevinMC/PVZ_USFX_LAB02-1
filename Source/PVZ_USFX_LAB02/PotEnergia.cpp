// Fill out your copyright notice in the Description page of Project Settings.


#include "PotEnergia.h"

// Sets default values
APotEnergia::APotEnergia()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;



	static ConstructorHelpers::FObjectFinder<UStaticMesh> PotEnergiaMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));
	PotEnergiaMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PotEnergiaMesh"));
	PotEnergiaMeshComponent->SetStaticMesh(PotEnergiaMesh.Object);
	PotEnergiaMeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);


	//desaparecer despues de 2 segundos de haber sido creado
	InitialLifeSpan = 2.0f;

}

// Called when the game starts or when spawned
void APotEnergia::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APotEnergia::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

