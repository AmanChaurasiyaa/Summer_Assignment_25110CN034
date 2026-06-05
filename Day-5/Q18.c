//Q18.  Write a program to Check strong number.

#include<stdio.h>
int main()
{
    int num, copy, digit, product=1,sum=0;

    printf("Enter the number to check Strong Number: ");
    scanf("%d", &num);
    
    copy=num;

    while(num!=0)  //finding the digit.
    {
        product=1;

        digit=num%10;
        num/=10;
        
        for(int i=digit; i>0; i--)  //finding factorial of digit.
        {
            product*=i;
        }
        sum+=product;  //adding the factorial of digits.
    }
    if(sum==copy)  //checking equality.
    {
        printf("The Number %d is a Strong Number", copy);
    }
    else
    {
        printf("the number %d is not a Strong Number", copy);
    }
}