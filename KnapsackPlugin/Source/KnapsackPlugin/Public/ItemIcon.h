#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ItemIcon.generated.h"

/**
 *
 */
UCLASS()
class KNAPSACKPLUGIN_API UItemIcon : public UUserWidget
{
	GENERATED_BODY()
public:
	void SetTexture(class UTexture2D* Texture);
private:
	UPROPERTY(meta = (BindWidget))
		class UImage* IconTexture;
};
