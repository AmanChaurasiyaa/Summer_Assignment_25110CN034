/* Q5. Write a program to Find sum of digits of a 
number. */

#include<stdio.h>
int main() {
    int num, duplicate, sum=0;

    printf("Enter the Number you want to add its digits: ");
    scanf("%d",&num);

    duplicate =  num;

    while(num!=0) {
        sum = sum + num % 10;
        num /= 10;
    }

    printf("The sum of the digits of %d is: %d", duplicate, sum);
    return 0;
}