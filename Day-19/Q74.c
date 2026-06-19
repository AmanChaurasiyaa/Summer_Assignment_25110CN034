//Q74  Write a program to Subtract matrices. 

#include<stdio.h>
int main()
{
    //asking the user about rows and columns of the matrices.
    int n, m,i ,j;
    printf("Enter the number of rows in matrices: ");
    scanf("%d", &n);
    printf("Enter the number of column in matrices: ");
    scanf("%d", &m);

    int matrix1[n][m];
    int matrix2[n][m];

    //taking input of elements in first matrix.
    printf("Enter the elements of the first matrix: ");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("Enter the element (%d x %d): ", i+1, j+1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    //taking input of elementson second matrix.
    printf("Enter the elements of the second matrix: ");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("Enter the element (%d x %d): ", i+1, j+1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // subtracting the elements of both matrices and printing them.
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("\t%d", matrix1[i][j] - matrix2[i][j]);
        }
        printf("\n");
    }

    return 0;
}