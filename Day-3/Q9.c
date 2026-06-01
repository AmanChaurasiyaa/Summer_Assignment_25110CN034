/*Q9.  Write a program to Check whether a number is 
prime. */

#include<stdio.h>
int main()  {
    int num, count=0;

    printf("Enter the number that you want to check Prime: ");
    scanf("%d",&num);

    for( int i=2; i<=(num/2);i++)
    {
        if(num%i==0)
        {
            count++;
        }
    }

    if(count==0) 
    {
        printf("The number %d is a Prime Number", num);
    }
    else
    {
        printf("the number %d is not a Prime Number", num);
    }

    return 0;
} 