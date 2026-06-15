//Q57  Write a program to Reverse array. 


#include<stdio.h>

int main()
{
    int n; //n is the length of array.
    printf("Enter the length of array: ");
    scanf("%d", &n);

    int array[n];
    printf("Enter the elements of array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d", &array[i]);
    }

    int copy,len;
    len=n-1;

    for(int j=0;j<=n/2;j++)
    {
        copy=array[j];
        array[j]=array[len];
        array[len]=copy;
        len--;
    }

    printf("The revrsed array is: ");
    for(int k=0;k<n;k++)
    {
        printf("%d\t",array[k]);
    }
}