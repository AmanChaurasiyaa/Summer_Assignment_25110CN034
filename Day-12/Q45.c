//Q45   Write a program to Write function for palindrome.

#include <stdio.h>
#include <string.h>

int isPalindrome(char str[]) 
{
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) 
    {
        if (str[left] != str[right]) 
        {
            return 0; // Not a palindrome
        }
        left++;
        right--;
    }
    return 1; // Is a palindrome
}

int main() 
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove newline character

    if (isPalindrome(str)) 
    {
        printf("The string is a palindrome.\n");
    } 
    else 
    {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}