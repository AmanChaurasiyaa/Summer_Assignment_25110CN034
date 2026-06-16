//Q63  Write a program to Find pair with given sum.

#include<stdio.h>

int main()
{
    int n, sum;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int array[n];   //taking input in array.
    printf("Enter the elements of array one by one: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Enter the sum to find pair: ");   //taking input of the requirement.
    scanf("%d", &sum);

    int found=0;  
    printf("The pairs with given sum are: ");  //searching the pairs.
    for(int j=0; j<n; j++)
    {
        for(int k=j+1; k<n; k++)
        {
            if(array[j]+array[k]==sum)   //condition.
            {
                printf("%d,%d\t",array[j],array[k]);
                found++;
            }
        }
    }

    if(found==0)  //if no pair is found.
    {
        printf("No pair found.");
    }

    return 0;
}