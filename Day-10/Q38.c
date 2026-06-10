#include<stdio.h>

int main()
{
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for(int i = rows; i >= 1; i--)
    {
        for(int j = i; j <= rows; j++)  // Print spaces
            printf(" ");

        for(int k = 1; k <= 2*i-1; k++)  // Print stars
            printf("*");

        printf("\n");
    }

    return 0;
}