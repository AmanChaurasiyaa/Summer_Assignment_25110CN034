//Q55  Write a program to Second largest element. 

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
    
    int max=array[0];
    int secondmax=array[0];

    for(int i=0;i<n;i++)
    {
        if(array[i]>max)  //condition for largest.
        {
            secondmax=max;
            max=array[i];
        }
        if(array[i]>secondmax && array[i]<max)  //condition for second largest.
        {
            secondmax=array[i];
        }
    }
    printf("The second largest element of array is: %d\n", secondmax);

    return 0;
}