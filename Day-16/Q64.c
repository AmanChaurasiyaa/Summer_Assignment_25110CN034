//Q64  Write a program to Remove duplicates from array.

#include<stdio.h>
int main()
{
    int n, found=0;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int array[n];
    printf("Enter the elements of array one by one: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &array[i]);
    }

    for(int j=0; j<n; j++)
    {
        for(int k=j+1; k<n;k++)
        {
            if(array[j]==array[k])
            {
                for(;k<n-1;k++)
                {
                    array[k]=array[k+1];
                }
                n--;
                k--;
            }
        }
    }
    printf("The array after  removing the duplicates: ");
    for(int m=0; m<n;m++)
    {
        printf("%d\t",array[m]);
    }

    return 0;
}