//Q83  Write a program to Count vowels and consonants.

#include<stdio.h>

int main()
{
    //declarying the sring of size of 100.
    char str[100];
    int vovels=0, consonents=0, len=0;

    //taking input in the string.
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);

    //printing the string.
    printf("The String is: %s", str);

    //counting the numbers of vovels and consonent.
    while(str[len]!='\0' && str[len]!='\n')
    {
        //excluding the space.
        if(str[len]!=' ')
        {
            if((str[len]=='a' || str[len]=='e' || str[len]=='i' ||str[len]=='o' || str[len]=='u'|| str[len]=='A'|| str[len]=='E'||str[len]=='I' || str[len]=='O' || str[len]=='U'))
            {
                vovels++;
            }
            else
            {
                consonents++;
            }
        }
        len++;
    }
    //printing the result.
    printf("The numbers of vovels are: %d\n", vovels);
    printf("The numbers of consonents are: %d\n", consonents);

    return 0;
}