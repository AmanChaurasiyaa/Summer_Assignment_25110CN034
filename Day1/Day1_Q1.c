/*Q1.  Write a program to Calculate sum of first N 
natural numbers.*/ 

#include<stdio.h>
int main()
{
    int num;
    
    printf("enter the Natural number upto which you want to add: ");
    scanf("%d",&num);

    int sum=0;
    for(int i=1;i<=num;i++)
    {
        sum+=i;
    }

    printf ("the sum of first %d natural number is: %d",num,sum);
    return 0;
}