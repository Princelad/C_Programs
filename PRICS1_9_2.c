/*This program is prepared by 23CS037 Prince Kirankumar Lad*/

#include <stdio.h>
#include <math.h>

// Function declaration.
float semi_perimeter(float, float, float);
float area_triangle(float, float, float);

// Function definition
float semi_perimeter(float a, float b, float c)
{
    return (a + b + c) / 2.0;
}

float area_triangle(float a, float b, float c)
{
    return sqrt(semi_perimeter(a, b, c) * (semi_perimeter(a, b, c) - a) * (semi_perimeter(a, b, c) - b) * (semi_perimeter(a, b, c) - c));
}

void main()
{
    // Creating three variables
    float a, b, c;

    // Scanning the sides of the trianlge.
    printf("Enter the sides:");
    scanf("%f %f %f", &a, &b, &c);

    // Calculating area
    float area = area_triangle(a, b, c);

    // Checking wheather the triangle is possible or not,If yes then printing the area.
    if (area > 0)
    {
        printf("The Triangle will be formed with area of triangle is: %.2f", area);
    }
    else
    {
        printf("The entered sides don't form a triangle.");
    }

    printf("\n\n23CS037_Prince\n");
}