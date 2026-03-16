#include <iostream>
#include <vector>
#include "inventory.h"
using namespace std;

int main() {
    vector<InventoryItem> items;

    // Add item
    items.push_back(InventoryItem(1, "Laptop", 10));
    items.push_back(InventoryItem(2, "Mouse", 50));

    // Display items
    for (auto item : items) {
        cout << "ID: " << item.id << ", Name: " << item.name << ", Quantity: " << item.quantity << endl;
    }

    return 0;
}
