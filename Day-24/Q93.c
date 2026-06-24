//Q93   Write a program to Check string rotation.

#include<stdio.h>
#include<string.h>

int main()
{
    //declarying the main and search strings.
    char string[100], searchString[100];
    int length = 0, searchLength=0;

    //taking input in the strings.
    printf("Enter the String: ");
    fgets(string, sizeof(string), stdin);
    printf("Enter the Search String: ");
    fgets(searchString, sizeof(searchString), stdin);

    //calculating the length of the string.
    while(string[length]!='\0')
    {
        length++;
    }
    while(searchString[searchLength]!='\0')
    {
        searchLength++;
    }

    //clipping the extra length.
    string[length-1]='\0';
    searchString[searchLength-1]='\0';

    if (length!=searchLength)
    {
        printf("Not a rotation (different lengths).\n");
        return 0;
    }

    //duplicating and adding the string.
    char doubleString[200];
    strcpy(doubleString, string);
    strcat(doubleString, string);

    //searching if the search string is inside the main string.
     if (strstr(doubleString, searchString) != NULL)
     {
        printf("'%s' is a rotation of '%s'.\n", searchString, string);
     }
     else
    {
        printf("'%s' is not a rotation of '%s'.\n", searchString, string);
    }

    return 0;
}