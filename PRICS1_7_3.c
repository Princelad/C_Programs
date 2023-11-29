/*This program is prepared by 23CS037 Prince Kirankumar Lad*/

#include <stdio.h>

int main()
{
    // Creating arrays.
    int a[3][3], b[3][3], c[3][3] = {0};

    // Scanning elements of the first array.
    printf("Enter enteries of A matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter A(%d,%d): ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    // Scanning elements of the second array.
    printf("Enter enteries of B matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter B(%d,%d): ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }

    // Multiplying two arrays.
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("The matrix multiplication of,\n");
    
    // Printing first matrix.
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("And\n");

    // Printing second matrix.
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    printf("The resulting matix is:\n");

    // Printing resulting matrix.
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    printf("\n\n23CS037_Prince\n");
    return 0;
}