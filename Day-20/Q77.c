//Q77  Write a program to Multiply matrices.

#include<stdio.h>
int main()
{
    int n, m, p, q, i, j;

    //taling input of rows and columns of matrices.
    printf("Enter the number of rows in first matrix: ");
    scanf("%d", &n);
    printf("Enter the number of columns in first matrix: ");
    scanf("%d", &m);
    printf("Enter the number of rows in second matrix: ");
    scanf("%d", &p);
    printf("Enter the number of columns in second matrix: ");
    scanf("%d", &q);

    //checking if the multiplication is possible or not.
    if(m!=p)
    {
        printf("The multiplication is not possible.");
        return 0;
    }

    //declarying and taking input in first matrix.
    int matrix1[n][m];
    printf("Enter the elementd of the first matrix: \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m;j++)
        {
            printf("Enter the element (%d x %d): ", i+1, j+1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    //declarying and taking input in second matrix.
    int matrix2[p][q];
    printf("Enter the elements of the second matrix: \n");
    for(i=0; i<p; i++)
    {
        for(j=0; j<q; j++)
        {
            printf("Enter the element (%d x %d): ", i+1, j+1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    //multiplying the matrices.
    int result[n][q];
    for(i=0; i<n; i++)
    {
        for(j=0; j<q;j++)
        {
            result[i][j]=0;
            for(int k=0; k<m; k++)
            {
                result[i][j]+=matrix1[i][k]*matrix2[k][j];
            }
        }
    }

    //printing the result.
    printf("The resultant matrix is: \n");
    for(i=0; i<n;i++)
    {
        for(j=0; j<q;j++)
        {
            printf("\t%d", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}