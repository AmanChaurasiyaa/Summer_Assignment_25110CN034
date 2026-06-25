//Q100  Write a program to Sort words by length.

#include<stdio.h>
#include<string.h>

int main()
{
    char string[100], words[20][20];
    int i, j, k, len, word_count = 0;

    //declaring the string and taking input from user.
    printf("Enter a string: ");
    fgets(string, sizeof(string), stdin);

    // Splitting the string into words
    len = strlen(string);
    k=0;
    for (i=0; i < len; i++)
    {
        if (string[i]==' ' || string[i]=='\n')
        {
            words[word_count][k]='\0';
            word_count++;
            k=0;
        }
        else
        {
            words[word_count][k++]=string[i];
        }
    }
    words[word_count][k]='\0';
    word_count++;

    // Sorting the words by length
    for (i=0; i<word_count-1; i++)
    {
        for (j=i+1; j<word_count; j++)
        {
            if (strlen(words[i])>strlen(words[j]))
            {
                char temp[20];
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }

    // Printing the sorted words
    printf("Words sorted by length:\n");
    for (i=0; i<word_count; i++)
    {
        printf("%s\n", words[i]);
    }

    return 0;
}