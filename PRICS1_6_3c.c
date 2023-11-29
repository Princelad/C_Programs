/*This program is prepared by 23CS037 Prince Kirankumar Lad*/

#include <stdio.h>

int main()
{
    // Creating variables.    
    int i = 1, j, no_Rows;

    // Scanning the number of rows.
    printf("The number of rows you need to print the pattern: ");
    scanf("%d", &no_Rows);

    // Printing the pattern using the do...while loop.
    do
    {
        j = 0;
        do
        {
            printf(" ");
            j++;
        } while (j <= no_Rows - i);
        j = 1;
        do
        {
            printf("%c", j + 64);
            j++;
        } while (j <= i);
        j = i - 1;
        do
        {
            if (j == 0)
            {
                j--;
                continue;
            }
            printf("%c", j + 64);
            j--;
        } while (j >= 1);
        printf("\n");
        i++;
    } while (i <= no_Rows);

    printf("\n\n23CS037_Prince\n");
    return 0;
}