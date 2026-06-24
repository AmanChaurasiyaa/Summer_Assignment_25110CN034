//Q95   Write a program to Find longest word.

#include<stdio.h>

int main()
{
    //declarying the string and variables.
    char string[100], world[100];
    int i, j, length=0,max=0,count,k;

    //taking input in the string.
    printf("Enter the string: ");
    fgets(string, sizeof(string), stdin);

    //finding the length of the string.
    while(string[length]!='\0')
    {
        length++;
    }

    //finding the longest world.
    for(i=0;i<length; )
    {
        count=0;
        j=i;
        while(string[j]!=' ' && string[j]!='\0' && string[j]!='\n')
        {
            count++;
            j++;
        }
        j=i;
        if(count>max)
        {
            max=count;
            k=0;
            while(string[j]!=' ' && string[j]!='\0' && string[j]!='\n')
            {
                 world[k]=string[j];
                k++; j++;
            }
        }
        i+=count+1;
    }

    //clipping the string.
    world[k]='\0';

    //printing the result.
    printf("The longest world is %s which has %d characters",world,max);

    return 0;
}