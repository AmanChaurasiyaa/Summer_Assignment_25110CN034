//Q26  Write a program to Recursive Fibonacci.

#include<stdio.h>

int fibonacci(int num)  //function to calculate fibonacci of ith term.
{
    if(num==0)
    {
        return 0;
    }
    if(num==1)
    {
        return 1;
    }
    return fibonacci(num-1) + fibonacci(num-2);
}

int main()
{
    int number;

    printf("Enter the no. of terms of Fiboacci: ");
    scanf("%d", &number);

    printf("Fibonacci series id: ");
    for(int i=0; i<number; i++)
    {
        printf("%d\t", fibonacci(i)); //printing the fibonacci of ith term.
    }
    return 0;
}

/* I was a little bit confued wheather i have to code for the particular term or the whole series.So, i code for the series.*/