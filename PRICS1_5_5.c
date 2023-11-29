/*This program is prepared by 23CS037 Prince Kirankumar Lad*/

#include <stdio.h>
#include <ctype.h>
int main()
{
    // Managing I/O for "a".
    printf("Enter the character:");
    char a;
    a = getchar();
    putchar(a);
    printf("\n");

    if (isalnum(a)) // Checking weather "a" is an Alphanumeric character or not.
    {
        printf("\n%c is alphanumeric.", a);
    }
    if (isdigit(a)) // Checking weather "a" is a Digit character or not.
    {
        printf("\n%c is a digit.", a);
    }
    if (islower(a)) // Checking weather "a" is a Lower case character or not.
    {
        printf("\n%c is a lower case charater,Upper case character is %c.", a, toupper(a));
    }
    if (isupper(a)) // Checking weather "a" is an Upper case character or not.
    {
        printf("\n%c is a upper case charater,Lower case character is %c.", a, tolower(a));
    }
    if (isspace(a)) // Checking weather "a" is a white space character or not.
    {
        printf("\n%c is a white space.", a);
    }
    if (isprint(a)) // Checking weather "a" is Printable or not.
    {
        printf("\n%c is a printable char.", a);
    }
    else
    {
        printf("\n%c is a non-printable char.", a);
    }

    printf("\n\n23CS037_Prince\n");
    return 0;
}