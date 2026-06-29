//Q114  Write a program to Create menu-driven array operations system.

#include<stdio.h>

int main()
{
    // Variable declarations
    int choice, size=0, i;
    int array[100];

    // Menu-driven array operations
    do
    {
        printf("Menu:\n");
        printf("1. Input Array\n");
        printf("2. Display Array\n");
        printf("3. Find Maximum\n");
        printf("4. Find Minimum\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        // Process the user's choice
        switch (choice)
        {
            case 1:
                printf("Enter the size of the array (max 100): ");
                scanf("%d", &size);
                if (size>0 && size<=100)
                {
                    printf("Enter %d elements:\n", size);
                    for (i=0; i<size; i++)
                    {
                        scanf("%d", &array[i]);
                    }
                }
                else
                {
                    printf("Invalid size. Please enter a number between 1 and 100.\n");
                }
                break;

            case 2:
                printf("Array elements are:\n");
                for (i=0; i<size; i++)
                {
                    printf("%d ", array[i]);
                }
                printf("\n");
                break;

            case 3:
                if (size>0)
                {
                    int max=array[0];
                    for (i=1; i<size; i++)
                    {
                        if (array[i]>max)
                        {
                            max=array[i];
                        }
                    }
                    printf("Maximum element is: %d\n", max);
                }
                else
                {
                    printf("Array is empty. Please input the array first.\n");
                }
                break;

            case 4:
                if (size>0)
                {
                    int min=array[0];
                    for (i=1; i<size; i++)
                    {
                        if (array[i]<min)
                        {
                            min = array[i];
                        }
                    }
                    printf("Minimum element is: %d\n", min);
                }
                else
                {
                    printf("Array is empty. Please input the array first.\n");
                }
                break;

            case 5:
                printf("Exiting the program.\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice!=5);

    return 0;
}