/*This program is prepared by 23CS037 Prince Kirankumar Lad*/

#include <stdio.h>

int main()
{
    // Creating variables and arrays.
    int a[10], b[10], c[20] = {0}, L1, L2, swap = 0;

    // Scanning for number of the elements in first array.
    printf("Enter the number of element of the first array:");
    scanf("%d", &L1);

    // Scanning the numbers itself.
    for (int i = 0; i < L1; i++)
    {
        printf("Enter element #%d : ",i+1);
        scanf("%d", &a[i]);
    }

    // Scanning the number of the elements in second array.
    printf("Enter the number of elements of the second array:");
    scanf("%d", &L2);

    // Scanning numbers.
    for (int i = 0; i < L2; i++)
    {
        printf("Enter element #%d : ",i+1);
        scanf("%d", &b[i]);
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

    printf("\n\n23CS037_Prince\n");
    return 0;
}