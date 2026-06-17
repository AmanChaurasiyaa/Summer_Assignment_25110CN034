//Q66  Write a program to Union of arrays.

#include<stdio.h>

int main()
{
    int n, m, i, j;

    printf("Enter the size of the first array: ");
    scanf("%d", &n);
    int array1[n];
    printf("Enter the elements of the first array: ");
    for(i = 0; i < n; i++)
        scanf("%d", &array1[i]);

    printf("Enter the size of the second array: ");
    scanf("%d", &m);
    int array2[m];
    printf("Enter the elements of the second array: ");
    for(j = 0; j < m; j++)
        scanf("%d", &array2[j]);

    // Remove duplicates from array1
    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(array1[i] == array1[j])
            {
                for(int k = j; k < n - 1; k++)
                {
                    array1[k] = array1[k + 1];
                }
                n--;
                j--;
            }
        }
    }

    // Remove duplicates from array2
    for(i = 0; i < m; i++)
    {
        for(j = i + 1; j < m; j++)
        {
            if(array2[i] == array2[j])
            {
                for(int k = j; k < m - 1; k++)
                {
                    array2[k] = array2[k + 1];
                }
                m--;
                j--;
            }
        }
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            if(array1[i] == array2[j])
            {
                for(int k = j; k < m - 1; k++)
                {
                    array2[k] = array2[k + 1];
                }
                m--;
                j--;
            }
        }
    }

    // Merge both arrays into union array
    int unionarr[m + n];
    for(i = 0; i < n; i++)
    {
        unionarr[i] = array1[i];
    }
    for(j = 0; j < m; j++)
    {
        unionarr[n + j] = array2[j];
    }

    printf("The union array is: ");
    for(i = 0; i < m + n; i++)
    {
        printf("%d ", unionarr[i]);
    }
    printf("\n");

    return 0;
}