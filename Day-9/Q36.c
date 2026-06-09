/*Q36  Write a program to Print hollow square 
pattern. 
***** 
*   * 
*   * 
*   * 
*****      */

#include<stdio.h>

int main()
{
    int side;

    printf("Enter the Number of '*' in a Side of Square: ");
    scanf("%d", &side);

    for(int i=1;i<=side;i++)  //rowss of the grid.
    {
        for(int j=1;j<=side;j++)  //columns of the grid.
        {
            if(i==1||i==side || j==1||j==side)   //conditions for boundary of the grid.
            {
                printf("*");
            }
            else
            {
                (printf(" "));
            }
        }
        printf("\n");
    }
    return 0;
}
