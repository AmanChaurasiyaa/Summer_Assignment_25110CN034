//Q29  Write a program to Print half pyramid pattern.

#include<stdio.h>
void main()
{
    int column;

    printf("Enter the number of column you want to print: ");
    scanf("%d", &column);

    for(int i=1;i<=column;i++)  //loop for columns.
    {
        for(int j=1;j<=i;j++)  //loop for rows.
        {
            printf("*");
        }
        printf("\n");  //after every column mone to next line.
    }
}