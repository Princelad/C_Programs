/*This program is prepared by 23CS037 Prince Kirankumar Lad*/

#include <stdio.h>

// Creating function to calculate and return string length.
int str_len(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}
    
int main()
{
    // Creating variable and character arrays.
    int i, j, Option;
    char str1[50], str2[50];

retry:

    // Printing Menu.
    printf("\n###################### Menu ######################");
    printf("\n[1] Length of the string.");
    printf("\n[2] Reverse the string.");
    printf("\n[3] Compare two strings.");
    printf("\n[4] Copy one string to another.");
    printf("\n[5] Concatenate two strings.");
    printf("\n[6] Exit.");
    printf("\nChoose the option:");
    scanf("%d", &Option);

    switch (Option)
    {
    case 1:

        // Scanning string
        printf("Enter the string:");
        scanf("\n");
        scanf("%[^\n]", str1);

        // Printing string length.
        printf("The length of the string is: %d", str_len(str1));

        goto retry;

    case 2:

        // Scanning string.
        printf("Enter the string:");
        scanf("\n");
        scanf("%[^\n]", str1);

        i = 0;
        j = str_len(str1);
        j--;

        // Reversing the string
        while (i < j)
        {
            int swap = str1[i];
            str1[i] = str1[j];
            str1[j] = swap;
            i++;
            j--;
        }

        // Printing the reversed string.
        printf("The reversed string is:%s", str1);

        goto retry;

    case 3:

        // Scanning two strings.
        printf("Enter the first string:");
        scanf("\n");
        scanf("%[^\n]", str1);
        printf("Enter the second string:");
        scanf("\n");
        scanf("%[^\n]", str2);

        i = 0;
        j = 0;

        // Checking weather both the strings are same or not
        while (str1[i] == str2[i])
        {
            if (str1[i] == '\0')
            {
                j = 1;
                break;
            }
            i++;
        }

        // Print the result.
        if (j == 1)
        {
            printf("The entered strings are same.");
        }
        else
        {
            printf("The entered strings are not the same.");
        }

        goto retry;
    case 4:

        // Scannning the string
        printf("Enter the string:");
        scanf("\n");
        scanf("%[^\n]", str1);

        i = 0;

        // Scanning the string.
        while (str1[i] != '\0')
        {
            str2[i] = str1[i];
            i++;
        }

        // Printing the copied string.
        printf("The copied string is:%s", str2);

        goto retry;

    case 5:

        // Scanning two strings.
        printf("Enter the first string:");
        scanf("\n");
        scanf("%[^\n]", str1);
        printf("Enter the second string:");
        scanf("\n");
        scanf("%[^\n]", str2);

        i = str_len(str1);
        j = 0;

        // Appending elements of str2 to str1. 
        while (str2 != '\0')
        {
            str1[i] = str2[j];
            i++;
            j++;
        }

        printf("%s", str1);

        goto retry;
    case 6:

        printf("Exiting the program.\n");

        printf("\n\n23CS037_Prince\n");

        break;

    default:

        printf("Please enter valid opton from the menu.");

        goto retry;
    }

    return 0;
}