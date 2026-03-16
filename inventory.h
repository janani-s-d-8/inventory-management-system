#ifndef INVENTORY_H
#define INVENTORY_H

#include <string>

class InventoryItem {
public:
    int id;
    std::string name;
    int quantity;

    InventoryItem(int id, std::string name, int quantity);
};

#endif
