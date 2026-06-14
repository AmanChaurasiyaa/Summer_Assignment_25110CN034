//Q51  Write a program to Find largest and smallest element.

#include<stdio.h>

int main()
{
    int n; // here n is size of array.
    float average;   
    printf("Enter the size of Array: ");
    scanf("%d", &n);

    int array[n];
    printf("Enter the elements of the Array: ");
    for(int i=0;i<n;i++)    //taking array as input.  
    {
        scanf("%d", &array[i]);
    }
    
    int min=array[0];
    int max=array[0];

    for(int i=0;i<n;i++)
    {
        if(array[i]>max)  //condition for largest.
        {
            max=array[i];
        }
        if(array[i]<min)  //condition for smallest.
        {
            min=array[i];
        }
    }
    printf("The largest element of array is: %d\n", max);
    printf("The smalest element of the array is: %d", min);

    return 0;
}