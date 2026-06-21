//Q81  Write a program to Find string length without strlen().

#include<stdio.h>

int main()
{
    //declarying a string of length 100.
    char string[100];
    int length = 0;

    //taking input in the string.
    printf("Enter the string: ");
    fgets(string, sizeof(string), stdin);

    //printing the string.
    printf("The String is: %s\n", string);

    //counting the length including spaces.
    while (string[length]!='\0' && string[length]!='\n')
    {
        length++;
    }

    //printing the length.
    printf("Length of the string: %d\n", length);

    return 0;
}