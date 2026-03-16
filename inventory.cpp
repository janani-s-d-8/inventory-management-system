#include "inventory.h"

InventoryItem::InventoryItem(int id, std::string name, int quantity) {
    this->id = id;
    this->name = name;
    this->quantity = quantity;
}
