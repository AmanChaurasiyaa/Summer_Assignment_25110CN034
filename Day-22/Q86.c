//Q86  Write a program to Count words in a sentence.

#include<stdio.h>

int main()
{
    //declarying the string of length 100.
    char string[100];
    int count = 0;
    int length = 0;

    //taking input in the string.
    printf("Enter a string and add '.' (full stop at the end) : ");
    fgets(string, sizeof(string), stdin);

    //printing the string.
    printf("The string is: \n%s\n", string);

    //counting the number of spaces and next line.
    while(string[length]!='.')
    {
        if(string[length]==' ')
        {
            count++;
        }
        length++;
    }

    //printing the result.
    printf("Number of words in the sentence is: %d", count+1);

    return 0;
}