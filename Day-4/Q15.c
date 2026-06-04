#include <stdio.h>
#include <math.h>

int main() {
    int num, copy, sum = 0, count = 0;

    printf("Enter the number to check Armstrong: ");
    scanf("%d", &num);

    copy = num;

    //Counting the number of digits
    while(num != 0)
    {
        num /= 10;
        count++;
    }

    num = copy;

    //Calculating the sum of powers
    while(num != 0)
    {
        int digit = num % 10;
        sum = sum + round(pow(digit, count)); 
        num /= 10;
    }

    //Checking equality
    if(sum == copy)
    {
        printf("The number %d is an Armstrong number\n", copy);
    } else {
        printf("The number %d is not an Armstrong number\n", copy);
    }

    return 0;
}

/* because of the pow() function calculate the using floating point math. The pow(5, 3) = 124.999999999999 instead of 125. So, 153 isn't an armstrong number according to the copmputer. to fix that thing I used round() function after asking Ai for help. */