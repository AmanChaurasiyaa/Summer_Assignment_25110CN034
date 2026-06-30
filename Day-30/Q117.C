//Q117  Write a program to Create student record system using arrays and strings.

#include <stdio.h>
#include <string.h>

struct Student
{
    char name[50];
    int rollNumber;
    int age;
    char phoneNumber[15];
    char mail[50];
    float marks;
};

int main()
{
    struct Student students[100];
    int count = 0; // tracks how many students exist
    int choice, i;
    char name[50];
    int rollNumber, age;
    char phoneNumber[15];
    char mail[50];
    float marks;

    // Menu-driven student record system
    do
    {
        printf("\nMenu:\n");
        printf("1. Add Student\n");
        printf("2. Delete Student\n");
        printf("3. Display Students\n");
        printf("4. Search Student\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // Consume the newline character left by previous input

        // Process the user's choice
        switch (choice)
        {
            case 1:
                if (count<100)
                {
                    printf("Enter student name: ");
                    fgets(name, sizeof(name), stdin); // Read name with spaces
                    name[strcspn(name, "\n")] = 0;
                    printf("Enter roll number: ");
                    scanf("%d", &rollNumber);
                    printf("Enter age: ");
                    scanf("%d", &age);
                    printf("Enter phone number: ");
                    scanf("%s", phoneNumber);
                    printf("Enter email: ");
                    scanf("%s", mail);
                    printf("Enter marks: ");
                    scanf("%f", &marks);

                    // Add new student record
                    strcpy(students[count].name, name);
                    students[count].rollNumber=rollNumber;
                    students[count].age=age;
                    strcpy(students[count].phoneNumber, phoneNumber);
                    strcpy(students[count].mail, mail);
                    students[count].marks=marks;
                    count++;
                    printf("Student record added successfully.\n");
                }
                else
                {
                    printf("Student record limit reached.\n");
                }
                break;

            case 2:
                if (count==0)
                {
                    printf("No student records available.\n");
                }
                else
                {
                    printf("Enter roll number of student to delete: ");
                    scanf("%d", &rollNumber);
                    int found=0;
                    for (i=0; i<count; i++)
                    {
                        if (students[i].rollNumber==rollNumber)
                        {
                            // Shift remaining records to fill the gap
                            for (int j=i; j<count-1; j++)
                            {
                                students[j]=students[j+1];
                            }
                            count--;
                            found = 1;
                            printf("Student record deleted successfully.\n");
                            break;
                        }
                    }
                    if (!found)
                    {
                        printf("Student with roll number %d not found.\n", rollNumber);
                    }
                }
                break;

            case 3:
                if (count==0)
                {
                    printf("No student records available.\n");
                }
                else
                {
                    printf("\nStudent Records:\n");
                    for (i= 0; i <count; i++)
                    {
                        printf("Name: %s, Roll Number: %d, Age: %d, Phone: %s, Email: %s, Marks: %.2f\n",
                               students[i].name, students[i].rollNumber, students[i].age,
                               students[i].phoneNumber, students[i].mail, students[i].marks);
                    }
                }
                break;
            
            case 4:
                if (count== 0)
                {
                    printf("No student records available.\n");
                }
                else
                {
                    printf("Enter roll number of student to search: ");
                    scanf("%d", &rollNumber);
                    int found = 0;
                    for (i= 0; i <count; i++)
                    {
                        if (students[i].rollNumber== rollNumber)
                        {
                            printf("Student Found: Name: %s, Roll Number: %d, Age: %d, Phone: %s, Email: %s, Marks: %.2f\n",
                                   students[i].name, students[i].rollNumber, students[i].age,
                                   students[i].phoneNumber, students[i].mail, students[i].marks);
                            found =1;
                            break;
                        }
                    }
                    if (!found)
                    {
                        printf("Student with roll number %d not found.\n", rollNumber);
                    }
                }
                break;

            case 5:
                printf("Exiting the program.\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice !=5);
    return 0;
}