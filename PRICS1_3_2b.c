/*This program is prepared by 23CS037 Prince Kirankumar Lad*/

#include <stdio.h>
int main()
{
	int Y = 10, P = 20, R1; // Entering the values for yellow and the pink balls.

	R1 = ++Y + Y++ + --Y + ++P - --P - --P; // calucating the equation.

	printf("\nThe value of the calculation:%d", R1);							// Printing the value of the calulation.
	printf("\nThe values of Y and P at ending are %d and %d respect.\n", Y, P); // Printing the value of nio. of the yellow and the pink balls.

	printf("\n\n23CS037_Prince\n");
	return 0;
}