/* Q34  Write a program to Print reverse number 
triangle. 
 
12345 
1234 
123 
12 
1 
*/

#include<stdio.h>

int main()
{
    int row;

    printf("Enter the Number of column you want to print: ");
    scanf("%d", &row);

    for(int i=row;i>0;i--)  //loop for rows.
    {
        for(int j=1;j<=i;j++)  // loop for columns.
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}