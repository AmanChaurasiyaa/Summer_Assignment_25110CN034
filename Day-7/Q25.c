//Q25.  Write a program to Recursive factorial.

#include <stdio.h>

int factorial(int n)  //code for user defined function to find factorial.
{
    if (n == 0 || n == 1) 
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) 
    {
        printf("Factorial is not defined for negative numbers\n");
    }
     else 
    {
        printf("Factorial of %d is: %d\n", num, factorial(num)); //calling the function and printing the value.
    }

    return 0;
}
