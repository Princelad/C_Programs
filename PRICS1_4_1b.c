/*This program is prepared by 23CS037 Prince Kirankumar Lad*/

#include <stdio.h>
int main()
{
    int a; // Creating a variable.

    // Managing I/O of a.
    printf("Enter a number:");
    scanf("%d", &a);                      // Scanning the value of the number.
    printf("\n%d is in Decimal.", a);     // Printing using %d specifier.
    printf("\n%o is in Octal.", a);       // Printing using %o specifier.
    printf("\n%x is in Hexadecimal.", a); // Printing using %x specifier.

    printf("\n\n23CS037_Prince\n");
    return 0;
}