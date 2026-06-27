#include <stdio.h>

struct Employee {
    int emp_id;
    char name[50];
    float salary;
};

int main() {
    struct Employee employees[5];
    int choice;
    int count = 0;
    
    printf("Salary Management System\n\n");
    
    while (1) {
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Calculate Total Payroll\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        
        if (choice == 1) {
            printf("Enter employee ID: ");
            scanf("%d", &employees[count].emp_id);
            printf("Enter name: ");
            scanf("%s", employees[count].name);
            printf("Enter salary: ");
            scanf("%f", &employees[count].salary);
            count++;
            printf("Employee added successfully\n\n");
        } else if (choice == 2) {
            printf("Employee Records:\n");
            for (int i = 0; i < count; i++) {
                printf("ID: %d, Name: %s, Salary: %.2f\n",
                       employees[i].emp_id, employees[i].name, employees[i].salary);
            }
            printf("\n");
        } else if (choice == 3) {
            float total = 0;
            for (int i = 0; i < count; i++) {
                total = total + employees[i].salary;
            }
            printf("Total Payroll: %.2f\n\n", total);
        } else if (choice == 4) {
            printf("Exiting...\n");
            break;
        } else {
            printf("Invalid choice\n\n");
        }
    }
    
    return 0;
}
