#include <stdio.h>

struct Item {
    int item_id;
    char name[50];
    int quantity;
    float price;
};

int main() {
    struct Item items[10];
    int choice;
    int count = 0;
    
    printf("Inventory Management System\n\n");
    
    while (1) {
        printf("1. Add Item\n");
        printf("2. Display Inventory\n");
        printf("3. Update Quantity\n");
        printf("4. Calculate Total Value\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        
        if (choice == 1) {
            printf("Enter item ID: ");
            scanf("%d", &items[count].item_id);
            printf("Enter name: ");
            scanf("%s", items[count].name);
            printf("Enter quantity: ");
            scanf("%d", &items[count].quantity);
            printf("Enter price: ");
            scanf("%f", &items[count].price);
            count++;
            printf("Item added successfully\n\n");
        } else if (choice == 2) {
            printf("Inventory:\n");
            for (int i = 0; i < count; i++) {
                printf("ID: %d, Name: %s, Quantity: %d, Price: %.2f\n",
                       items[i].item_id, items[i].name, items[i].quantity, items[i].price);
            }
            printf("\n");
        } else if (choice == 3) {
            int id;
            printf("Enter item ID to update: ");
            scanf("%d", &id);
            for (int i = 0; i < count; i++) {
                if (items[i].item_id == id) {
                    printf("Enter new quantity: ");
                    scanf("%d", &items[i].quantity);
                    printf("Quantity updated successfully\n\n");
                    break;
                }
            }
        } else if (choice == 4) {
            float total = 0;
            for (int i = 0; i < count; i++) {
                total = total + (items[i].quantity * items[i].price);
            }
            printf("Total Inventory Value: %.2f\n\n", total);
        } else if (choice == 5) {
            printf("Exiting...\n");
            break;
        } else {
            printf("Invalid choice\n\n");
        }
    }
    
    return 0;
}
