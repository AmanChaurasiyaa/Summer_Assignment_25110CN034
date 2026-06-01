/*Q10. Write a program to Print prime numbers in a 
range. */

#include<stdio.h>
int main()
{
    int num1, num2, count=0;

    printf("Enter the starting number of the range in which you want to check for prime numbers: ");
    scanf("%d",&num1);

    printf("Enter the ending number of the range in which you want to check for prime numbers: ");
    scanf("%d",&num2);

    printf("The prime numbers between %d and %d are: ", num1, num2);
    for(int i=num1; i<=num2; i++) //loop from num1 to num2 to check for prime numbers.
    {
        count=0;
        for( int j=2; j<=(i/2);j++)
        {
            if(i%j==0)
            {
                count++;
                break;  //as soon as count = 1 the no. is no more prime.
            }
        }

        if(count==0 && i>1) 
        {
            printf("%d ", i);
        }
    }

    return 0;
}