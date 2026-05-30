/*Q10.  Write a program to Print prime numbers in a 
range. */

#include<stdio.h>
int main()  
{

    int num, count=0;

    printf("Enter the number upto which you want to print the prime numbers: ");
    scanf("%d", &num);

    if(num==(0||1))   {
        printf("%d is neither a prime nor a composite number", num);
    } 
    /* Prime numbers must have exactly two distinct positive divisors whereas  Composite numbers must have more than two factors*/

    else
    {
        printf("the prime number in the range %d are: ",num);

        for(int i=2; i<=num; i++)
        {
            for(int j=2; j<=(i/2); j++) 
            // j<=(i/2) because no number is divisible by the number which is more than its half.
            {
                if(i % j == 0)
                {
                    count++;
                }
            }
            if(count==0)
            {
                printf("%d,\t", i);
            }

            count = 0;
        }
    }
    return 0;
}