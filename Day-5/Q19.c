//Q19.  Write a program to Print factors of a number. 

#include<stdio.h>
int main()
{
    int num;

    printf("Enter a number to find its factors: ");
    scanf("%d", &num);

    printf("The factors of %d are: ");

    for(int i=1; i<=num;i++)
    {
        if(num%i==0)
        {
            printf("%d\t", i);
        }
    }

    return 0;
}