// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PotEnergia.generated.h"

UCLASS()
class PVZ_USFX_LAB02_API APotEnergia : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APotEnergia();

	UPROPERTY(EditAnywhere)
	class UStaticMeshComponent* PotEnergiaMeshComponent;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
