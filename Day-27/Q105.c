//Q105  Write a program to Create student record management system. 

#include<stdio.h>
#include<string.h>

struct Student
{
    int id;
    char name[50];
    char section[10];
    float marks;
};

int main()
{
    struct Student students[100];
    int n, i, j;

    printf("Enter number of students: ");
    scanf("%d", &n);

    //taking Input the details of all students
    for(i=0; i<n; i++)
    {
        printf("\nEnter details for student %d:\n", i+1);
        printf("Enter ID: ");
        scanf("%d", &students[i].id);
        printf("Enter Name: ");
        scanf("%s", students[i].name);
        printf("Enter Section: ");
        scanf("%s", students[i].section);
        printf("Enter Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Displaying all students
    printf("\n--- Student Records ---\n");
    printf("ID   Name            Section   Marks\n");
    for(i=0; i<n; i++)
    {
        printf("%d    %-15s %-9s %.2f\n",students[i].id, students[i].name,students[i].section, students[i].marks);
    }

    //asking the user to enter the ID of the student they want to search for
    int id;
    printf("Enter ID to search: ");
    scanf("%d", &id);

for(i= 0; i<n; i++)
{
    if(students[i].id == id)
    {
        printf("ID   Name            Section   Marks\n");
        printf("%d    %-15s %-9s %.2f\n",students[i].id, students[i].name,students[i].section, students[i].marks);
    }
}
    return 0;
}