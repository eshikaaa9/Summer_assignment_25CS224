#include <stdio.h>

struct Book {
    int book_id;
    char title[50];
    char author[50];
    int quantity;
};

int main() {
    struct Book books[5];
    int count = 0;
    int choice;
    
    printf("Mini Library System\n\n");
    
    while (1) {
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        
        if (choice == 1) {
            printf("Enter book ID: ");
            scanf("%d", &books[count].book_id);
            printf("Enter title: ");
            scanf("%s", books[count].title);
            printf("Enter author: ");
            scanf("%s", books[count].author);
            printf("Enter quantity: ");
            scanf("%d", &books[count].quantity);
            count++;
            printf("Book added successfully\n\n");
        } else if (choice == 2) {
            printf("Books:\n");
            for (int i = 0; i < count; i++) {
                printf("ID: %d, Title: %s, Author: %s, Quantity: %d\n",
                       books[i].book_id, books[i].title, books[i].author, books[i].quantity);
            }
            printf("\n");
        } else if (choice == 3) {
            int id;
            printf("Enter book ID to search: ");
            scanf("%d", &id);
            for (int i = 0; i < count; i++) {
                if (books[i].book_id == id) {
                    printf("Found: ID: %d, Title: %s, Author: %s, Quantity: %d\n",
                           books[i].book_id, books[i].title, books[i].author, books[i].quantity);
                    break;
                }
            }
            printf("\n");
        } else if (choice == 4) {
            int id;
            printf("Enter book ID to issue: ");
            scanf("%d", &id);
            for (int i = 0; i < count; i++) {
                if (books[i].book_id == id) {
                    if (books[i].quantity > 0) {
                        books[i].quantity--;
                        printf("Book issued successfully\n\n");
                    } else {
                        printf("Book not available\n\n");
                    }
                    break;
                }
            }
        } else if (choice == 5) {
            int id;
            printf("Enter book ID to return: ");
            scanf("%d", &id);
            for (int i = 0; i < count; i++) {
                if (books[i].book_id == id) {
                    books[i].quantity++;
                    printf("Book returned successfully\n\n");
                    break;
                }
            }
        } else if (choice == 6) {
            printf("Exiting...\n");
            break;
        } else {
            printf("Invalid choice\n\n");
        }
    }
    
    return 0;
}
