// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DataLibrary.h"
#include "DataActorBase.generated.h"

class USphereComponent;

UCLASS()
class AIV_DATAASSET_API ADataActorBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADataActorBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
	UStaticMeshComponent* Mesh;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
	USphereComponent* SphereCollider;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item Info")
	EItemType ItemType = EItemType::None;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Info")
	FGenericItemInfo GenericItemInfo;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Info")
	bool bRunCode = false;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
