#include <stdio.h>

int reverseNumber(int num, int reversed) {
    if (num == 0) {
        return reversed;
    }
    return reverseNumber(num / 10, reversed * 10 + num % 10);
}

int main() {
    int number;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Please enter a positive number\n");
    } else {
        printf("Reverse of %d is: %d", number, reverseNumber(number, 0));
    }

    return 0;
}