//Q44  Write a program to Write function to find factorial. 

#include <stdio.h>

int factorial(int num) //code for function to find factorial of a number.
{
    if (num < 0)
        return -1; // Factorial is not defined for negative numbers
    else if (num == 0 || num == 1)
        return 1; // Factorial of 0 and 1 is 1
    else
        return num * factorial(num - 1); // Recursive call
}

int main() 
{
    int num, fact;

    printf("Enter a number: ");
    scanf("%d", &num);

    fact = factorial(num);  //calling the function.

    if (fact == -1)
        printf("Factorial is not defined for negative numbers.");
    else
        printf("Factorial of %d is: %d", num, fact); //printing the result.

    return 0;
}