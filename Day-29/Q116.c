#include <stdio.h>
#include <string.h>

struct Item
{
    char name[50];
    int quantity;
};

int main()
{
    struct Item inventory[100];
    int count = 0; // tracks how many items exist
    int choice, quantity, i;
    char name[50];

    // Menu-driven inventory management system
    do
    {
        printf("\nMenu:\n");
        printf("1. Add Item\n");
        printf("2. Remove Item\n");
        printf("3. Display Inventory\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Process the user's choice
        switch (choice)
        {
            case 1:
                printf("Enter item name: ");
                scanf("%s", name);
                printf("Enter quantity to add: ");
                scanf("%d", &quantity);

                // Check if item already exists
                int found = 0;
                for (i = 0; i < count; i++)
                {
                    if (strcmp(inventory[i].name, name) == 0)
                    {
                        inventory[i].quantity += quantity;
                        printf("Updated %s. New quantity: %d\n", name, inventory[i].quantity);
                        found = 1;
                        break;
                    }
                }
                // Add as new item if not found
                if (!found && count < 100)
                {
                    strcpy(inventory[count].name, name);
                    inventory[count].quantity = quantity;
                    count++;
                    printf("Item added successfully.\n");
                }
                break;

            case 2:
                printf("Enter item name: ");
                scanf("%s", name);
                printf("Enter quantity to remove: ");
                scanf("%d", &quantity);

                for (i = 0; i < count; i++)
                {
                    if (strcmp(inventory[i].name, name) == 0)
                    {
                        if (inventory[i].quantity >= quantity)
                        {
                            inventory[i].quantity -= quantity;
                            printf("Removed %d units of %s.\n", quantity, name);
                        }
                        else
                        {
                            printf("Not enough stock. Available: %d\n", inventory[i].quantity);
                        }
                        break;
                    }
                }
                break;

            case 3:
                if (count == 0)
                {
                    printf("Inventory is empty.\n");
                }
                else
                {
                    printf("\n%-20s %s\n", "Item Name", "Quantity");
                    printf("----------------------------\n");
                    for (i = 0; i < count; i++)
                    {
                        printf("%-20s %d\n", inventory[i].name, inventory[i].quantity);
                    }
                }
                break;

            case 4:
                printf("Exiting the program.\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}