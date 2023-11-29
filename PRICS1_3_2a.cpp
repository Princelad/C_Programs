/*This program is prepared by 23CS037 Prince Kirankumar Lad*/

#include <stdio.h>
int main()
{
	int Y = 10, Rajiv, Preet, Raj, Ritul; // Entering the intial vlues of yellow balls and the changes made by the students

	printf("The value of Y at the starting:%d", Y); // Printing the initail values of yellow balls.

	// Calculation for the changes made
	Rajiv = ++Y;
	Preet = --Y;
	Raj = Y++;
	Ritul = Y--;

	printf("\nThe value of Y at the ending:%d", Y);																	  // Printing the final no. of balls
	printf("\nThe values after each changes:\nRajiv\t%d\nPreet\t%d\nRaj\t%d\nRitul\t%d\n", Rajiv, Preet, Raj, Ritul); // Printing the no, of balls after each change.

	printf("\n\n23CS037_Prince\n");
	return 0;
}