// Fill out your copyright notice in the Description page of Project Settings.


#include "ADataActorAsset.h"

void AADataActorAsset::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	if (!bRunCode || ItemType == EItemType::None) { return; }

	if (ItemDataAsset)
	{
		for (int32 index = 0; index < ItemDataAsset->ItemInfoArray.Num(); index++)
		{
			if (ItemDataAsset->ItemInfoArray[index].ItemType == ItemType)
			{
				if (Mesh == NULL)
				{
					break;
				}
				else
				{
					GenericItemInfo = ItemDataAsset->ItemInfoArray[index];
					Mesh->SetStaticMesh(GenericItemInfo.Mesh);

				}
				break;
			}
		}
	}
}