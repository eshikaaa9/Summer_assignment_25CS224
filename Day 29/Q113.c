#include <stdio.h>

int main() {
    float num1, num2;
    int choice;
    
    printf("Menu-Driven Calculator\n\n");
    
    while (1) {
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        
        if (choice == 5) {
            printf("Thank you for using calculator\n");
            break;
        }
        
        printf("Enter first number: ");
        scanf("%f", &num1);
        printf("Enter second number: ");
        scanf("%f", &num2);
        
        if (choice == 1) {
            printf("Result: %.2f\n\n", num1 + num2);
        } else if (choice == 2) {
            printf("Result: %.2f\n\n", num1 - num2);
        } else if (choice == 3) {
            printf("Result: %.2f\n\n", num1 * num2);
        } else if (choice == 4) {
            if (num2 != 0) {
                printf("Result: %.2f\n\n", num1 / num2);
            } else {
                printf("Cannot divide by zero\n\n");
            }
        } else {
            printf("Invalid choice\n\n");
        }
    }
    
    return 0;
}
