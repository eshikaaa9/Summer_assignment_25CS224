#include <stdio.h>

struct Contact {
    int contact_id;
    char name[50];
    char phone[15];
    char email[50];
};

int main() {
    struct Contact contacts[5];
    int choice;
    int count = 0;
    
    printf("Contact Management System\n\n");
    
    while (1) {
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Delete Contact\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        
        if (choice == 1) {
            printf("Enter contact ID: ");
            scanf("%d", &contacts[count].contact_id);
            printf("Enter name: ");
            scanf("%s", contacts[count].name);
            printf("Enter phone: ");
            scanf("%s", contacts[count].phone);
            printf("Enter email: ");
            scanf("%s", contacts[count].email);
            count++;
            printf("Contact added successfully\n\n");
        } else if (choice == 2) {
            printf("Contacts:\n");
            for (int i = 0; i < count; i++) {
                printf("ID: %d, Name: %s, Phone: %s, Email: %s\n",
                       contacts[i].contact_id, contacts[i].name, contacts[i].phone, contacts[i].email);
            }
            printf("\n");
        } else if (choice == 3) {
            char name[50];
            printf("Enter name to search: ");
            scanf("%s", name);
            for (int i = 0; i < count; i++) {
                if (contacts[i].name[0] == name[0]) {
                    printf("Found: ID: %d, Name: %s, Phone: %s, Email: %s\n",
                           contacts[i].contact_id, contacts[i].name, contacts[i].phone, contacts[i].email);
                    break;
                }
            }
            printf("\n");
        } else if (choice == 4) {
            int id;
            printf("Enter contact ID to delete: ");
            scanf("%d", &id);
            for (int i = 0; i < count; i++) {
                if (contacts[i].contact_id == id) {
                    for (int j = i; j < count - 1; j++) {
                        contacts[j] = contacts[j + 1];
                    }
                    count--;
                    printf("Contact deleted successfully\n\n");
                    break;
                }
            }
        } else if (choice == 5) {
            printf("Exiting...\n");
            break;
        } else {
            printf("Invalid choice\n\n");
        }
    }
    
    return 0;
}
