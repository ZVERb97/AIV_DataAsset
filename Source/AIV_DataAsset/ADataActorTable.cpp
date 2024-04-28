// Fill out your copyright notice in the Description page of Project Settings.


#include "ADataActorTable.h"

void AADataActorTable::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	if (!bRunCode || ItemType == EItemType::None) { return; }

	if (ItemDataTable)
	{
		const FName RowName = FName(UEnum::GetDisplayValueAsText(ItemType).ToString());
		FItemInformationTable* Row = ItemDataTable->FindRow <FItemInformationTable>(RowName, "Item Details");

		if (Row)
		{
			GenericItemInfo.ItemType = Row->ItemType;
			GenericItemInfo.ItemName = Row->ItemName;
			GenericItemInfo.ItemCost = Row->ItemCost;
			GenericItemInfo.ItemInfo = Row->ItemInfo;
			GenericItemInfo.Mesh = Row->Mesh;
			GenericItemInfo.CurveFloat = Row->CurveFloat;
			GenericItemInfo.RotationDuration = Row->RotationDuration;

			Mesh->SetStaticMesh(GenericItemInfo.Mesh);
		}
	}
}