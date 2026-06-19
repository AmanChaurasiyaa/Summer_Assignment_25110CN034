//Q75 Write a program to Transpose matrix.

#include<stdio.h>
int main()
{
    //asking the user about rows and columns of the matrix.
    int n, m,i ,j;
    printf("Enter the number of rows in matrix: ");
    scanf("%d", &n);
    printf("Enter the number of column in matrix: ");
    scanf("%d", &m);

    int matrix[n][m];
    int transMatrix[n][m];

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

    //taking transpose of the matrix.
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            transMatrix[j][i]=matrix[i][j];
        }
    }

    //printing the transpose matrix.
    printf("The matrix after transpose: \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("\t%d", transMatrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}