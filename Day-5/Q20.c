//Q20  Write a program to Find largest prime factor.

#include<stdio.h>
int main()
{
    int num, factor, count;

    printf("Enter a number to find it largest prime factor: ");
    scanf("%d", &num);

    for(int i=1; i<=num; i++)
    {
        count=0;

        if(num%i==0)  //finding factor.
        {
            for(int j=2;j<=i/2;j++)  //chcking if the factor is prime.
            {
                if(i%j==0)
                {
                    count++;
                }
            }
        if(count==0)
            {
                factor=i;  //updating the value of largest prime factor
            }
        }
    }
    printf("The largest prime factor of %d is %d", num, factor);

    return 0;
}