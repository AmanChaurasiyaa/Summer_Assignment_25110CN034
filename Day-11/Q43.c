//Q43  Write a program to Write function to check prime.

#include <stdio.h>

int isPrime(int num) //code for function to check prime number.
{
    if (num <= 1)
        return 0; // Not prime

    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
            return 0; // Not prime
    }
    return 1; // Prime
}

int main() 
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrime(num)) //calling the function.
        printf("%d is a prime number.", num); //printing the result.
    else
        printf("%d is not a prime number.", num); //printing the result.

    return 0;
}