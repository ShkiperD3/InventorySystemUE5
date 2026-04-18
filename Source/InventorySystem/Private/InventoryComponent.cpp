#include "InventoryComponent.h"

void UInventoryComponent::AddItem(FItemData NewItem)
{
    for (FItemData& Item : Items)
    {
        if (Item.ItemID == NewItem.ItemID)
        {
            Item.Quantity += NewItem.Quantity;
            OnInventoryUpdated.Broadcast();
            return;
        }
    }

    Items.Add(NewItem);
    OnInventoryUpdated.Broadcast();
}
