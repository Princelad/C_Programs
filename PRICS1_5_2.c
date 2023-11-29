/*This program is prepared by 23CS037 Prince Kirankumar Lad*/

#include <stdio.h>
#include <math.h>
int main()
{
    float x1, x2, x3, y1, y2, y3, s1, s2, s3; // Creating nine variables.

    // Managing the I/O for all the variables.
    printf("Enter the co-ordinates of first point (x1,y1):");
    scanf("%f %f", &x1, &y1); // Scanning the values of two co-ordinates x1 and y1.
    printf("Enter the co-ordinates of first point (x2,y2):");
    scanf("%f %f", &x2, &y2); // Scanning the values of two co-ordinates x2 and y2.
    printf("Enter the co-ordinates of first point (x3,y3):");
    scanf("%f %f", &x3, &y3); // Scanning the values of two co-ordinates x3 and y3.

    // Calculating the slopes
    s1 = fabs(y2 - y1) / (x2 - x1);
    s2 = fabs(y3 - y2) / (x3 - x2);
    s3 = fabs(y3 - y1) / (x3 - x1);

    if (s1 == s2 && s1 == s3) // Checking weather all the slopes are equal or not.
    {
        printf("The points are collinear.");
    }
    else
    {
        printf("The points are non-collinear");
    }

    printf("\n\n23CS037_Prince\n");
    return 0;
}