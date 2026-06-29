//Q113  Write a program to Create menu-driven calculator.

#include<stdio.h>

int main()
{
    // Variable declarations
    int choice;
    double num1=0, num2=0, result=0;

    // Menu-driven calculator
    do
    {
        printf("Menu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        // Check if the choice is valid
        if (choice>=1 && choice<=4)
        {
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
        }

        // Perform the selected operation
        switch (choice)
        {
            case 1:
                result = num1+num2;
                printf("Result: %.2lf\n", result);
                break;

            case 2:
                result = num1-num2;
                printf("Result: %.2lf\n", result);
                break;

            case 3:
                result = num1*num2;
                printf("Result: %.2lf\n", result);
                break;

            case 4:
                if (num2!=0)
                {
                    result = num1/num2;
                    printf("Result: %.2lf\n", result);
                }
                else
                {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;

            case 5:
                printf("Exiting the calculator.\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice!=5);

    return 0;
}