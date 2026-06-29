#include <stdio.h>

int main() {
    char str[100];
    int choice;
    
    printf("Menu-Driven String Operations System\n\n");
    
    while (1) {
        printf("1. Input String\n");
        printf("2. Display String\n");
        printf("3. String Length\n");
        printf("4. Reverse String\n");
        printf("5. Count Vowels\n");
        printf("6. To Uppercase\n");
        printf("7. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        
        if (choice == 1) {
            printf("Enter a string: ");
            scanf("%s", str);
            printf("String stored successfully\n\n");
        } else if (choice == 2) {
            printf("String: %s\n\n", str);
        } else if (choice == 3) {
            int len = 0;
            for (int i = 0; str[i] != '\0'; i++) {
                len++;
            }
            printf("Length: %d\n\n", len);
        } else if (choice == 4) {
            int len = 0;
            for (int i = 0; str[i] != '\0'; i++) {
                len++;
            }
            printf("Reversed: ");
            for (int i = len - 1; i >= 0; i--) {
                printf("%c", str[i]);
            }
            printf("\n\n");
        } else if (choice == 5) {
            int vowels = 0;
            for (int i = 0; str[i] != '\0'; i++) {
                if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
                    vowels++;
                }
            }
            printf("Vowels: %d\n\n", vowels);
        } else if (choice == 6) {
            printf("Uppercase: ");
            for (int i = 0; str[i] != '\0'; i++) {
                if (str[i] >= 'a' && str[i] <= 'z') {
                    printf("%c", str[i] - 32);
                } else {
                    printf("%c", str[i]);
                }
            }
            printf("\n\n");
        } else if (choice == 7) {
            printf("Exiting...\n");
            break;
        } else {
            printf("Invalid choice\n\n");
        }
    }
    
    return 0;
}
