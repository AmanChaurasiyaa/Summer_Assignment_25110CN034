//Q71  Write a program to Binary search. 

#include<stdio.h>

int main()
{
    int n, i, j, min, targetElement, index;

    //declarying and taking input in array.
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int array[n];
    printf("Enter the elements of the array one by one: ");
    for (i=0; i<n; i++)
    {
        scanf("%d", &array[i]);
    }
    
    printf("Enter the target element: ");
    scanf("%d", &targetElement);

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

    //searching the element.
    for(i=0;i<n;i++)
    {
        if(targetElement==array[n/2])
        {
            index=n/2;
        }
        else if(targetElement>array[n/2])
        {
            i=n/2;
        }
        else
        {
            n=n/2;
        }
    }

    printf("\nThe target element %d is found at position %d in sorted array.",targetElement,index+1);
    
    return 0;
}