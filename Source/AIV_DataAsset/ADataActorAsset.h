// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DataActorBase.h"
#include "ItemDataAsset.h"
#include "ADataActorAsset.generated.h"

/**
 * 
 */

UCLASS()
class AIV_DATAASSET_API AADataActorAsset : public ADataActorBase
{
	GENERATED_BODY()

protected:
#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item Info")
	UItemDataAsset* ItemDataAsset;
	
};
