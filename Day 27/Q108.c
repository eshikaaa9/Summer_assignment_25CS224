#include <stdio.h>

struct Student {
    int roll_no;
    char name[50];
    float marks[5];
    float total;
    float average;
    char grade;
};

int main() {
    struct Student students[5];
    int choice;
    int count = 0;
    
    printf("Marksheet Generation System\n\n");
    
    while (1) {
        printf("1. Add Student\n");
        printf("2. Generate Marksheet\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        
        if (choice == 1) {
            printf("Enter roll number: ");
            scanf("%d", &students[count].roll_no);
            printf("Enter name: ");
            scanf("%s", students[count].name);
            printf("Enter 5 subject marks:\n");
            for (int i = 0; i < 5; i++) {
                scanf("%f", &students[count].marks[i]);
            }
            
            students[count].total = 0;
            for (int i = 0; i < 5; i++) {
                students[count].total = students[count].total + students[count].marks[i];
            }
            students[count].average = students[count].total / 5;
            
            if (students[count].average >= 90) {
                students[count].grade = 'A';
            } else if (students[count].average >= 80) {
                students[count].grade = 'B';
            } else if (students[count].average >= 70) {
                students[count].grade = 'C';
            } else if (students[count].average >= 60) {
                students[count].grade = 'D';
            } else {
                students[count].grade = 'F';
            }
            
            count++;
            printf("Student added successfully\n\n");
        } else if (choice == 2) {
            printf("Marksheets:\n");
            for (int i = 0; i < count; i++) {
                printf("Roll: %d, Name: %s\n", students[i].roll_no, students[i].name);
                printf("Total: %.2f, Average: %.2f, Grade: %c\n\n",
                       students[i].total, students[i].average, students[i].grade);
            }
        } else if (choice == 3) {
            printf("Exiting...\n");
            break;
        } else {
            printf("Invalid choice\n\n");
        }
    }
    
    return 0;
}
