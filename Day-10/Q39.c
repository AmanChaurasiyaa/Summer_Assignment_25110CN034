#include<stdio.h>

int main()
{
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for(int i = 1; i <= rows; i++)
    {
        for(int j = i; j <= rows; j++)  // Print spaces
            printf(" ");

        for(int k = 1; k <= i; k++)     // Print increasing numbers (1 to i)
            printf("%d", k);

        for(int k = i-1; k >= 1; k--)    // Print decreasing numbers (i-1 to 1)
            printf("%d", k);

        printf("\n");
    }

    return 0;
}