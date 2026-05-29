//Q6.  Write a program to Reverse a number.

#include<stdio.h>
int main()  {
    int num, duplicate, sum=0;

    printf("Enter a number which you want to reverse: ");
    scanf("%d",&num);

    duplicate = num;

    while(num!=0)   {
        sum = sum*10 + num%10;
        num /= 10;
    }

    printf("The reverse of %d is: %d", duplicate, sum);
    return 0;
}