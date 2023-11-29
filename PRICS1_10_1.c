/*This program is prepared by 23CS037 Prince Kirankumar Lad*/

#include <stdio.h>

// Creating structure for storing details of the books.
struct Book_Detail
{
    float amount;
    char title[100];
    char author[100];
};

typedef struct Book_Detail bookInfo; // Renaming struture Book_Detail to bookinfo.

// Defining a function to print the info.
void books(bookInfo a)
{
    printf("%s\t|\t%s\t|\t%.2f\n", a.title, a.author, a.amount);
}

void main()
{
    // Creating 10 members of the structure bookinfo.
    bookInfo book[10];
    // Creating variable for number of books to be entered.
    int num;

    // Scanning the number of books.
    printf("Enter the number of books:");
    scanf("%d", &num);

    // Scanning the bookinfo.
    for (int i = 0; i < num; i++)
    {
        printf("Enter the title of the book #%d:", i + 1);
        scanf(" %[^\n]", book[i].title);
        printf("Enter the author of the book #%d:", i + 1);
        scanf(" %[^\n]", book[i].author);
        printf("Enter the amount of the book #%d:", i + 1);
        scanf("%f", &book[i].amount);
    }

    printf("Book Title\t|\tAuthor name\t|\tAmount of book\n");

    // Printing bookinfo.
    for (int i = 0; i < num; i++)
    {
        books(book[i]);
    }

    printf("\n\n23CS037_Prince\n");
}