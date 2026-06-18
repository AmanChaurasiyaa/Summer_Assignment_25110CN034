//Q70  Write a program to Selection sort.

#include<stdio.h>

int main()
{
    int n, i, j, min;

    //declarying and taking input in array.
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int array[n];
    printf("Enter the elements of the array one by one: ");
    for (i=0; i<n; i++)
    {
        scanf("%d", &array[i]);
    }

    //printing array before sorting.
    printf("Array before sorting: ");
    for(i=0; i<n; i++)
    {
        printf("%d\t", array[i]);
    }
    printf("\n");

    //sorting the array.
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i;j<n;j++)
        {
            if(array[min]>array[j])
            {
                min = j;
            }
        }
        if(min!=i)
        {
            int swap = array[i];
            array[i]=array[min];
            array[min]=swap;
        }
    }

    //printing the sorted array.
    printf("array after sorting: ");
    for(i=0; i<n; i++)
    {
        printf("%d\t", array[i]);
    }

    return 0;
}