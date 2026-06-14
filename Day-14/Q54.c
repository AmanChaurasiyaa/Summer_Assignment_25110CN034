//Q54  Write a program to Frequency of an element. 

#include<stdio.h>

int main()
{
    int n; // here n is size of array.  
    printf("Enter the size of Array: ");
    scanf("%d", &n);

    int array[n];

    printf("Enter the elements of the Array: ");
    for(int i=0;i<n;i++)    //taking array as input.  
    {
        scanf("%d", &array[i]);
    }

    int element,frequency=0;

    printf("Enter the element you want to count its frequency: ");
    scanf("%d",&element);

    for(int j=0; j<n;j++)
    {
        if(element==array[j])
        {
            frequency++;
        }
    }
    printf("The frequency of the element %d is: %d",element,frequency);

    return 0;
}