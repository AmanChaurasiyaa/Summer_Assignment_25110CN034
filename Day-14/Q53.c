//Q53  Write a program to Linear search.

#include<stdio.h>

int main()
{
    int n,element; // here n is size of array.
    float average;   
    printf("Enter the size of Array: ");
    scanf("%d", &n);

    int array[n];

    printf("Enter the elements of the Array: ");
    for(int i=0;i<n;i++)    //taking array as input.  
    {
        scanf("%d", &array[i]);
    }

    printf("Enter the element you want to search: ");
    scanf("%d", &element);

    for(int j=0;j<n;j++)  //searching the element.
    {
        if(element==array[j])
        {
            printf("The element %d is on %dth position",element,j+1);
            break;
        }
    }

    return 0;
}