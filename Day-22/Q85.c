//Q85  Write a program to Check palindrome string.

#include<stdio.h>

int main()
{
    //declarying a string of length 100.
    char string[100];
    int length=0;

    //taking input in the string.
    printf("Enter the string: ");
    fgets(string, sizeof(string), stdin);

    //printing ther string.
    printf("The string is: \n%s\n", string);

    //finding the length of the string.
    while(string[length]!='\0' && string[length]!='\n')
    {
        length++;
    }

    //checking if the string is palindrome.
    for(int i=0; i<=length/2; i++)
    {
        if(string[i]!=string[length-1-i])
        {
            printf("The string is not a Palindrome.");
            
            return 0;
        }
    }

    printf("The string is a Palindrome.");

    return 0;
}