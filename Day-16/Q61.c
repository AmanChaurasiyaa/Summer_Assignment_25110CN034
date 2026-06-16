//Q61  Write a program to Find missing number in array. 

#include <stdio.h>

int main()
{
    int n, missingNum;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int array[n];
    printf("Enter the elements of the array one by one: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    // Sum of numbers from 1 to (n+1), since one number is missing
    int expectedSum = (n + 1) * (n + 2) / 2;

    int actualSum = 0;
    for (int j = 0; j < n; j++)
    {
        actualSum = actualSum + array[j];
    }

    missingNum = expectedSum - actualSum;

    printf("The missing number is: %d\n", missingNum);

    return 0;
}