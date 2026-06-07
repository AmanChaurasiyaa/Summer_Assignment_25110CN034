//Q27.  Write a program to Recursive sum of digits.
#include<stdio.h>

int sumofDigits(int num) //user function to add sum of digits by recursion.
{
    if(num==0)
    {
        return 0;
    }
    return (num%10) + sumofDigits(num/10);
}

int main()
{
    int number;
    
    printf("Enter a number to find sum of its digits: ");
    scanf("%d", &number);

    printf("Sum of digits of %d is: %d", number, sumofDigits(number)); //calling the functio and pritig the result.

    return 0;
}