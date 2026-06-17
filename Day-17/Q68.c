//Q68  Write a program to Find common elements.

#include<stdio.h>

int main()
{
    int n, m, i, j, count=0;

    printf("Enter the size of the first array: ");   //declaring and taking input in first array.
    scanf("%d", &n);
    int array1[n];
    printf("Enter the elements of the first array one by one: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &array1[i]);
    }

    printf("Enter the size of second array: ");      //declaring and taking input in second array.
    scanf("%d", &m);
    int array2[m];
    printf("Enter the elements of second array: ");
    for(j=0; j<m; j++)
    {
        scanf("%d", &array2[j]);
    }

    int common[n];

    for(i=0; i<n; i++)                              //searching the common elements.
    {
        for(j=0; j<m; j++)
        {
            if(array1[i]==array2[j])
            {
                common[count] = array1[i];
                count++;
                break;
            }
        }
    }

    printf("The common elements of the arrays are: ");   // printing the common elements.
    for(j=0; j<count; j++)
    {
        printf("%d\t", common[j]);
    }
    printf("\n");

    return 0;
}