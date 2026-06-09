/*Q35  Write a program to Print repeated character 
pattern. 
A 
BB 
CCC 
DDDD 
EEEEE   */

#include<stdio.h>

int main()
{
    int row;

    printf("Enter the Number of column you want to print: ");
    scanf("%d", &row);

    for(int i=0;i<row;i++)  //loop for rows.
    {
        for(int j=0;j<=i;j++)  //loop for columns.
        {
            printf("%c", 'A'+i);  //using ASCII values.
        }
        printf("\n");
    }
    return 0;
}