//Q110  Write a program to Create bank account system.

#include <stdio.h>
#include <string.h>

//Define a structure to represent a bank account
struct Account
{
    int accountNumber;
    char holderName[50];
    float balance;
};

int main()
{
    struct Account accounts[100];
    int numAccounts, choice, i, accNo;
    float amount;

    //Take input for number of accounts
    printf("Enter the number of accounts: ");
    scanf("%d", &numAccounts);
    getchar();

    //Loop through each account to take their details
    for(i = 0; i < numAccounts; i++)
    {
        printf("\nEnter details for account %d:\n", i + 1);
        printf("Account Number: ");
        scanf("%d", &accounts[i].accountNumber);
        getchar();
        
        printf("Holder Name: ");
        fgets(accounts[i].holderName, sizeof(accounts[i].holderName), stdin);
        accounts[i].holderName[strcspn(accounts[i].holderName, "\n")] = '\0';
        
        accounts[i].balance = 0.0;
    }

    //Display the menu and take user input for various operations in the bank account system
    do
    {
        printf("\n--- Main Menu ---\n");
        printf("1. Display All\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Check Balance\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        //Switch case to handle user choices
        switch(choice)
        {
            case 1: 
            {
                printf("\n--- All Accounts ---\n");
                for(i = 0; i < numAccounts; i++)
                {
                    printf("Account Number: %d, Holder Name: %s, Balance: %.2f\n", accounts[i].accountNumber, accounts[i].holderName, accounts[i].balance);
                }
                break;
            }
            case 2: 
            {
                printf("\nEnter the account number for deposit: ");
                scanf("%d", &accNo);
                for(i = 0; i < numAccounts; i++)
                {
                    if(accounts[i].accountNumber == accNo)
                    {
                        printf("Enter the amount to deposit: ");
                        scanf("%f", &amount);
                        accounts[i].balance += amount;
                        printf("Deposit successful! New balance: %.2f\n", accounts[i].balance);
                        break; 
                    }
                }
                break;
            }
            case 3: 
            {
                printf("\nEnter the account number for withdrawal: ");
                scanf("%d", &accNo);
                for(i = 0; i < numAccounts; i++)
                {
                    if(accounts[i].accountNumber == accNo)
                    {
                        printf("Enter the amount to withdraw: ");
                        scanf("%f", &amount);
                        if(accounts[i].balance >= amount)
                        {
                            accounts[i].balance -= amount;
                            printf("Withdrawal successful! New balance: %.2f\n", accounts[i].balance);
                        }
                        else
                        {
                            printf("Insufficient balance.\n");
                        }
                        break; 
                    }
                }
                break;
            }
            case 4: 
            {
                printf("\nEnter the account number to check balance: ");
                scanf("%d", &accNo);
                for(i = 0; i < numAccounts; i++)
                {
                    if(accounts[i].accountNumber == accNo)
                    {
                        printf("Account Number: %d, Holder Name: %s, Balance: %.2f\n", accounts[i].accountNumber, accounts[i].holderName, accounts[i].balance);
                        break; 
                    }
                }
                break;
            }
            case 5: 
            {
                printf("Exiting the program.\n");
                break;
            }
            default: 
            {
                printf("Invalid choice. Please try again.\n");
                break;
            }
        }
    } while(choice != 5);

    return 0;
}