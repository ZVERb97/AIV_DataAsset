// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DataActorBase.h"
#include "ADataActorTable.generated.h"

/**
 * 
 */
UCLASS()
class AIV_DATAASSET_API AADataActorTable : public ADataActorBase
{
	GENERATED_BODY()


protected:

#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item Info")
	UDataTable* ItemDataTable;

	
};
