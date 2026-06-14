//Q52  Write a program to Count even and odd elements.

#include<stdio.h>

int main()
{
    int n, even=0, odd=0; // here n is size of array.
    printf("Enter the size of Array: ");
    scanf("%d", &n);

    int array[n];

    printf("Enter the elements of the Array: ");
    for(int i=0;i<n;i++)    //taking array as input.  
    {
        scanf("%d", &array[i]);
    }

    for(int i=0;i<n;i++)
    {
        if(array[i]%2==0)  //condition for Even.
        {
            even++;
        }
        else  //condition for odd.
        {
            odd++;
        }
    }
    printf("The number of even element in the array is: %d\n", even);
    printf("The numberof odd element in the array is: %d", odd);

    return 0;
}