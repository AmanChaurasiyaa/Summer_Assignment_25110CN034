//Q109  Write a program to Create library management system.

#include <stdio.h>
#include <string.h>

struct Book
{
    int id;
    char title[100];
    char author[50];
    int year;
    char issuedTo[50];
    char issuedDate[20];
    char returnDate[20];
    int status;
};

int main()
{
    struct Book books[100];
    int numBooks, choice, i, id;

    //taking input for number of books.
    printf("Enter number of books: ");
    scanf("%d", &numBooks);

    //looping through each book to take their details.
    for(i = 0; i < numBooks; i++)
    {
        //taking input for book details.
        printf("\nEnter details for book %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &books[i].id);
        getchar();

        //taking input for book title, author, and year of publication.
        printf("Title: ");
        fgets(books[i].title, sizeof(books[i].title), stdin);
        books[i].title[strcspn(books[i].title, "\n")] = '\0'; // remove newline character

        //taking input for book author and year of publication.
        printf("Author: ");
        fgets(books[i].author, sizeof(books[i].author), stdin);
        books[i].author[strcspn(books[i].author, "\n")] = '\0'; // remove newline character

        //taking input for book year of publication.
        printf("Year of Publication: ");
        scanf("%d", &books[i].year);

        books[i].status = 0; // 0 means available, 1 means issued
    }

    //displaying the menu and taking user input for various operations in the library management system.
    do
    {
        printf("\nLibrary Management System\n");
        printf("1. Display all books\n");
        printf("2. Issue a book\n");
        printf("3. Return a book\n");
        printf("4. Display issued books\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        //processing the user's choice
        switch(choice)
        {
            case 1:
                printf("\n--- List of Books ---\n");
                for(i = 0; i < numBooks; i++)
                {
                    printf("ID: %d, Title: %s, Author: %s, Year: %d, Status: %s\n",
                           books[i].id, books[i].title, books[i].author,
                           books[i].year, (books[i].status == 0) ? "Available" : "Issued");
                }
                break;

            case 2:
                printf("\nEnter the ID of the book to issue: ");
                scanf("%d", &id);
                for(i = 0; i < numBooks; i++)
                {
                    if(books[i].id == id)
                    {
                        if(books[i].status == 0)
                        {
                            getchar();
                            printf("Enter the name of the person issuing the book: ");  
                            fgets(books[i].issuedTo, sizeof(books[i].issuedTo), stdin);
                            books[i].issuedTo[strcspn(books[i].issuedTo, "\n")] = '\0'; // remove newline character
                            printf("Enter the issue date (dd/mm/yyyy): ");
                            fgets(books[i].issuedDate, sizeof(books[i].issuedDate), stdin);
                            books[i].issuedDate[strcspn(books[i].issuedDate, "\n")] = '\0'; // remove newline character
                            books[i].status = 1; // mark as issued
                            printf("Book issued successfully!\n");
                        }
                        else
                        {
                            printf("Book is already issued to %s on %s.\n", books[i].issuedTo, books[i].issuedDate);
                        }
                        break;
                    }
                }
                if(i == numBooks)
                {
                    printf("Book with ID %d not found.\n", id);
                }
                break;

            case 3:
                printf("\nEnter the ID of the book to return: ");
                scanf("%d", &id);
                for(i = 0; i < numBooks; i++)
                {
                    if(books[i].id == id)
                    {
                        if(books[i].status == 1)
                        {
                            getchar();
                            printf("Enter the return date (dd/mm/yyyy): ");
                            fgets(books[i].returnDate, sizeof(books[i].returnDate), stdin);
                            books[i].returnDate[strcspn(books[i].returnDate, "\n")] = '\0'; // remove newline character
                            books[i].status = 0; // mark as available
                            printf("Book returned successfully!\n");
                        }
                        else
                        {
                            printf("Book is not issued.\n");
                        }
                        break;
                    }
                }
                if(i == numBooks)
                {
                    printf("Book with ID %d not found.\n", id);
                }
                break;

            case 4:
                printf("\n--- List of Issued Books ---\n");
                for(i = 0; i < numBooks; i++)
                {
                    if(books[i].status == 1)
                    {
                        printf("ID: %d, Title: %s, Author: %s, Issued To: %s, Issue Date: %s\n",books[i].id, books[i].title, books[i].author,books[i].issuedTo, books[i].issuedDate);
                    }
                }
                break;

            case 5:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while(choice != 5);
}