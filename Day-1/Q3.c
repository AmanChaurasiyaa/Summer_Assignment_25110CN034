/*Q3. Write a program to Find factorial of a number. */

#include<stdio.h>
int main()
{
    int num, factorial=1;

    printf("enter the number for which you want to calculate the factorial: ");
    scanf("%d",&num);

    for(int i=1;i<=num;i++)
    {
        factorial*=i;
    }
    
    printf("The actorial of %d is: %d",num,factorial);
    return 0;
}
