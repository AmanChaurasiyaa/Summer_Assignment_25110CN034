//Q7. Write a program to Find product of digits. 

#include<stdio.h>
int main()  {
    int num, duplicate, multiple = 1 ;

    printf("Enter the number you want to multiply its digits: ");
    scanf("%d",&num);

    duplicate = num;

    while(num!=0)   {
        multiple = multiple * (num % 10);
        num /= 10;
    }

    printf("The multiple of digits of %d is: %d", duplicate, multiple);
    return 0; 
}
