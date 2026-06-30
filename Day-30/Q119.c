//Q119  Write a program to Create mini employee management system. 

#include <stdio.h>
#include <string.h>

struct Employee
{
    char name[50];
    int id;
    char department[15];
    int age;
    char phoneNumber[15];
    char mail[50];
    float salary;
};

int main()
{
    // Create an array to hold up to 100 employees
    struct Employee emp[100]; 
    int count = 0; // Keeps track of how many employees have been added
    int choice;

    while (1) 
    {
        printf("\n---Mini Employee Management System---\n");
        printf("1. Add a New Employee\n");
        printf("2. Remove an Employee\n");
        printf("3. View All Employees\n");
        printf("4. Search Employee by ID\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1: // Add Employee
                // Check if we have room for more employees
                if (count < 100) 
                {
                    printf("\n--- Enter Employee Details ---\n");
                    
                    printf("ID: ");
                    scanf("%d", &emp[count].id);
                    
                    // Note: The space before %[^\n] consumes the leftover newline character from the previous scanf
                    printf("Name: ");
                    scanf(" %[^\n]", emp[count].name); 
                    
                    printf("Department: ");
                    scanf("%s", emp[count].department);
                    
                    printf("Age: ");
                    scanf("%d", &emp[count].age);
                    
                    printf("Phone Number: ");
                    scanf("%s", emp[count].phoneNumber);
                    
                    printf("Email: ");
                    scanf("%s", emp[count].mail);
                    
                    printf("Salary: ");
                    scanf("%f", &emp[count].salary);
                    
                    count++; // Increment the employee count
                    printf("Employee added successfully!\n");
                } 
                else 
                {
                    printf("Database is full! Cannot add more employees.\n");
                }
                break;

            case 2: // Remove Employee
                if (count == 0) 
                {
                    printf("\nNo employees found in the system to remove.\n");
                } 
                else 
                {
                    int removeId, found = 0;
                    printf("\nEnter Employee ID to remove: ");
                    scanf("%d", &removeId);
                    
                    for (int i = 0; i < count; i++) 
                    {
                        if (emp[i].id == removeId) 
                        {
                            found = 1;
                            // Shift all subsequent employees one space to the left
                            for (int j = i; j < count - 1; j++) 
                            {
                                emp[j] = emp[j + 1];
                            }
                            count--; // Decrease total employee count
                            printf("\nEmployee with ID %d successfully removed.\n", removeId);
                            break; // Exit the loop once removed
                        }
                    }
                    if (!found) 
                    {
                        printf("\nEmployee with ID %d not found.\n", removeId);
                    }
                }
                break;

            case 3: // View All Employees
                if (count == 0) 
                {
                    printf("\nNo employees found in the system.\n");
                } 
                else 
                {
                    printf("\n--- Employee List ---\n");
                    printf("%-10s %-20s %-15s %-10s\n", "ID", "Name", "Department", "Salary");
                    printf("----------------------------------------------------------\n");
                    for (int i = 0; i < count; i++) 
                    {
                        printf("%-10d %-20s %-15s %.2f\n", 
                               emp[i].id, emp[i].name, emp[i].department, emp[i].salary);
                    }
                }
                break;

            case 4: // Search Employee
                if (count == 0) 
                {
                    printf("\nNo employees to search.\n");
                } 
                else 
                {
                    int searchId, found = 0;
                    printf("\nEnter Employee ID to search: ");
                    scanf("%d", &searchId);
                    
                    for (int i = 0; i < count; i++) 
                    {
                        if (emp[i].id == searchId) 
                        {
                            printf("\n--- Employee Found ---\n");
                            printf("ID: %d\n", emp[i].id);
                            printf("Name: %s\n", emp[i].name);
                            printf("Department: %s\n", emp[i].department);
                            printf("Age: %d\n", emp[i].age);
                            printf("Phone Number: %s\n", emp[i].phoneNumber);
                            printf("Email: %s\n", emp[i].mail);
                            printf("Salary: %.2f\n", emp[i].salary);
                            found = 1;
                            break; // Exit the loop once found
                        }
                    }
                    if (!found) 
                    {
                        printf("\nEmployee with ID %d not found.\n", searchId);
                    }
                }
                break;

            case 5: // Exit
                printf("\nExiting program...\n");
                return 0; // Ends the program

            default:
                printf("\nInvalid choice! Please select an option between 1 and 5.\n");
        }
    }
    
    return 0;
}