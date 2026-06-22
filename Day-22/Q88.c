//Q88 Write a program to Remove spaces from string.

#include<stdio.h>

int main()
{
    char string[100];
    char result[100];
    int i=0, j=0;

    printf("Enter a string: ");
    fgets(string, sizeof(string), stdin);

    printf("the original string is: %s\n",string);

    while(string[i]!='\0')
    {
        if(string[i]!=' ' && string[i]!='\n')
        {
            result[j] = string[i];
            j++;
        }
        i++;
    }
    result[j]='\0';

    printf("The string without spacing is: %s\n", result);

    return 0;
}