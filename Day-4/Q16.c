/* Q16.  Write a program to Print Armstrong numbers 
in a range. */

#include<stdio.h>
#include<math.h>
int main()
{
    int rangeStart, rangeEnd, copy, sum, count;

    printf("Enter the starting number of the range: ");
    scanf("%d", &rangeStart);

    printf("Enter the ending number of the range: ");
    scanf("%d", &rangeEnd);

    printf("armstrong numbers in the range %d to %d are: ", rangeStart, rangeEnd);

    for(int i=rangeStart; i<=rangeEnd; i++)
    {
        sum=count=0;  //setting the values to 0.
        copy=i;

        while(i!=0)  //counting the digits.
        {
            i/=10;
            count++;
        }
        i=copy;
        while(i!=0)  //calculating the power anf sum.
        {
            sum = sum + round(pow((i%10),count));
            i/=10;
        }
        if(sum==copy)  // checking the equality.
        {
            printf("%d\t",copy);
        }
        i=copy;  //to prevent the infinite loop.
    }
    return 0;
}