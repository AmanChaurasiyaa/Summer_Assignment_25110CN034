/*Q2. Write a program to Print multiplication table of 
a given number. */

#include<stdio.h>
int main()
{
    int num;
    
    printf("enter the number for which you want to print the multiplication table: ");
    scanf("%d",&num);

    for(int i=1;i<=10;i++)
    {
        printf("%d * %d = %d\n",num,i,num*i);
    }
    return 0;
}