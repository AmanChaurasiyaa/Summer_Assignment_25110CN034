/*Q32.  Write a program to Print repeated-number 
pattern. 
1 
22 
333 
4444 
55555
*/

#include<stdio.h>
void main()
{
    int column;

    printf("Enter the number of column you want to print:");
    scanf("%d", &column);

    for(int i=1; i<=column; i++)  //loop for columns.
    {
        for(int j=1; j<=i;j++)   //loop for rows.
        {
            printf("%d", i);
        }
        
        printf("\n");  //addding next line after every column.
    }
}