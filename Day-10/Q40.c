#include<stdio.h>

int main()
{
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for(int i = 1; i <= rows; i++)
    {
        for(int j = i; j <= rows; j++)   // Print spaces
            printf(" ");

        for(int k = 1; k <= i; k++)    // Print increasing letters (A to i)
            printf("%c", 'A' + k - 1);

        for(int k = i-1; k >= 1; k--)    // Print decreasing letters (i-1 to A)
            printf("%c", 'A' + k - 1);

        printf("\n");
    }

    return 0;
}