#include <stdio.h>

struct Employee {
    int emp_id;
    char name[50];
    float salary;
    char department[50];
};

int main() {
    struct Employee employees[5];
    int count = 0;
    int choice;
    
    printf("Mini Employee Management System\n\n");
    
    while (1) {
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Update Salary\n");
        printf("5. Calculate Total Payroll\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        
        if (choice == 1) {
            printf("Enter employee ID: ");
            scanf("%d", &employees[count].emp_id);
            printf("Enter name: ");
            scanf("%s", employees[count].name);
            printf("Enter salary: ");
            scanf("%f", &employees[count].salary);
            printf("Enter department: ");
            scanf("%s", employees[count].department);
            count++;
            printf("Employee added successfully\n\n");
        } else if (choice == 2) {
            printf("Employees:\n");
            for (int i = 0; i < count; i++) {
                printf("ID: %d, Name: %s, Salary: %.2f, Department: %s\n",
                       employees[i].emp_id, employees[i].name, employees[i].salary, employees[i].department);
            }
            printf("\n");
        } else if (choice == 3) {
            int id;
            printf("Enter employee ID to search: ");
            scanf("%d", &id);
            for (int i = 0; i < count; i++) {
                if (employees[i].emp_id == id) {
                    printf("Found: ID: %d, Name: %s, Salary: %.2f, Department: %s\n",
                           employees[i].emp_id, employees[i].name, employees[i].salary, employees[i].department);
                    break;
                }
            }
            printf("\n");
        } else if (choice == 4) {
            int id;
            float new_salary;
            printf("Enter employee ID to update salary: ");
            scanf("%d", &id);
            printf("Enter new salary: ");
            scanf("%f", &new_salary);
            for (int i = 0; i < count; i++) {
                if (employees[i].emp_id == id) {
                    employees[i].salary = new_salary;
                    printf("Salary updated successfully\n\n");
                    break;
                }
            }
        } else if (choice == 5) {
            float total = 0;
            for (int i = 0; i < count; i++) {
                total = total + employees[i].salary;
            }
            printf("Total Payroll: %.2f\n\n", total);
        } else if (choice == 6) {
            printf("Exiting...\n");
            break;
        } else {
            printf("Invalid choice\n\n");
        }
    }
    
    return 0;
}
