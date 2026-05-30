/*Q12.  Write a program to Find LCM of two numbers. */

#include<stdio.h>
int main()
{
    int num1, num2, max, lcm;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    if(num1<num2) {
        max = num2;
    }
    else {
        max = num1; //it also covers case of equality.
    }
    for(int i=max; ;i++) //making an infinite loop to break it manually later.
    {
        if(i%num1==0 && i%num2==0) //when both the number divides i.
        {
            lcm=i;
            break;  // exit the loop.
        }
    }

    printf("The LCM of %d and %d is: %d", num1, num2, lcm);

    return 0;
}