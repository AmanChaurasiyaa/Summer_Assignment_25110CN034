//Q118  Write a program to Create mini library system.

#include <stdio.h>
#include <string.h>

struct Book 
{
    char title[100];
    char author[50];
    int year;
    int status; // 0 for available, 1 for issued
    char issuedTo[50];
    char issueDate[20];
    char returnDate[20];
    char isbn[20];
};

int main() 
{
    struct Book library[100];
    int count=0; // tracks how many books exist
    int choice, i;
    char title[100], author[50], issuedTo[50], issueDate[20], returnDate[20], isbn[20];
    int year;

    // Menu-driven library management system
    do
    {
        printf("\nMenu:\n");
        printf("1. Add Book\n");
        printf("2. Issue Book\n");
        printf("3. Return Book\n");
        printf("4. Display Books\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // Consume the newline character left by previous input

        // Process the user's choice
        switch (choice)
        {
            case 1:
                if (count< 100)
                {
                    printf("Enter book title: ");
                    fgets(title, sizeof(title), stdin); // Read title with spaces
                    title[strcspn(title, "\n")] =0; // Remove newline character
                    printf("Enter author name: ");
                    fgets(author, sizeof(author), stdin); // Read author with spaces
                    author[strcspn(author, "\n")]=0; // Remove newline character
                    printf("Enter publication year: ");
                    scanf("%d", &year);
                    getchar(); // Consume the newline character left by previous input
                    printf("Enter ISBN: ");
                    fgets(isbn, sizeof(isbn), stdin); // Read ISBN with spaces
                    isbn[strcspn(isbn, "\n")]= 0; // Remove newline character

                    // Add new book record
                    strcpy(library[count].title, title);
                    strcpy(library[count].author, author);
                    library[count].year= year;
                    library[count].status =0; // Available
                    strcpy(library[count].issuedTo, "");
                    strcpy(library[count].issueDate, "");
                    strcpy(library[count].returnDate, "");
                    strcpy(library[count].isbn, isbn);
                    count++;
                    printf("Book added successfully.\n");
                }
                else
                {
                    printf("Library is full. Cannot add more books.\n");
                }
                break;

            case 2:
                if(count ==0)
                {
                    printf("No books available in the library.\n");
                }
                else
                {
                    printf("Enter ISBN of the book to issue: ");
                    fgets(isbn, sizeof(isbn), stdin); // Read ISBN with spaces
                    isbn[strcspn(isbn, "\n")]= 0; // Remove newline character
                    int found=0;
                    for (i =0; i <count; i++)
                    {
                        if (strcmp(library[i].isbn, isbn) == 0)
                        {
                            if (library[i].status==0)
                            {
                                // Book is available
                                printf("Enter name of the person issuing the book: ");
                                fgets(issuedTo, sizeof(issuedTo), stdin); // Read name with spaces
                                issuedTo[strcspn(issuedTo, "\n")]=0; // Remove newline character
                                printf("Enter issue date (dd-mm-yyyy): ");
                                fgets(issueDate, sizeof(issueDate), stdin); // Read date with spaces
                                issueDate[strcspn(issueDate, "\n")]= 0; // Remove newline character
                                printf("Enter return date (dd-mm-yyyy): ");
                                fgets(returnDate, sizeof(returnDate), stdin); // Read date with spaces
                                returnDate[strcspn(returnDate, "\n")] =0; // Remove newline character

                                library[i].status =1; // Mark as issued
                                strcpy(library[i].issuedTo, issuedTo);
                                strcpy(library[i].issueDate, issueDate);
                                strcpy(library[i].returnDate, returnDate);
                                printf("Book issued successfully.\n");
                            }
                            else
                            {
                                printf("Book is already issued to %s.\n", library[i].issuedTo);
                            }
                            found =1;
                            break;
                        }
                    }
                    if (!found)
                    {
                        printf("Book with ISBN %s not found.\n", isbn);
                    }
                }
                break;
            
            case 3:
                if (count ==0)
                {
                    printf("No books available in the library.\n");
                }
                else
                {
                    printf("Enter ISBN of the book to return: ");
                    fgets(isbn, sizeof(isbn), stdin); // Read ISBN with spaces
                    isbn[strcspn(isbn, "\n")]= 0; // Remove newline character
                    int found =0;
                    for (i =0; i< count; i++)
                    {
                        if (strcmp(library[i].isbn, isbn)== 0)
                        {
                            if (library[i].status ==1)
                            {
                                // Book is issued
                                library[i].status =0; // Mark as available
                                strcpy(library[i].issuedTo, "");
                                strcpy(library[i].issueDate, "");
                                strcpy(library[i].returnDate, "");
                                printf("Book returned successfully.\n");
                            }
                            else
                            {
                                printf("Book is not issued.\n");
                            }
                            found= 1;
                            break;
                        }
                    }
                    if (!found)
                    {
                        printf("Book with ISBN %s not found.\n", isbn);
                    }
                }
                break;
            
            case 4:
                if (count ==0)
                {
                    printf("No books available in the library.\n");
                }
                else
                {
                    printf("\nLibrary Books:\n");
                    for (i= 0; i <count; i++) {
                        printf("Title: %s, Author: %s, Year: %d, ISBN: %s, Status: %s\n",
                               library[i].title, library[i].author, library[i].year,
                               library[i].isbn, library[i].status ==0 ? "Available" : "Issued");
                        if (library[i].status==1)
                        {
                            printf("Issued To: %s, Issue Date: %s, Return Date: %s\n",
                                   library[i].issuedTo, library[i].issueDate, library[i].returnDate);
                        }
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