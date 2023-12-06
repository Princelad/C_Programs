/*This program is prepared by 23CS037 Prince Kirankumar Lad*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Creating variables and arrays.
    int *a, *b, *c, L1, L2, swap = 0;

    // Scanning for number of the elements in first array.
    printf("Enter the number of element of the first array:");
    scanf("%d", &L1);

    // Dynamic memory allocation.
    a = (int *)malloc(L1 * sizeof(int));
    if (a == NULL)
    {
        printf("Error in memory allocation.");
        exit(0);
    }

    // Scanning the numbers itself.
    for (int i = 0; i < L1; i++)
    {
        printf("Enter element #%d : ", i + 1);
        if (scanf("%d", &a[i]) != 1)
        {
            printf("Error in scanning.Enter a integer value.");
            exit(1);
        }
    }

    // Scanning the number of the elements in second array.
    printf("Enter the number of elements of the second array:");
    scanf("%d", &L2);

    // Dynamic memory allocation.
    b = (int *)malloc(L2 * sizeof(int));
    if (b == NULL)
    {
        printf("Error in memory allocation.");
        exit(0);
    }

    // Scanning numbers.
    for (int i = 0; i < L2; i++)
    {
        printf("Enter element #%d : ", i + 1);
        if (scanf("%d", &b[i]) != 1)
        {
            printf("Error in scanning.Enter a integer value.");
            exit(1);
        }
    }

    // Dynamic memory allocation.
    c = (int *)malloc((L1 + L2) * sizeof(int));
    if (c == NULL)
    {
        printf("Error in memory allocation.");
        exit(0);
    }

    // Merging both arrays.
    for (int i = 0; i < L1 + L2; i++)
    {
        if (i < L1)
        {
            c[i] = a[i];
        }
        else
        {
            c[i] = b[i - L1];
        }
    }

    // Sorting the array.
    for (int i = 0; i < L1 + L2 - 1; i++)
    {
        for (int j = 0; j < L1 + L2 - i - 1; j++)
        {
            if (c[j] > c[j + 1])
            {
                swap = c[j];
                c[j] = c[j + 1];
                c[j + 1] = swap;
            }
        }
    }

    printf("The merged and sorted array is:");

    // Printing the array.
    for (int i = 0; i < L1 + L2; i++)
    {
        printf("%d ", c[i]);
    }

    // Freeing the space.
    free(a);
    free(b);
    free(c);

    printf("\n\n23CS037_Prince\n");
    return 0;
}