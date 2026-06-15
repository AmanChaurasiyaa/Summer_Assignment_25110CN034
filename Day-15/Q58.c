//Q58   Write a program to Rotate array left.

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the length of array: ");
    scanf("%d", &n);

    int array[n];
    printf("Enter the elements of array: ");
    for(int i=0; i<n;i++)
    {
        scanf("%d", &array[i]);
    }

    int copy;
    copy=array[0];
    for(int j=0;j<n;j++)
    {
        array[j]=array[j+1];
    }
    array[n-1]=copy;

    printf("The rotated array is: ");
    for(int k=0;k<n;k++)
    {
        printf("%d\t",array[k]);
    }

    return 0;
}