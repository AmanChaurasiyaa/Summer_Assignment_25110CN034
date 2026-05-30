// Q12  Write a program to Find LCM of two numbers.

#include<stdio.h>
int main()
{
    int num1, num2, max, lcm;

    printf("Enter the first number: ");
    scanf("%d",&num1);

    printf("Enter the second number: ");
    scanf("%d",&num2);

    max = (num1 > num2) ? num1 : num2;

    for(int i=max; ; i++) //creating an infinite loop which will be terminated manually.
    {
        if(i%num1==0 && i%num2==0) //when i is divisible by both num1 and num2.
        {
            lcm = i;
            break;   //exiting the loop as soon as we find the LCM.
        }
    }

    printf("The LCM of %d and %d is: %d", num1, num2, lcm);

    return 0;
}