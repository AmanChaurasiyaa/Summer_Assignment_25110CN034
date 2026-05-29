/*Q8.  Write a program to Check whether a number is 
palindrome. */

#include<stdio.h>
int main()  {
    int num, duplicate, sum = 0;

    printf("Enter the number for which you want to check Palindrome: ");
    scanf("%d",&num);

    duplicate = num;

    while(num!=0)   {
        sum = sum * 10 + (num % 10);
        num /= 10;
    }

    if(sum==duplicate)  {
        printf("The number %d is Palindrome", duplicate);
    }
    else    { 
        printf("The number %d is not a Palindrome", duplicate);
    }
    return 0;    
}
