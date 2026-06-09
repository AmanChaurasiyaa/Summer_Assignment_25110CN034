/*
Write a program to Print reverse star pattern. 
***** 
**** 
*** 
** 
*        */

#include<stdio.h>

int main()
{
    int row;
    
    printf("Enter the Number of columns you want to print: ");
    scanf("%d", &row);

    for(int i=row;i>0;i--) //loop for rows.
    {
        for(int j=i;j>0;j--)  //loop for column.
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}