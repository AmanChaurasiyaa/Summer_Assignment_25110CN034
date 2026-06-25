//Q97  Write a program to Merge two sorted arrays. 

#include <stdio.h>

int main()
{
    int n1, n2, i, j, k;
    
    //declaring first array and taking input from user.
    printf("Enter the number of elements in first sorted array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter the elements of first sorted array:\n");
    for (i=0; i<n1; i++) 
    {
        scanf("%d", &arr1[i]);
    }

    //declaring second array and taking input from user.
    printf("Enter the number of elements in second sorted array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter the elements of second sorted array:\n");
    for (i=0; i<n2; i++) 
    {
        scanf("%d", &arr2[i]);
    }
    
    int merged[n1+n2];
    // Merging the two sorted arrays
    i = 0;
    j = 0;
    k = 0;
    while (i<n1 && j<n2)
    {
        if (arr1[i]<arr2[j]) 
        {
            merged[k++]=arr1[i++];
        } else
        {
            merged[k++]=arr2[j++];
        }
    }

    // Copy remaining elements of arr1, if any
    while (i<n1)
    {
        merged[k++] = arr1[i++];
    }

    // Copy remaining elements of arr2, if any
    while (j<n2)
    {
        merged[k++]=arr2[j++];
    }

    // Printing the merged array
    printf("Merged sorted array:\n");
    for (i=0; i<k; i++)
    {
        printf("%d\t", merged[i]);
    }
    
    return 0;
}