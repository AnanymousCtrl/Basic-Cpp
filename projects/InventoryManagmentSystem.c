#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a structure to represent an inventory item
struct InventoryItem {
    int id;
    char name[50];
    int quantity;
    float price;
};

// Define a constant for the maximum number of items in the inventory
#define MAX_ITEMS 100

// Global array to store inventory items
struct InventoryItem inventory[MAX_ITEMS];
int itemCount = 0;

// Function to add a new item to the inventory
void addItem() {
    if (itemCount >= MAX_ITEMS) {
        printf("Inventory is full. Cannot add more items.\n");
        return;
    }

    struct InventoryItem newItem;
    newItem.id = itemCount + 1;

    printf("Enter item name: ");
    scanf("%s", newItem.name);
    printf("Enter item quantity: ");
    scanf("%d", &newItem.quantity);
    printf("Enter item price: ");
    scanf("%f", &newItem.price);

    inventory[itemCount] = newItem;
    itemCount++;

    printf("Item added successfully!\n");
}

// Function to display the inventory
void displayInventory() {
	int i;
    printf("Inventory:\n");
    printf("ID\tName\tQuantity\tPrice\n");
    for (i = 0; i < itemCount; i++) {
        printf("%d\t%s\t%d\t\t%.2f\n", inventory[i].id, inventory[i].name, inventory[i].quantity, inventory[i].price);
    }
}

// Function to search for an item by name
void searchItem() {
	int i;
    char searchName[50];
    printf("Enter item name to search: ");
    scanf("%s", searchName);

    printf("Search Results:\n");
    printf("ID\tName\tQuantity\tPrice\n");
    for ( i = 0; i < itemCount; i++) {
        if (strcmp(searchName, inventory[i].name) == 0) {
            printf("%d\t%s\t%d\t\t%.2f\n", inventory[i].id, inventory[i].name, inventory[i].quantity, inventory[i].price);
        }
    }
}

void reduceQuantity() {
    char itemName[50];
    int i, reduceAmount;

    printf("Enter the name of the item to reduce quantity: ");
    scanf("%s", itemName);

    for (i = 0; i < itemCount; i++) {
        if (strcmp(itemName, inventory[i].name) == 0) {
            printf("Current quantity of %s: %d\n", inventory[i].name, inventory[i].quantity);
            printf("Enter the quantity to reduce: ");
            scanf("%d", &reduceAmount);

            if (reduceAmount <= 0 || reduceAmount > inventory[i].quantity) {
                printf("Invalid quantity. Reduction failed.\n");
                return;
            }

            inventory[i].quantity -= reduceAmount;
            printf("%d %s(s) reduced.\n		 New quantity: %d\n", reduceAmount, inventory[i].name, inventory[i].quantity);
            return;
        }
    }

    printf("Item not found in the inventory.\n");
}

float ItemPrice(int quantity, float price){
	return quantity*price;
}

void DisplayItemPrice() {
    int i;
	char itemName[50];

    printf("Enter the name of the item: ");
    scanf("%s", itemName);

    for (i = 0; i < itemCount; i++) {
        if (strcmp(itemName, inventory[i].name) == 0) {
            float totalItemPrice = ItemPrice(inventory[i].quantity, inventory[i].price);
            printf("Total price of %d %s(s): Rs%.2f\n", inventory[i].quantity, inventory[i].name, totalItemPrice);
            return;
        }
    }

    printf("Item not found in the inventory.\n");
}

int main() {
    int choice;

    while (1) {
        printf("\nInventory Management System\n");
        printf("1. Add Item\n");
        printf("2. Display Inventory\n");
        printf("3. Search Item\n");
        printf("4. Delete an Item\n");
        printf("5. View Cost\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addItem();
                break;
            case 2:
                displayInventory();
                break;
            case 3:
                searchItem();
                break;
            case 4:
                reduceQuantity();
                break;
            case 5:
            	DisplayItemPrice();
            	break;
           	case 6:
           		exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
