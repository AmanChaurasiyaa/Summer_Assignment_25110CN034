//Q80  Write a program to Find column-wise sum.

#include<stdio.h>

int main()
{
    int n, m, i, j, sum;

    //taking input of the number of rows and columns of the matrix.
    printf("Enter the number of rows in the matrix: ");
    scanf("%d", &n);
    printf("Enter the number of columns in the matrix: ");
    scanf("%d", &m);

    //taking input of the elements of the matrix.
    int matrix[n][m];
    printf("Enter the elements of the matrix one by one: ");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("Enter the element(%d x %d): ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("The matrix is: \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("\t%d", matrix[i][j]);
        }
        printf("\n");
    }

    //taling transpose of the matrix.
    int transMatrix[m][n];
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            transMatrix[j][i]=matrix[i][j];
        }
    }

    //taking the sum of rows of transpose matrix which are columns of the original matrix.
    for(i=0; i<m; i++)
    {
        sum=0;
        for(j=0; j<n; j++)
        {
            sum+=transMatrix[i][j];
        }
        printf("\nThe sum of the elements of column %d is: %d", i+1, sum);
    }

    return 0;
}