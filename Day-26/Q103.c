//Q103  Write a program to Create ATM simulation.

#include <stdio.h>
int main()
{
    int pin, enteredPin, balance = 1000, choice, amount;

    printf("Welcome to the ATM Simulation!\n");
    printf("Please enter your PIN: ");
    scanf("%d", &enteredPin);

    // Assuming the correct PIN is 1234
    pin = 1234;
    // Check if the entered PIN is correct
    if (enteredPin != pin)
    {
        printf("Incorrect PIN. Access denied.\n");
        return 0;
    }
    // Loop for ATM operations
    do {
        printf("\nATM Menu:\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        // Perform actions based on user choice
        switch (choice)
        {
            case 1:
                printf("Your current balance is: Rs. %d\n", balance);
                break;
            case 2:
                printf("Enter amount to deposit: ");
                scanf("%d", &amount);
                balance += amount;
                printf("Rs. %d deposited successfully. New balance: Rs. %d\n", amount, balance);
                break;
            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%d", &amount);
                if (amount > balance) {
                    printf("Insufficient funds. Your current balance is: Rs. %d\n", balance);
                } else {
                    balance -= amount;
                    printf("Rs. %d withdrawn successfully. New balance: Rs. %d\n", amount, balance);
                }
                break;
            case 4:
                printf("Thank you for using the ATM Simulation. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice!=4);

    return 0;
}