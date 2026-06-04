//Q13.  Write a program to Generate Fibonacci series.

#include<stdio.h>
int main()
{
    int num, firstTerm=0,secondTerm=1;

    printf("Enter the no. of terms in Fibonacci series: ");
    scanf("%d", &num);

    printf("Fibonacci Series: ");

    if(num==1)  //if no. of terms is 1.
    {
        printf("%d ", firstTerm);
    }
    else if(num==2)  //if the no. of terms is 2
    {
        printf("%d %d ", firstTerm, secondTerm);
    }
    else  //if no. of terms greater than 2.
    {
        printf("%d %d ", firstTerm, secondTerm);  //upto 2nd term.

        for (int i=3; i<=num; i++)   //beyond 2nd term.
        {
            int nextTerm = firstTerm + secondTerm; 
            printf("%d ", nextTerm);
            firstTerm = secondTerm;
            secondTerm = nextTerm;
        }
    }
        
    return 0;
}