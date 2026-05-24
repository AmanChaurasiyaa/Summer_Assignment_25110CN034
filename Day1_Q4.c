//Write a program to Count digits in a number. 

#include<stdio.h>
int main()
{
    int a,Num,count=0;
    
    printf("Enter the number for which you want to count the digits: ");
    scanf("%d",&Num);
    a=Num;
    while(Num!=0)
    {
    Num/=10;
    count++;
    }

    printf("The number of digits in %d is: %d",a,count);
    return 0;
}