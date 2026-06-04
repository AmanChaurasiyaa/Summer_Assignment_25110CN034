//Q14.  Write a program to Find nth Fibonacci term.

#include<stdio.h>
int main()
{
    int num, firstTerm=0,secondTerm=1, nthTerm;
    
    printf("Enter the the term you want to find in Fibonacci series: ");
    scanf("%d", &num);

    if(num==1)  //if first term is asked.
    {
        printf("the 1st term is: %d", firstTerm);
    }
    else if(num==2)  //if 2nd term is asked.
    {
        printf("The second term is: %d", secondTerm);
    }
    else  //if nth term is asked.
    {
        for (int i=3; i<=num;i++)  //nth term calculation.
        {
            nthTerm = firstTerm + secondTerm;
            firstTerm = secondTerm;
            secondTerm = nthTerm;
        }
        printf("The %dth term is: %d", num, nthTerm);
    }
    return 0;
}