/*Q1.  Write a program to Calculate sum of first N 
natural numbers.*/ 

#include<stdio.h>
int main()
{
    int Num;
    printf("enter the Natural number upto which you want to add: ");
    scanf("%d",&Num);

    int sum=0;
    for(int i=1;i<=Num;i++)
    {
        sum+=i;
    }

    printf ("the sum of first %d natural number is: %d",Num,sum);
    return 0;
}