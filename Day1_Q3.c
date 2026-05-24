/*Q3. Write a program to Find factorial of a number. */

#include<stdio.h>
int main()
{
    int Num, Factorial=1;
    printf("enter the number for which you want to calculate the factorial: ");
    scanf("%d",&Num);
    for(int i=1;i<=Num;i++)
    {
        Factorial*=i;
    }
    printf("The actorial of %d is: %d",Num,Factorial);
    return 0;
}
