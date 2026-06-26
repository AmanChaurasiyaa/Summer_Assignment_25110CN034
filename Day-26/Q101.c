//Q101  Write a program to Create number guessing game.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;
    // Seed for random number generation
    srand(time(0));
    // Random number between 1 and 100
    number = rand() % 100 + 1;


    printf("Welcome to the Number Guessing Game!\n");
    printf("I have selected a number between 1 and 100. Can you guess it?\n");

    // Loop until the user guesses the correct number
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        //if the number is too low or too high.
        if(guess<number)
        {
            printf("Too low! Try again.\n");
        }
        else if(guess>number)
        {
            printf("Too high! Try again.\n");
        }
        else
        {
            printf("Congratulations! You've guessed the number %d in %d attempts.\n", number, attempts);
        }
    } while (guess!=number);

    return 0;
}

/*i din't know about the time.h and stdlib.h header files. I just learned it with the help of LLM.*/