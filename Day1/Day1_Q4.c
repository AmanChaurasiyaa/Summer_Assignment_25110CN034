//Q4  Write a program to Count digits in a number. 

#include<stdio.h>
int main()
{
    int duplicate,num,count=0;
    
    printf("Enter the number for which you want to count the digits: ");
    scanf("%d",&num);
    duplicate=num;

    while(num!=0)
    {
    num/=10;
    count++;
    }

    printf("The number of digits in %d is: %d",duplicate,count);
    return 0;
}