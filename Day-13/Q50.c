//Q50  Write a program to Find sum and average of array.

#include<stdio.h>

int main()
{
    int n, sum=0;
    float average;   // here n is size of array.
    printf("Enter the size of Array: ");
    scanf("%d", &n);

    int array[n];
    printf("Enter the elements of the Array: ");
    for(int i=0;i<n;i++)    //taking array as input.  
    {
        scanf("%d", &array[i]);
    }

    for(int j=0;j<n;j++)  //calculating Sum.
    {
        sum = sum + array[j];
    }

    average = (float)sum/n;  //Calculating average.

    printf("The Sum of array is: %d\n",sum);
    printf("The Average of array is: %f", average);

    return 0;
}