#include <stdio.h>

int main() 
{
    int num, count = 0;

    printf("Enter a positive Integer: ");
    scanf("%d", &num);

    while (num > 0) //counting the set bits.
    {
        if (num % 2 == 1) 
        {
            count++;
        }
        num = num / 2;
    }

    printf("Number of set bits = %d\n", count);

    return 0;
}