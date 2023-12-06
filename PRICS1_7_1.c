/*This program is prepared by 23CS037 Prince Kirankumar Lad*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Creating variables.
    int *n, no_positive = 0, no_negative = 0, no_even = 0, no_odd = 0, no_zero = 0, Limit;

    // Scanning total number of numbers.
    printf("Enter the number of entries: ");
    scanf("%d", &Limit);

    // Dynamic memory allocation.
    n = (int *)malloc(Limit * sizeof(int));
    if (n == NULL)
    {
        printf("Error in allocating the storage.");
        exit(0);
    }

    // Scanning the numbers.
    printf("Enter the numbers:\n");
    for (int i = 0; i < Limit; i++)
    {
        if (scanf("%d", &n[i]) != 0)
        {
            printf("Error while scanning enter a integer.\n");
            exit(1);
        }
    }

    // Calculating for positive, negative, zero, odd or even.
    for (int i = 0; i < Limit; i++)
    {
        if (n[i] > 0)
        {
            no_positive++;
        }
        if (n[i] == 0)
        {
            no_zero++;
        }
        if (n[i] < 0)
        {
            no_negative++;
        }
        if (n[i] % 2 == 0)
        {
            no_even++;
        }
        else
        {
            no_odd++;
        }
    }

    // Printing the total number of positive, negative, zero, even and odd.
    printf("The number of positive numbers: %d\n", no_positive);
    printf("The number of zeros: %d\n", no_zero);
    printf("The number of negative numbers: %d\n", no_negative);
    printf("The number of even numbers: %d\n", no_even);
    printf("The number of odd numbers: %d\n", no_odd);

    free(n);

    printf("\n\n23CS037_Prince\n");
    return 0;
}