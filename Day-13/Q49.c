//Q45  Write a program to Input and display array.

#include<stdio.h>

int main()
{
    int n;   // here n is size of array.
    printf("Enter the size of Array: ");
    scanf("%d", &n);

    int array[n];
    printf("Enter the elements of the Array: ");
    for(int i=0;i<n;i++)    //taking array as input.  
    {
        scanf("%d", &array[i]);
    }

    printf("The Elements of array is: ");
    for(int j=0;j<n;j++)   //printing the array.
    {
        printf("%d\t",array[j]);
    }

    return 0;
}