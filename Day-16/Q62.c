//Q62  Write a program to Find maximum frequency element.

#include<stdio.h>

int main()
{
    int n, maxFreqNum, maxfreq=0;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int array[n];
    printf("Enter the elements of array one by one: ");
    for(int i=0; i<n; i++)   //taking the input in array.
    {
        scanf("%d", &array[i]);
    }

    for(int j=0; j<n; j++)  //calculating max frquency number.
    {
        int freq=0;
        for(int k=0;k<n;k++)  //calculating frequency.
        {
            if (array[j]==array[k])
            {
                freq++;
            }
            
        }
        if(freq>maxfreq)  //comparing the frequency with previous one.
        {
            maxFreqNum=array[j];
        }
    }

    printf("The maximun frequency number is: %d", maxFreqNum);
    
    return 0;
}