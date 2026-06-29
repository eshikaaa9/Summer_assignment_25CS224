#include <stdio.h>

int main() {
    int n, choice;
    int arr[100];
    int size = 0;
    
    printf("Menu-Driven Array Operations System\n\n");
    
    while (1) {
        printf("1. Input Array\n");
        printf("2. Display Array\n");
        printf("3. Find Sum\n");
        printf("4. Find Average\n");
        printf("5. Find Maximum\n");
        printf("6. Reverse Array\n");
        printf("7. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        
        if (choice == 1) {
            printf("Enter size of array: ");
            scanf("%d", &size);
            printf("Enter array elements: ");
            for (int i = 0; i < size; i++) {
                scanf("%d", &arr[i]);
            }
            printf("Array stored successfully\n\n");
        } else if (choice == 2) {
            printf("Array: ");
            for (int i = 0; i < size; i++) {
                printf("%d ", arr[i]);
            }
            printf("\n\n");
        } else if (choice == 3) {
            int sum = 0;
            for (int i = 0; i < size; i++) {
                sum = sum + arr[i];
            }
            printf("Sum: %d\n\n", sum);
        } else if (choice == 4) {
            int sum = 0;
            for (int i = 0; i < size; i++) {
                sum = sum + arr[i];
            }
            printf("Average: %.2f\n\n", (float)sum / size);
        } else if (choice == 5) {
            int max = arr[0];
            for (int i = 0; i < size; i++) {
                if (arr[i] > max) {
                    max = arr[i];
                }
            }
            printf("Maximum: %d\n\n", max);
        } else if (choice == 6) {
            printf("Reversed array: ");
            for (int i = size - 1; i >= 0; i--) {
                printf("%d ", arr[i]);
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
