#include <stdio.h>

struct Person {
    int id;
    char name[50];
    char email[50];
    char phone[15];
};

int countString(char str[]) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        count++;
    }
    return count;
}

void displayPerson(struct Person p) {
    printf("ID: %d, Name: %s, Email: %s, Phone: %s\n", p.id, p.name, p.email, p.phone);
}

int main() {
    struct Person people[10];
    int count = 0;
    int choice;
    
    printf("Complete Mini Project Using Arrays, Strings and Functions\n\n");
    
    while (1) {
        printf("1. Add Person\n");
        printf("2. Display All\n");
        printf("3. Search by ID\n");
        printf("4. Search by Name\n");
        printf("5. Edit Person\n");
        printf("6. Delete Person\n");
        printf("7. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        
        if (choice == 1) {
            printf("Enter ID: ");
            scanf("%d", &people[count].id);
            printf("Enter name: ");
            scanf("%s", people[count].name);
            printf("Enter email: ");
            scanf("%s", people[count].email);
            printf("Enter phone: ");
            scanf("%s", people[count].phone);
            count++;
            printf("Person added successfully\n\n");
        } else if (choice == 2) {
            printf("All Records:\n");
            for (int i = 0; i < count; i++) {
                displayPerson(people[i]);
            }
            printf("\n");
        } else if (choice == 3) {
            int id;
            printf("Enter ID to search: ");
            scanf("%d", &id);
            for (int i = 0; i < count; i++) {
                if (people[i].id == id) {
                    printf("Found: ");
                    displayPerson(people[i]);
                    break;
                }
            }
            printf("\n");
        } else if (choice == 4) {
            char name[50];
            printf("Enter name to search: ");
            scanf("%s", name);
            for (int i = 0; i < count; i++) {
                if (people[i].name[0] == name[0]) {
                    printf("Found: ");
                    displayPerson(people[i]);
                    break;
                }
            }
            printf("\n");
        } else if (choice == 5) {
            int id;
            printf("Enter ID to edit: ");
            scanf("%d", &id);
            for (int i = 0; i < count; i++) {
                if (people[i].id == id) {
                    printf("Enter new name: ");
                    scanf("%s", people[i].name);
                    printf("Enter new email: ");
                    scanf("%s", people[i].email);
                    printf("Enter new phone: ");
                    scanf("%s", people[i].phone);
                    printf("Person updated successfully\n\n");
                    break;
                }
            }
        } else if (choice == 6) {
            int id;
            printf("Enter ID to delete: ");
            scanf("%d", &id);
            for (int i = 0; i < count; i++) {
                if (people[i].id == id) {
                    for (int j = i; j < count - 1; j++) {
                        people[j] = people[j + 1];
                    }
                    count--;
                    printf("Person deleted successfully\n\n");
                    break;
                }
            }
        } else if (choice == 7) {
            printf("Exiting...\n");
            break;
        } else {
            printf("Invalid choice\n\n");
        }
    }
    
    return 0;
}
