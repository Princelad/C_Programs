/*This program is prepared by 23CS037 Prince Kirankumar Lad*/

#include <stdio.h>

// Function declaration.
void binary(int);

// Function definition.
void binary(int a)
{
    if (a >= 1)
    {
        binary(a / 2);       // Recurrsive calling
        printf("%d", a % 2); // Printing the output.
    }
}

void main()
{
    // Creating a variable
    int num;

    // Scanning the number.
    printf("Enter the number:");
    scanf("%d", &num);

    // Checking weather the number is positive or not.
    if (num > 0)
    {
        printf("The binary of %d is ", num);
        binary(num);
    }
    else
    {
        printf("Enter proper number.");
    }

    printf("\n\n23CS037_Prince\n");
}