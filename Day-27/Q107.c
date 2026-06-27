//Q107  Write a program to Create salary management system.

#include <stdio.h>
#include <string.h>

//seclarying a structure to hold salary details of an employee.
#define MAX 10
struct Salary
{
    int id;
    char name[50];
    float basic;
    float allowance;
    float deduction;
    float net;
};

int main()
{
    struct Salary salaries[MAX];
    int count =0, choice, i;

    //using a do-while loop to create a menu-driven program for salary management.
    do{
        printf("\n---Salary Management System---\n");
        printf("1. Add Record\n");
        printf("2. Display All\n");
        printf("3. Search by ID\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        //to handle user choices.
        if(choice == 1)
        {
            printf("Enter ID: ");
            scanf("%d", &salaries[count].id);

            getchar();

            printf("Enter Name: ");
            fgets(salaries[count].name, sizeof(salaries[count].name), stdin);
            salaries[count].name[strcspn(salaries[count].name, "\n")] = '\0';

            printf("Enter Basic Salary: ");
            scanf("%f", &salaries[count].basic);

            printf("Enter Allowance: ");
            scanf("%f", &salaries[count].allowance);

            printf("Enter Deduction: ");
            scanf("%f", &salaries[count].deduction);

            salaries[count].net = salaries[count].basic + salaries[count].allowance - salaries[count].deduction;
            count++;
            printf("Record added!\n");
        }
        //to handle other user choices.
        else if(choice == 2)
        {
            if(count == 0)
            {
                printf("No records found.\n");
            }
            else
            {
                printf("\nID   Name            Basic      Allowance  Deduction  Net\n");
                for(i=0; i<count; i++)
                {
                    printf("%d    %-15s %.2f      %.2f      %.2f      %.2f\n",
                           salaries[i].id, salaries[i].name, salaries[i].basic,
                           salaries[i].allowance, salaries[i].deduction, salaries[i].net);
                }
            }
        }
        //using else-if statements to handle the search functionality.
        else if(choice == 3)
        {
            int id, found = 0;
            printf("Enter ID to search: ");
            scanf("%d", &id);
            for(i=0; i<count; i++)
            {
                //if the entered ID matches any record in the array.
                if(salaries[i].id == id)
                {
                    printf("ID: %d | Name: %s | Basic: %.2f | Allowance: %.2f | Deduction: %.2f | Net: %.2f\n",
                           salaries[i].id, salaries[i].name, salaries[i].basic,
                           salaries[i].allowance, salaries[i].deduction, salaries[i].net);
                    found = 1;
                    break;
                }
            }
            //if the record was found or not.
            if(found == 0)
            {
                printf("Record not found.\n");
                scanf("%*s");
            }
        }
        //to handle the exit functionality.
        else if(choice == 4)
        {
            printf("Exiting...\n");
        }
        //to handle invalid choices.
        else
        {
            printf("Invalid choice!\n");
            scanf("%*s");
        }

    }while(choice != 4);

    return 0;
}