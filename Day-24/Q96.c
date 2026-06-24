//Q96   Write a program to Remove duplicate characters. 

#include<stdio.h>

int main()
{
    //declarying string and the variables.
    char string[100];
    int length=0;

    //taking input in the string.
    printf("Enter the string: ");
    fgets(string, sizeof(string), stdin);

    //calculating the length of the string.
    while(string[length]!='\0' && string[length]!='\n')
    {
        length++;
    }
    
    //removing the duplicate chracters.
    for(int i=0;i<length;i++)
    {
        for(int j=0;j<length;j++)
        {
            if(i!=j && string[i]==string[j])
            {
                int k=j;
                while(k<length)
                {
                    string[k]=string[k+1];
                    k++;
                }
                length--;
                j--;
            }
        }
    }

    //printing the result.
    printf("String after removing duplicates: %s\n", string);

    return 0;
}