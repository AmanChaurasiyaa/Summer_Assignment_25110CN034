//Q69  Write a program to Bubble sort.

#include<stdio.h>

int main()
{
    int n, i, j;

    //declarying and taking input in array.
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int array[n];
    printf("Enter the elements of the array one by one: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &array[i]);
    }

    //printing unsorted array.
    printf("array befor sorting: ");
    for(i=0; i<n; i++)
    {
        printf("%d\t", array[i]);
    }
    printf("\n");
    
    //sorting the array.
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(array[j]>array[j+1])
            {
                int swap=array[j];
                array[j]=array[j+1];
                array[j+1]=swap;
            }
        }
    }

    //printing sorted array.
    printf("The sorted array is: ");
    for(i=0; i<n; i++)
    {
        printf("%d\t", array[i]);
    }

    return 0;
}