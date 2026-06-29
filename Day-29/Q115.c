//Q115  Write a program to Create menu-driven string operations system.

#include<stdio.h>
#include<string.h>

int main()
{
    // Variable declarations
    int choice;
    char str1[100], str2[100];

    // Menu-driven string operations
    do
    {
        printf("Menu:\n");
        printf("1. Concatenate Strings\n");
        printf("2. Compare Strings\n");
        printf("3. Find Length of String\n");
        printf("4. Reverse String\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        // Process the user's choice
        switch (choice)
        {
            case 1:
                printf("Enter first string: ");
                scanf("%s", str1);
                printf("Enter second string: ");
                scanf("%s", str2);
                strcat(str1, str2);
                printf("Concatenated String: %s\n", str1);
                break;

            case 2:
                printf("Enter first string: ");
                scanf("%s", str1);
                printf("Enter second string: ");
                scanf("%s", str2);
                if (strcmp(str1, str2) == 0)
                    printf("Strings are equal.\n");
                else
                    printf("Strings are not equal.\n");
                break;

            case 3:
                printf("Enter a string: ");
                scanf("%s", str1);
                printf("Length of the string: %lu\n", strlen(str1));
                break;

            case 4:
                printf("Enter a string: ");
                scanf("%s", str1);
                int len = strlen(str1);
                for (int i = len - 1; i >= 0; i--)
                {
                    printf("%c", str1[i]);
                }
                printf("\n");
                break;

            case 5:
                printf("Exiting the program.\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}