/*This program is prepared by 23CS037 Prince Kirankumar Lad*/

#include <stdio.h>

int main()
{
    // Creating variables.
    int i, j, no_Rows;

    // Scanning the number of rows required.
    printf("The number of rows you need to print the pattern: ");
    scanf("%d", &no_Rows);

    // Printing pattern using for loop.
    for (i = 1; i <= no_Rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j % 2);
        }
        printf("\n");
    }

    printf("\n\n23CS037_Prince\n");
    return 0;
}