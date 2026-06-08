/* Q31.  Write a program to Print character triangle. 
A 
AB 
ABC 
ABCD 
ABCDE */

#include<stdio.h>
void main()
{
    int column;
    char j;

    printf("Emter the numbe rof the column: ");
    scanf("%d", &column);

    for (int i=1;i<=column;i++)  // loop for columns.
    {
        for(j='A';j<i+'A';j++)  // loop for rows, using ASCII values.
        {
            printf("%c", j);
        }

        printf("\n");
    }
}