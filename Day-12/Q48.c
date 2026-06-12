//Q48   Write a program to Write function for perfect number. 

#include <stdio.h>
int isPerfect(int num) 
{
    int sum = 0;

    // Calculate the sum of proper divisors
    for (int i = 1; i <= num / 2; i++) 
    {
        if (num % i == 0) 
        {
            sum += i;
        }
    }

    return (sum == num); // Return true if it's a perfect number
}

int main() 
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPerfect(num)) 
    {
        printf("%d is a perfect number.\n", num);
    } 
    else 
    {
        printf("%d is not a perfect number.\n", num);
    }

    return 0;
}