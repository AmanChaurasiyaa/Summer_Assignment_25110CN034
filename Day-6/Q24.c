//Q24.  Write a program to Find x^n without pow().

#include <stdio.h>
int main() 
{
    int numBase, numPower, result = 1;

    printf("Enter Base Number: ");
    scanf("%d", &numBase);

    printf("Enter Power: ");
    scanf("%d", &numPower);

    for (int i = 1; i <= numPower; i++) 
    {
        result = result * numBase;
    }

    printf("%d ^ %d = %d\n", numBase, numPower, result);

    return 0;
}