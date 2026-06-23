//Q90   Write a program to Find first repeating character.

#include<stdio.h>

int main()
{
    //declaryig a string.
    char string[100];
    int i, j, count, length=0;

    //taking input in the string.
    printf("Enter the string: ");
    fgets(string, sizeof(string), stdin);

    //calculating the length of the string.
    while(string[length]!='\0')
    {
        length++;
    }
    if(string[length-1] == '\n')
    { 
        string[length-1] = '\0';
        length--;
    }
    //finding the first repeating character.
    for(i=0; i<length; i++)
    {
        count=0;
        for(j=0; j<length; j++)
        {
            if(string[i]==string[j])
            {
                count++;
            }
        }
        //printing the result and ending the code when we find the repeating character.
        if(count>1)
        {
            printf("the first repeating character is: '%c'", string[i]);

            return 0;
        }
    }

    //if we did'nt find a repeating character.
    printf("there is no repeating character.");

    return 0;
}