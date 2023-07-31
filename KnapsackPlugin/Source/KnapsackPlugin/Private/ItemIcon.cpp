// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemIcon.h"
#include "Components/Image.h"
void UItemIcon::SetTexture(UTexture2D* Texture)
{
	if (Texture)
	{
		IconTexture->SetBrushFromTexture(Texture);
	}
}