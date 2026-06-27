//Q106  Write a program to Create employee management system.

#include <stdio.h>
#include <string.h>

//declaring a structure to hold employee details.
#define MAX 10
struct employee
{
    int id;
    char name[50];
    char department[50];
    float salary;
};

int main()
{
    struct employee employees[MAX];
    int count =0, choice, i;
    //do-while loop to create a menu-driven program for employee management.
    do{
        printf("\n---Employee Management System---\n");
        printf("1. Add Employee\n");
        printf("2. Display All\n");
        printf("3. Search by ID\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        //using if-else statements to handle user choices.
        if(choice == 1)
        {
            printf("Enter ID: ");
            scanf("%d", &employees[count].id);

            getchar();

            printf("Enter Name: ");
            fgets(employees[count].name, sizeof(employees[count].name), stdin);
            employees[count].name[strcspn(employees[count].name, "\n")] = '\0';

            printf("Enter Department: ");
            fgets(employees[count].department, sizeof(employees[count].department), stdin);
            employees[count].department[strcspn(employees[count].department, "\n")] = '\0';

            printf("Enter Salary: ");
            scanf("%f", &employees[count].salary);

            count++;
            printf("Employee added!\n");
        }
        else if(choice== 2)
        {
            if (count ==0)
            {
                printf("No records found.\n");
            }
            else
            {
                printf("\nID   Name                 Department          Salary\n");
                for (i=0; i < count; i++)
                {
                    printf("%d    %s                 %s          %.2f\n",employees[i].id, employees[i].name, employees[i].department, employees[i].salary);
                }
            }
        }
        else if(choice ==3)
        {
            int id, found = 0;
            printf("Enter ID to search: ");
            scanf("%d", &id);
            for(i =0; i<count; i++)
            {
                if(employees[i].id == id)
                {
                    printf("ID: %d | Name: %s | Department: %s | Salary: %.2f\n",employees[i].id, employees[i].name, employees[i].department, employees[i].salary);
                    found = 1;
                    break;
                }
            }
            //if the employee is not found.
            if(found==0)
            {
                printf("Employee not found.\n");
            }
        }
        else if(choice == 4)
        {
            printf("Exiting...\n");
        }
        //for invalid choices.
        else
        {
            printf("Invalid choice!\n");
        }

    }while(choice != 4);

    return 0;
}