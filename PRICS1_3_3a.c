/*This program is prepared by 23CS037 Prince Kirankumar Lad*/

#include <stdio.h>
int main()
{
        int a, b; // Creating two variables

        // Managing I/O of all the variables.
        printf("Enter the first number:");
        scanf("%d", &a); // Scanning first no.
        printf("Enter the second number:");
        scanf("%d", &b); // Scanning second no.

        printf("The starting values of a and b are %d and %d resp.", a, b); // Printing initial values of a and b.

        // Caluctions to swap two no.
        b = a + b;
        a = b - a;
        b = b - a;

        printf("\nThe ending values of a and b are %d and %d resp.\n", a, b); // Printing final values of a and b.

        printf("\n\n23CS037_Prince\n");
        return 0;
}
