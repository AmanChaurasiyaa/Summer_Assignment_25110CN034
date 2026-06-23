//Q89   Write a program to Find first non-repeating character.

#include<stdio.h>

int main()
{
    //declarying a string.
    char string[100];
    int length=0;
    int i,j,count;

    //taking input in the string.
    printf("Enter the String: ");
    fgets(string, sizeof(string), stdin);

    //printing the string.
    printf("The String is: %s\n", string);

    //calculating the string length.
    while(string[length]!='\0')
    {
        length++;
    }

    //removing next line character ay the end.
    if(string[length-1] == '\n') 
    {
        string[length-1] = '\0';
        length--; 
    }

    //finding the non-repeating characters.
    printf("The non-repeating characters are: \n");
    for(i=0; i<length; i++)
    {
        count=0;
        for(j=0;j<length;j++)
        {
            if(string[i]==string[j])
            {
                count++;
            }
        }
        if(count==1)
        {
            printf("'%c'\t", string[i]);
        }
    }

    return 0;
}