//Q91   Write a program to Check anagram strings.

#include<stdio.h>

int main()
{
    //declaring two strings.
    char string1[100], string2[100];
    int length1=0, length2=0;
    int freq1[26]={0}, freq2[26]={0};
    int i, flag=1;

    //taking input in the strings.
    printf("Enter the first string: ");
    fgets(string1, sizeof(string1), stdin);

    printf("Enter the second string: ");
    fgets(string2, sizeof(string2), stdin);

    //calculating the lengths and stripping newline.
    while(string1[length1]!='\0')
    {
        length1++;
    }
    if(string1[length1-1]=='\n')
    {
        string1[length1-1]='\0';
        length1--;
    }

    while(string2[length2]!='\0')
    {
        length2++;
    }
    if(string2[length2-1]=='\n')
    {
        string2[length2-1]='\0';
        length2--;
    }

    //if lengths are different, cannot be anagram.
    if(length1!=length2)
    {
        printf("The strings are not anagrams.\n");
        return 0;
    }

    //counting character frequencies.
    for(i=0; i<length1; i++)
    {
        freq1[string1[i]-'a']++;
        freq2[string2[i]-'a']++;
    }

    //comparing frequencies.
    for(i=0; i<26; i++)
    {
        if(freq1[i]!=freq2[i])
        {
            flag=0;
            break;
        }
    }

    //printing the result.
    if(flag==1)
    {
       printf("The strings are anagrams.\n");
    }
    else
    {
       printf("The strings are not anagrams.\n");
    }
    return 0;
}