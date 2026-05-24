//Write a program to Count digits in a number. 

#include<stdio.h>
int main()
{
    int Num,count=0;
    
    printf("Enter the number for which you want to count the digits: ");
    scanf("%d",&Num);

    while(Num!=0)
    {
    Num/=10;
    count++;
    }

    printf("The number of digits in %d is: %d",Num,count);
    return 0;
}