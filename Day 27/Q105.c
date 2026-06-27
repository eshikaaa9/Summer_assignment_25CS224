#include <stdio.h>

struct Student {
    int roll_no;
    char name[50];
    float marks;
};

int main() {
    struct Student students[5];
    int choice;
    int count = 0;
    
    printf("Student Record Management System\n\n");
    
    while (1) {
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        
        if (choice == 1) {
            printf("Enter roll number: ");
            scanf("%d", &students[count].roll_no);
            printf("Enter name: ");
            scanf("%s", students[count].name);
            printf("Enter marks: ");
            scanf("%f", &students[count].marks);
            count++;
            printf("Student added successfully\n\n");
        } else if (choice == 2) {
            printf("Student Records:\n");
            for (int i = 0; i < count; i++) {
                printf("Roll: %d, Name: %s, Marks: %.2f\n", 
                       students[i].roll_no, students[i].name, students[i].marks);
            }
            printf("\n");
        } else if (choice == 3) {
            int roll;
            printf("Enter roll number to search: ");
            scanf("%d", &roll);
            for (int i = 0; i < count; i++) {
                if (students[i].roll_no == roll) {
                    printf("Found: Roll: %d, Name: %s, Marks: %.2f\n",
                           students[i].roll_no, students[i].name, students[i].marks);
                    break;
                }
            }
            printf("\n");
        } else if (choice == 4) {
            printf("Exiting...\n");
            break;
        } else {
            printf("Invalid choice\n\n");
        }
    }
    
    return 0;
}
