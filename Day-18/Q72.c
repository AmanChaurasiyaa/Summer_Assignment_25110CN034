//Q72  Write a program to Sort array in descending order.

#include<stdio.h>
int main()
{
    int n, i, j, max;

    printf("Enter the size of array: ");
    scanf("%d", &n);
    int array[n];
    printf("Enter the elements of the array one by one: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &array[i]);
    }

     for(i=0;i<n-1;i++)
    {
        max=i;
        for(j=i;j<n;j++)
        {
            if(array[max]<array[j])
            {
                max = j;
            }
        }
        if(max!=i)
        {
            int swap = array[i];
            array[i]=array[max];
            array[max]=swap;
        }
    }

    //printing the descinding order sorted array.
    printf("The descending order sorted array is: ");
    for(i=0; i<n; i++)
    {
        printf("%d\t", array[i]);
    }

    return 0;
}
