// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DataLibrary.generated.h"


UENUM()
enum class EItemType : uint8
{
	None UMETA(DisplayName = "None"),
	Radio UMETA(DisplayName = "Radio"),
	Trphy UMETA(DisplayName = "Trophy"),
	Spaceship  UMETA(DisplayName = "Spaceship"),
};

USTRUCT(BlueprintType)
struct FGenericItemInfo
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="ItemInfo")
	EItemType ItemType;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ItemInfo")
	FString ItemName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ItemInfo")
	FString ItemCost;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ItemInfo")
	FString ItemInfo;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ItemInfo")
	UStaticMesh* Mesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ItemInfo")
	UTexture2D* ItemImage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ItemInfo")
	UCurveFloat* CurveFloat;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ItemInfo")
	float RotationDuration = 5.0f;

};

USTRUCT(BlueprintType)
struct FItemInformationTable : public FTableRowBase
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ItemInfo")
	EItemType ItemType;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ItemInfo")
	FString ItemName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ItemInfo")
	FString ItemCost;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ItemInfo")
	FString ItemInfo;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ItemInfo")
	UStaticMesh* Mesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ItemInfo")
	UTexture2D* ItemImage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ItemInfo")
	UCurveFloat* CurveFloat;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ItemInfo")
	float RotationDuration = 5.0f;

};

UCLASS()
class AIV_DATAASSET_API UDataLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
};
