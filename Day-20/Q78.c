//Q78  Write a program to Check symmetric matrix. 

#include<stdio.h>

int main()
{
    int n, m, i, j;

    //taking input of size of square matrix.
    printf("Enter the size of the Square matrix: ");
    scanf("%d", &n);

    m=n;

    //declarying and taking input the elements of the matrix.
    int matrix[n][m];
    printf("Enter the elements of the matrix to check if the matrix is symmetric: \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    //printing the matrix.
    printf("the matrix is: \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("\t%d", matrix[i][j]);
        }
        printf("\n");
    }

    //declarying and making the transpose matrix.
    int transMatrix[n][m];
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            transMatrix[j][i]=matrix[i][j];
        }
    }
    //printing the transpose matrix.
    printf("the transpose of the matrix is: \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("\t%d", transMatrix[i][j]);
        }
        printf("\n");
    }

    //checking if the matrix and its transpose is equale.
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(transMatrix[i][j]!=matrix[i][j])
            {
                //printing the result if not.
                printf("The matrix is not symmetric.");
                return 0;
            }
        }
    }
    //printing the result if yes.
    printf("The matrix is Symmetric:");

    return 0;
}