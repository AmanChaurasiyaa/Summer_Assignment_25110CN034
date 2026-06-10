// Write a program to Write function to find sum of two numbers.

#include <stdio.h>

int findSum(int a, int b) //code for function to find sum of two numbers.
{
    return a + b;
}

int main() 
{
    int num1, num2, sum;

    printf("Enter First number: ");
    scanf("%d", &num1);
    printf("Enter Second number: ");
    scanf("%d", &num2);

    sum = findSum(num1, num2);  //calling the function.

    printf("Sum of %d and %d is: %d", num1, num2, sum); //printing the result.

    return 0;
}