//Q82  Write a program to Reverse a string. 

#include<stdio.h>

int main()
{
    //declarying the string of length 100.
    char string[100];
    int length=0;

    //taking input in the string.
    printf("Enter the string: ");
    fgets(string, sizeof(string), stdin);

    //printing unreversed string.
    printf("\nThe String before reverse: %s", string);

    //finding length of the string.
    while(string[length]!='\0' && string[length]!='\n')
    {
        length++;
    }

    //reversing the string.
    for(int i=0; i<= length/2; i++)
    {
        int temp = string[i];
        string[i] = string[length-1-i];
        string[length-1-i] = temp;
    }

    //printing the reversed string.
    printf("\nThe string after reverse: %s\n", string);

    return 0;
}