#include <stdio.h>

struct Ticket {
    int ticket_no;
    char passenger_name[50];
    char from[50];
    char to[50];
    int booked;
};

int main() {
    struct Ticket tickets[10];
    int choice;
    int count = 0;
    
    printf("Ticket Booking System\n\n");
    
    while (1) {
        printf("1. Add Ticket\n");
        printf("2. Book Ticket\n");
        printf("3. View Tickets\n");
        printf("4. Cancel Ticket\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        
        if (choice == 1) {
            printf("Enter ticket number: ");
            scanf("%d", &tickets[count].ticket_no);
            printf("Enter from: ");
            scanf("%s", tickets[count].from);
            printf("Enter to: ");
            scanf("%s", tickets[count].to);
            tickets[count].booked = 0;
            count++;
            printf("Ticket added successfully\n\n");
        } else if (choice == 2) {
            int tick_no;
            printf("Enter ticket number to book: ");
            scanf("%d", &tick_no);
            for (int i = 0; i < count; i++) {
                if (tickets[i].ticket_no == tick_no) {
                    if (tickets[i].booked == 0) {
                        printf("Enter passenger name: ");
                        scanf("%s", tickets[i].passenger_name);
                        tickets[i].booked = 1;
                        printf("Ticket booked successfully\n\n");
                    } else {
                        printf("Ticket already booked\n\n");
                    }
                    break;
                }
            }
        } else if (choice == 3) {
            printf("Tickets:\n");
            for (int i = 0; i < count; i++) {
                printf("Ticket: %d, From: %s, To: %s, Status: ", tickets[i].ticket_no, tickets[i].from, tickets[i].to);
                if (tickets[i].booked == 1) {
                    printf("Booked by %s\n", tickets[i].passenger_name);
                } else {
                    printf("Available\n");
                }
            }
            printf("\n");
        } else if (choice == 4) {
            int tick_no;
            printf("Enter ticket number to cancel: ");
            scanf("%d", &tick_no);
            for (int i = 0; i < count; i++) {
                if (tickets[i].ticket_no == tick_no) {
                    tickets[i].booked = 0;
                    printf("Ticket cancelled successfully\n\n");
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
