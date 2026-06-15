//Q59  Write a program to Rotate array right. 

#include<stdio.h>

int main()
{
    int n, i, j, temp;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Rotate array right by 1 position
    temp = arr[n - 1];
    for(i = n - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[0] = temp;
    
    printf("Array after rotating right: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}