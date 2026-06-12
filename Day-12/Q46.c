//Q46   Write a program to Write function for Armstrong.

#include <stdio.h>
#include <math.h>

int isArmstrong(int num) 
{
    int originalNum = num;
    int sum = 0;
    int n = 0;

    // Count the number of digits
    while (originalNum != 0) 
    {
        originalNum /= 10;
        n++;
    }

    originalNum = num; // Reset originalNum to the input number

    // Calculate the sum of the nth powers of its digits
    while (originalNum != 0) 
    {
        int digit = originalNum % 10;
        sum += pow(digit, n);
        originalNum /= 10;
    }

    return (sum == num); // Return true if it's an Armstrong number
}

int main() 
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num)) 
    {
        printf("%d is an Armstrong number.\n", num);
    } 
    else 
    {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}