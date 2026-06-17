//Q67  Write a program to Intersection of arrays.

#include<stdio.h>

int main()
{
    int n, m, i, j;

    printf("Enter the size of the first array: ");   //declarying and taking input in array1.
    scanf("%d", &n);
    int array1[n];
    printf("Enter the elments of the first array one by one: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &array1[i]);
    }

    printf("Enter the size of the second array: ");   //declarying and taking input in array2.
    scanf("%d", &m);
    int array2[m];
    printf("Enter tne elements of the second array one by one: ");
    for(j=0; j<m; j++)
    {
        scanf("%d", &array2[j]);
    }

    for(i = 0; i < n; i++)   //removing duplicates from array1.
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

    for(i = 0; i < m; i++)  //removing duplicates from array2.
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
    int count=0;
    int size = n < m ? n : m;
    int intersectionarr[size];  //taking intersection.
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            if(array1[i] == array2[j])
            {
                intersectionarr[count] = array1[i];
                count++;
                break;
            }
        }
    }
    printf("The intersection of arrays are: ");  //printing the result
    for(i=0; i<count; i++)
    {
        printf("%d\t", intersectionarr[i]);
    }

    return 0;
}