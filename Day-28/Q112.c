//Q112  Write a program to Create contact management system.

#include <stdio.h>
#include <string.h>

struct Contact
{
    char name[50];
    char phone[15];
    char email[50];
};

int main()
{
    struct Contact contacts[100];
    int numContacts, choice, i;
    char searchName[50];

    // Take input for number of contacts
    printf("Enter the number of contacts: ");
    scanf("%d", &numContacts);
    getchar();

    // Loop through each contact to take their details
    for(i = 0; i < numContacts; i++)
    {
        printf("\nEnter details for contact %d:\n", i + 1);
        printf("Name: ");
        fgets(contacts[i].name, sizeof(contacts[i].name), stdin);
        contacts[i].name[strcspn(contacts[i].name, "\n")] = '\0';
        
        printf("Phone: ");
        fgets(contacts[i].phone, sizeof(contacts[i].phone), stdin);
        contacts[i].phone[strcspn(contacts[i].phone, "\n")] = '\0';
        
        printf("Email: ");
        fgets(contacts[i].email, sizeof(contacts[i].email), stdin);
        contacts[i].email[strcspn(contacts[i].email, "\n")] = '\0';
    }
    
    // Display the menu and take user input for various operations in the contact management system
    do
    {
        printf("\n--- Contact Management System Menu ---\n");
        printf("1. Display All Contacts\n");
        printf("2. Search Contact by Name\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // Clear newline from choice input

        switch(choice)
        {
            case 1: 
            {
                printf("\n--- All Contacts ---\n");
                for(i = 0; i < numContacts; i++)
                {
                    printf("Name: %s | Phone: %s | Email: %s\n", contacts[i].name, contacts[i].phone, contacts[i].email);
                }
                break;
            }
            case 2: 
            {
                printf("\nEnter the name to search: ");
                fgets(searchName, sizeof(searchName), stdin);
                searchName[strcspn(searchName, "\n")] = '\0';
                int found = 0;
                
                for(i = 0; i < numContacts; i++)
                {
                    // Using strcmp to find an exact match
                    if(strcmp(contacts[i].name, searchName) == 0)
                    {
                        printf("\n--- Contact Found ---\n");
                        printf("Name : %s\n", contacts[i].name);
                        printf("Phone: %s\n", contacts[i].phone);
                        printf("Email: %s\n", contacts[i].email);
                        found = 1;
                        break; 
                    }
                }
                if (!found) 
                {
                    printf("Error: Contact with name '%s' not found.\n", searchName);
                }
                break;
            }
            case 3: 
            {
                printf("Exiting the system.\n");
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