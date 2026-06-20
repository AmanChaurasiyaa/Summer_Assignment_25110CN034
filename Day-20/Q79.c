//Q79  Write a program to Find row-wise sum. 

#include<stdio.h>

int main()
{
    int n, m, i, j, sum;

    //taking input of number of rows and columns.
    printf("Enter the number of rows in the matrix: ");
    scanf("%d", &n);
    printf("Enter the number of columns in the matrix: ");
    scanf("%d", &m);

    //declarying the matrix and taking the input of elements.
    int matrix[n][m];
    printf("Enter the elements of the matrix: \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("Enter the element (%d x %d): ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }

    //printing the matrix.
    printf("The matrix is: \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("\t%d", matrix[i][j]);
        }
        printf("\n");
    }

    //taking row wise sum.
    for(i=0; i<n; i++)
    {
        sum=0;
        for(j=0; j<m; j++)
        {
            sum+=matrix[i][j];
        }
        //printing the result.
        printf("\nThe sum of elements of row %d is: %d",i+1 ,sum);
    }

    return 0;
}