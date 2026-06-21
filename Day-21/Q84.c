//Q84  Write a program to Convert lowercase to uppercase.

#include<stdio.h>

int main()
{
    //declarying the string of length 100.
    char str[100];
    int length = 0;

    //taking input in string.
    printf("Enter the String: ");
    fgets(str, sizeof(str), stdin);

    //printing the lower case string;
    printf("The string is: %s\n", str);

    //changing the lower case to upper case.
    while(str[length] != '\0' && str[length] != '\n')
    {
        //ignoring space.
        if(str[length]!=' ')
        {
            if(str[length] >= 97 && str[length] <= 122)
            {
                str[length] = str[length] - 32;
            }
        }
        length++;
    }

    //printing the result.
    printf("Uppercase string: %s\n", str);

    return 0;
}