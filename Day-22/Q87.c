//Q87  Write a program to Character frequency.

#include<stdio.h>

int main()
{
    char string[100];
    int freq[256]={0}; //ASCII has 256 character. initializing all to 0.

    printf("Enter a String: ");
    fgets(string, sizeof(string), stdin);

    int i=0;
    while(string[i]!='\0')
    {
        if(string[i]!='\n')
        {
            freq[(int)string[i]]++;
        }
        i++;
    }

    printf("Character frequencies are: \n");
    for(int j=0; j<256; j++)
    {
        if(freq[j]>0)
        {
            printf("The frequency of '%c' = %d\n", j, freq[j]);
        }
    }

    return 0;
}