//Q21  Write a program to Convert decimal to binary.

#include<stdio.h>
int main()
{
    int num, binary[32], i=0;

    printf("Enter a decimal number to convert it into binary: ");
    scanf("%d", &num);

    while(num!=0) //converting into binary array.
    {
        binary[i]=num%2;
        num/=2;
        i++;
    }

    printf("The binary representation is: ");

    for(int j=i-1;j>=0;j--)  //printing the array.
    {
        printf("%d", binary[j]);
    }

    return 0;
}
