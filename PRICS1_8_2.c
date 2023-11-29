/*This program is prepared by 23CS037 Prince Kirankumar Lad*/

#include <stdio.h>
#include <string.h>

int main()
{
    // Creating two character array.
    char name[5][50], temp[50];

    printf("Enter the names:\n");

    // Scanning the names.
    for (int i = 0; i < 5; i++)
    {
        printf("[%d] ", i + 1);
        scanf("%s", name[i]);
    }

    // Sorting the names.
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (strcmp(name[i], name[j]) > 0)
            {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }

    printf("After sorting:\n");

    // Printing the names.
    for (int i = 0; i < 5; i++)
    {
        printf("[%d] %s\n", i + 1, name[i]);
    }

    printf("\n\n23CS037_Prince\n");

    return 0;
}