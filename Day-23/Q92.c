//Q92   Write a program to Find maximum occurring character.

#include<stdio.h>

int main()
{
    //declarying a string.
    char string[100];
    int maxFreq=0, index;
    int i, j, length=0;

    //taking input in the string.
    printf("Enter the string: ");
    fgets(string, sizeof(string), stdin);

    //calculating the length of the string.
    while(string[length]!='\0')
    {
        length++;
    }
    if(string[length-1]=='\n')
    {
        string[length-1]='\0';
        length--;
    }

    //calculating the maximum frequency.
    for(i=0; i<length; i++)
    {
        int count=0;
        for(j=0; j<length; j++)
        {
            if(string[i]==string[j])
            {
                count++;
            }
        }
        if(maxFreq<count)
        {
            maxFreq=count;
            index=i;
        }
    }

    //printing the result.
    printf("The maximum frequency charecter is '%c'\n", string[index]);
    printf("The frequecy of '%c' is %d", string[index], maxFreq);

    return 0;
}