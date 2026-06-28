//Q111  Write a program to Create ticket booking system.

#include <stdio.h>
#include <string.h>

// Define a structure to represent a ticket
struct Ticket
{
    int ticketNumber;
    char passengerName[50];
    char destination[50];
    float price;
    char travelDate[20];
    char seatNumber[10];
};

int main()
{
    struct Ticket tickets[100];
    int numTickets, choice, i, ticketNo;
    int found;

    // Take input for number of tickets
    printf("Enter the number of tickets: ");
    scanf("%d", &numTickets);
    getchar();

    // Loop through each ticket to take their details
    for(i = 0; i < numTickets; i++)
    {
        printf("\nEnter details for ticket %d:\n", i + 1);
        printf("Ticket Number: ");
        scanf("%d", &tickets[i].ticketNumber);
        getchar();
        
        printf("Passenger Name: ");
        fgets(tickets[i].passengerName, sizeof(tickets[i].passengerName), stdin);
        tickets[i].passengerName[strcspn(tickets[i].passengerName, "\n")] = '\0';
        
        printf("Destination: ");
        fgets(tickets[i].destination, sizeof(tickets[i].destination), stdin);
        tickets[i].destination[strcspn(tickets[i].destination, "\n")] = '\0';
        
        printf("Price: ");
        scanf("%f", &tickets[i].price);
        getchar();
        
        printf("Travel Date (dd/mm/yyyy): ");
        fgets(tickets[i].travelDate, sizeof(tickets[i].travelDate), stdin);
        tickets[i].travelDate[strcspn(tickets[i].travelDate, "\n")] = '\0';
        
        printf("Seat Number: ");
        fgets(tickets[i].seatNumber, sizeof(tickets[i].seatNumber), stdin);
        tickets[i].seatNumber[strcspn(tickets[i].seatNumber, "\n")] = '\0';
    }

    // --- ADDED MENU SYSTEM ---
    do
    {
        printf("\n=== Ticket Booking System Menu ===\n");
        printf("1. Display All Tickets\n");
        printf("2. Search Ticket by Number\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1: 
            {
                printf("\n--- All Booked Tickets ---\n");
                for(i = 0; i < numTickets; i++)
                {
                    printf("Ticket #%d | Passenger: %s | Dest: %s | Price: Rs. %.2f | Date: %s | Seat: %s\n", 
                           tickets[i].ticketNumber, tickets[i].passengerName, tickets[i].destination, 
                           tickets[i].price, tickets[i].travelDate, tickets[i].seatNumber);
                }
                break;
            }
            case 2: 
            {
                printf("\nEnter Ticket Number to search: ");
                scanf("%d", &ticketNo);
                found = 0;
                // Loop through tickets to find the ticket number
                for(i = 0; i < numTickets; i++)
                {
                    if(tickets[i].ticketNumber == ticketNo)
                    {
                        printf("\n--- Ticket Found ---\n");
                        printf("Ticket Number : %d\n", tickets[i].ticketNumber);
                        printf("Passenger Name: %s\n", tickets[i].passengerName);
                        printf("Destination   : %s\n", tickets[i].destination);
                        printf("Price         : Rs. %.2f\n", tickets[i].price);
                        printf("Travel Date   : %s\n", tickets[i].travelDate);
                        printf("Seat Number   : %s\n", tickets[i].seatNumber);
                        found = 1;
                        break; 
                    }
                }
                // If ticket number not found, display an error message
                if (found == 0) 
                {
                    printf("Error: Ticket number %d not found.\n", ticketNo);
                }
                break;
            }
            case 3: 
            {
                printf("Exiting the system. Safe travels!\n");
                break;
            }
            default: 
            {
                printf("Invalid choice. Please try again.\n");
                break;
            }
        }
    } while(choice != 3);

    return 0;
}