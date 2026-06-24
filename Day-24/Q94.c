//Q94   Write a program to Compress a string.

#include<stdio.h>

int main()
{
    //declarying the strings.
    char string[100];
    char compressed[200];
    int length=0, count=0, i, j=0;

    //taking input in the string.
    printf("Enter the string: ");
    fgets(string, sizeof(string), stdin);

    //calculating the length of the string.
    while(string[length]!='\0' && string[length]!='\n')
    {
        length++;
    }

    //compressing the string.
    for(i=0;i<length; )
    {
        int index=i;
        count=0;
        while(string[i]==string[index])
        {
            count++;
            index++;
        }
        compressed[j]=string[i];
        compressed[j+1]=count + '0';
        j+=2;
        i += count;

    }
    //clipping the string.
    compressed[j]='\0';

    //printing the result.
    printf("The compressed string is: %s", compressed);

    return 0;
}