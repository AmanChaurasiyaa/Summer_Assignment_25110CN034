/* Q30.  Write a program to Print number triangle. 
1 
12 
123 
1234 
12345   */

#include<stdio.h>
void main()
{
    int column,j;

    printf("Enter the number of column you want to print:");
    scanf("%d", &column);

    for(int i=1; i<=column; i++)  //loop for columns.
    {
        for(j=1; j<=i;j++)   //loop for rows.
        {
            printf("%d", j);
        }
        
        printf("\n");  //addding next line after every column.
    }
}