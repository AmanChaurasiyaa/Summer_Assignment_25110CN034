/*Q11.  Write a program to Find GCD of two numbers.*/

#include<stdio.h>
int main()
{
    int num1, num2, num3, gcd;

    printf("Enter the first Number: ");
    scanf("%d", &num1);

    printf("Enter the second Number ");
    scanf("%d", &num2);

    for(int i=1; (i<=num1)&&(i<=num2); i++) //GCD must not exceed any of the number.
    {
        if(num1 % i==0 && num2 % i==0)   //when i divide both the numbe it's a common factor.
        {
            gcd = i;
        }
    }

    printf("The GCD of %d and %d is: %d", num1, num2, gcd);

    return 0;
}