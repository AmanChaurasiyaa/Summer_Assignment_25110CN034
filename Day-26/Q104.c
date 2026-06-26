//Q104  Write a program to Create quiz application.

#include <stdio.h>
int main()
{
    int score = 0;
    int answer;

    printf("Welcome to the Quiz Application!\n");
    printf("Please answer the following questions:\n");

    // Question 1
    printf("1. What is the capital of India?\n");
    printf("   1) Berlin\n");
    printf("   2) Madrid\n");
    printf("   3) Delhi\n");
    printf("   4) Rome\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);
    if(answer==3)
    {
        score++;
        printf("Correct!\n");
    }
    else
    {
        printf("Incorrect. The correct answer is Delhi.\n");
    }

    // Question 2
    printf("\n2. What is the largest planet in our solar system?\n");
    printf("   1) Earth\n");
    printf("   2) Jupiter\n");
    printf("   3) Mars\n");
    printf("   4) Saturn\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);
    if(answer==2)
    {
        score++;
        printf("Correct!\n");
    }
    else
    {
        printf("Incorrect. The correct answer is Jupiter.\n");
    }

    // Question 3
    printf("\n3. Who wrote 'Romeo and Juliet'?\n");
    printf("   1) William Shakespeare\n");
    printf("   2) Charles Dickens\n");
    printf("   3) Mark Twain\n");
    printf("   4) Jane Austen\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);
    if(answer==1)
    {
        score++;
        printf("Correct!\n");
    }
    else
    {
        printf("Incorrect. The correct answer is William Shakespeare.\n");
    }
    printf("\nYour final score is: %d out of 3\n", score);
    return 0;
}