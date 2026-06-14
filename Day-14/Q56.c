//Q56  Write a program to Find duplicates in array. 

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

    printf("The duplicate elements in the array are: ");
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(array[i]==array[j])  //condition for duplicate.
            {
                printf("%d\t",array[i]);
                break;
            }
        }
    }

    return 0;
}