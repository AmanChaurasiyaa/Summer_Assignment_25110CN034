//Q76  Write a program to Find diagonal sum. 

#include<stdio.h>
int main()
{
    //asking the user about rows and columns of the matrix.
    int n, m,i ,j, sum1=0, sum2=0,totalSum;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    m=n;
    int matrix[n][m];

    //taking input of elements in matrix.
    printf("Enter the elements of the first matrix: ");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("Enter the element (%d x %d): ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(i == j)
            {
                //primary diagonal sum.
                sum1 = sum1 + matrix[i][j];
            }
            
            if(i + j == n - 1)
            {
                //secondary diagonal sum.
                sum2 = sum2 + matrix[i][j];
            }
        }
    }
    totalSum = sum1 + sum2;
    //removing center element once.
    if(n % 2 == 1)
    {
        totalSum = totalSum - matrix[n/2][n/2];
    }

    //printing the matrix.
    printf("Matrix befor transpose: \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("\t%d", matrix[i][j]);
        }
        printf("\n");
    }

    printf("The sum of diagonal elements is: %d", totalSum);

    return 0;
}