#include <stdio.h>

int main() {
    int balance = 1000;
    int choice, amount;
    
    printf("ATM Simulation\n");
    printf("Initial Balance: %d\n\n", balance);
    
    while (1) {
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        
        if (choice == 1) {
            printf("Current Balance: %d\n\n", balance);
        } else if (choice == 2) {
            printf("Enter amount to deposit: ");
            scanf("%d", &amount);
            balance = balance + amount;
            printf("Deposit successful. New Balance: %d\n\n", balance);
        } else if (choice == 3) {
            printf("Enter amount to withdraw: ");
            scanf("%d", &amount);
            if (amount <= balance) {
                balance = balance - amount;
                printf("Withdrawal successful. New Balance: %d\n\n", balance);
            } else {
                printf("Insufficient balance\n\n");
            }
        } else if (choice == 4) {
            printf("Thank you for using ATM\n");
            break;
        } else {
            printf("Invalid choice\n\n");
        }
    }
    
    return 0;
}
