//Q65  Write a program to Merge arrays.

#include<stdio.h>

int main()
{
    int n, m,i,j;

    printf("Enter the size of first array: ");   //declaring and taking input in first array.
    scanf("%d", &n);
    int array1[n];
    printf("Enter the elements of the first array one by one: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &array1[i]);
    }

    printf("Enter the size of the second array: ");  //declaring and taking input in seconf array.
    scanf("%d", &m);
    int array2[m];
    printf("Enter the elements of the second array one by one: ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &array2[i]);
    }

    int merged[n+m];  //declaring the merged array.
    for(i=0; i<n; i++)  //copying the array1.
    {
        merged[i] = array1[i];
    }
    for(j=0; j<m; j++)  //copying the array2.
    {
        merged[i+j] = array2[j];
    }

    printf("The merged array is: ");  //printing the merged array.
    for(j=0;j<n+m;j++)
    {
        printf("%d\t",merged[j]);
    }

    return 0;
}