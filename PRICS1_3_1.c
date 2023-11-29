/*This program is prepared by 23CS037 Prince Kirankumar Lad*/

#include <stdio.h>
#include <math.h>
#define Pi 3.14 // Definning the value if Pi
float main()
{
        // Making variables for the calculations
        float Time, Length, Grav;

        // Managing I/O of all the variables.
        printf("Enter the length of pendulum=");
        scanf("%f", &Length); // Scaninng the value of the length
        printf("Enter the gravitational accerlation=");
        scanf("%f", &Grav); // Scanning the value of gravitional accerlation

        // Calulating the value of the time by using the known formula
        Time = 2 * Pi * sqrt(Length / Grav);

        // Printing the result
        printf("The time peroid=%.2f\n", Time);

        printf("\n\n23CS037_Prince\n");
        return 0;
}
