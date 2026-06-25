//Q98   Write a program to Find common characters in strings.

#include<stdio.h>
#include<string.h>

int main()
{
    char string1[100], string2[100];
    int i, j, found;

    //declaring the strings and taking input from user.
    printf("Enter first string: ");
    fgets(string1, sizeof(string1), stdin);
    printf("Enter second string: ");
    fgets(string2, sizeof(string2), stdin);

    // Finding common characters in the two strings
    printf("Common characters are: ");
    for (i=0; string1[i]!='\0'; i++)
    {
        found=0;
        for (j=0; string1[j]!='\0'; j++)
        {
            if (string1[i]==string2[j])
            {
                found=1;
                break;
            }
        }
        //pringting the result
        if (found)
        {
            printf("%c ", string1[i]);
        }
    }
    return 0;
}