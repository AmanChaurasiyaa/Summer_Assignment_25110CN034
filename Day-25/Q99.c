//Q99 Write a program to Sort names alphabetically.

#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, j;
    char temp[50];
    
    //declaring the array of strings and taking input from user.
    printf("Enter the number of names: ");
    scanf("%d", &n);
    char names[n][50];
    printf("Enter the names:\n");
    for (i=0; i<n; i++) 
    {
        scanf("%s", names[i]);
    }
    
    // Sorting the names alphabetically
    for (i=0; i<n-1; i++)
    {
        for (j=i+1; j<n; j++)
        {
            if (strcmp(names[i], names[j])>0) 
            {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    // Printing the sorted names
    printf("Alphabetically Sorted names:\n");
    for (i=0; i<n; i++)
    {
        printf("%s\n", names[i]);
    }
    
    return 0;
}