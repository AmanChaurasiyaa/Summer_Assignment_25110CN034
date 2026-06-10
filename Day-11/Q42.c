//Q42  Write a program to Write function to find maximum.

#include <stdio.h>

int findMax(int a, int b) //code for function to find maximum of two numbers.
{
    if (a > b)
        return a;
    else
        return b;
}

int main() 
{
    int num1, num2, max;

    printf("Enter First number: ");
    scanf("%d", &num1);
    printf("Enter Second number: ");
    scanf("%d", &num2);

    max = findMax(num1, num2);  //calling the function.

    printf("Maximum of %d and %d is: %d", num1, num2, max); //printing the result.

    return 0;
}