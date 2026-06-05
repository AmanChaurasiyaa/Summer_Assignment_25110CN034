//Q17.  Write a program to Check perfect number.

#include<stdio.h>
int main()
{
    int num, sum=0;
    printf("Enter the number to check Perfect number: ");
    scanf("%d", &num);

    for(int i=1; i<=(num/2); i++)  //check factors and add them.
    {
        if(num%i==0)
        {
            sum+=i;
        }
    }

    if(sum==num) //checking equality.
    {
        printf("The number %d is a Perfect Number", num);
    }
    else
    {
        printf("The number %d is not a Perfect Number", num);
    }

    return 0;
}