#include <stdio.h>

struct Account {
    int account_no;
    char name[50];
    float balance;
};

int main() {
    struct Account accounts[5];
    int choice;
    int count = 0;
    
    printf("Bank Account System\n\n");
    
    while (1) {
        printf("1. Create Account\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Check Balance\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        
        if (choice == 1) {
            printf("Enter account number: ");
            scanf("%d", &accounts[count].account_no);
            printf("Enter name: ");
            scanf("%s", accounts[count].name);
            printf("Enter initial balance: ");
            scanf("%f", &accounts[count].balance);
            count++;
            printf("Account created successfully\n\n");
        } else if (choice == 2) {
            int acc_no;
            float amount;
            printf("Enter account number: ");
            scanf("%d", &acc_no);
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            for (int i = 0; i < count; i++) {
                if (accounts[i].account_no == acc_no) {
                    accounts[i].balance = accounts[i].balance + amount;
                    printf("Deposit successful. New balance: %.2f\n\n", accounts[i].balance);
                    break;
                }
            }
        } else if (choice == 3) {
            int acc_no;
            float amount;
            printf("Enter account number: ");
            scanf("%d", &acc_no);
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);
            for (int i = 0; i < count; i++) {
                if (accounts[i].account_no == acc_no) {
                    if (amount <= accounts[i].balance) {
                        accounts[i].balance = accounts[i].balance - amount;
                        printf("Withdrawal successful. New balance: %.2f\n\n", accounts[i].balance);
                    } else {
                        printf("Insufficient balance\n\n");
                    }
                    break;
                }
            }
        } else if (choice == 4) {
            int acc_no;
            printf("Enter account number: ");
            scanf("%d", &acc_no);
            for (int i = 0; i < count; i++) {
                if (accounts[i].account_no == acc_no) {
                    printf("Balance: %.2f\n\n", accounts[i].balance);
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
