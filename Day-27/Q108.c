//Q108  Write a program to Create marksheet generation system

#include <stdio.h>
#include <string.h>

#define max_students 100
#define max_subjects 5

struct student
{
    int roll_no;
    char name[50];
    float marks[max_subjects];
    float total;
    float percentage;
};

int main()
{
    //declaring an array of structures to hold student details.
    struct student students[max_students];
    int num_students, num_subjects, i, j;

    //taking input for number of students and subjects.
    printf("Enter number of students: ");
    scanf("%d", &num_students);

    //taking input for number of subjects.
    printf("Enter number of subjects: ");
    scanf("%d", &num_subjects);

    //looping through each student to take their details and marks.
    for(i = 0; i < num_students; i++)
    {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);

        getchar(); // to consume the newline character left by scanf

        printf("Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0'; // remove newline character

        students[i].total = 0;
        //looping through each subject to take marks and calculate total and percentage.
        for(j = 0; j < num_subjects; j++)
        {
            printf("Marks for subject %d: ", j + 1);
            scanf("%f", &students[i].marks[j]);
            students[i].total += students[i].marks[j];
        }
        students[i].percentage = (students[i].total / (num_subjects * 100)) * 100;
    }
    //displaying the marksheet for all students.
    printf("\n--- Marksheet ---\n");
    printf("Roll No\tName\t\tTotal\tPercentage\n");
    for(i = 0; i < num_students; i++)
    {
        printf("%d\t%s\t%.2f\t%.2f%%\n", students[i].roll_no, students[i].name, students[i].total, students[i].percentage);
    }

    return 0;
}