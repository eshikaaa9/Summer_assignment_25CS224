#include <stdio.h>

struct Book {
    int book_id;
    char title[50];
    char author[50];
    int available;
};

int main() {
    struct Book books[5];
    int choice;
    int count = 0;
    
    printf("Library Management System\n\n");
    
    while (1) {
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Issue Book\n");
        printf("4. Return Book\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        
        if (choice == 1) {
            printf("Enter book ID: ");
            scanf("%d", &books[count].book_id);
            printf("Enter title: ");
            scanf("%s", books[count].title);
            printf("Enter author: ");
            scanf("%s", books[count].author);
            books[count].available = 5;
            count++;
            printf("Book added successfully\n\n");
        } else if (choice == 2) {
            printf("Books:\n");
            for (int i = 0; i < count; i++) {
                printf("ID: %d, Title: %s, Author: %s, Available: %d\n",
                       books[i].book_id, books[i].title, books[i].author, books[i].available);
            }
            printf("\n");
        } else if (choice == 3) {
            int id;
            printf("Enter book ID to issue: ");
            scanf("%d", &id);
            for (int i = 0; i < count; i++) {
                if (books[i].book_id == id) {
                    if (books[i].available > 0) {
                        books[i].available--;
                        printf("Book issued successfully\n");
                    } else {
                        printf("Book not available\n");
                    }
                    break;
                }
            }
            printf("\n");
        } else if (choice == 4) {
            int id;
            printf("Enter book ID to return: ");
            scanf("%d", &id);
            for (int i = 0; i < count; i++) {
                if (books[i].book_id == id) {
                    books[i].available++;
                    printf("Book returned successfully\n");
                    break;
                }
            }
            printf("\n");
        } else if (choice == 5) {
            printf("Exiting...\n");
            break;
        } else {
            printf("Invalid choice\n\n");
        }
    }
    
    return 0;
}
