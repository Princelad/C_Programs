/*This program is prepared by 23CS037 Prince Kirankumar Lad*/

#include <stdio.h>
int main()
{
        // Defining variables
        int Total_population = 80000;
        int No_of_Literate, No_of_Men, No_of_LiterateMen, No_of_Women, No_of_LiterateWomen, No_of_IllitrateMen, No_of_IllitrateWomen;

        // Managing the I/O for all the variables.
        No_of_Men = Total_population * (0.52);                    // Calculating 52% of population
        No_of_Women = Total_population - No_of_Men;               // Subtracting population of men from total population
        No_of_Literate = Total_population * (0.48);               // Calculating 48% of total population
        No_of_LiterateMen = Total_population * (0.32);            // Calculating 32% of total population
        No_of_IllitrateMen = No_of_Men - No_of_LiterateMen;       // Subtracting total literate men from total no of men
        No_of_LiterateWomen = No_of_Literate - No_of_LiterateMen; // Subtracting total literate men from total literate population
        No_of_IllitrateWomen = No_of_Women - No_of_LiterateWomen; // Subtracting total literate women from total no of women

        // Getting output via printing
        printf("Sr.No.\tGet Outcome\t\t\tValue");
        printf("\n1\tTotal Population\t\t%d", Total_population);
        printf("\n2\tNumber of Literate\t\t%d", No_of_Literate);
        printf("\n3\tNumber of Men\t\t\t%d", No_of_Men);
        printf("\n4\tNumber of Literate Men\t\t%d", No_of_LiterateMen);
        printf("\n5\tNumber of Illiterate Men\t%d", No_of_IllitrateMen);
        printf("\n6\tNumber of Women\t\t\t%d", No_of_Women);
        printf("\n7\tNumber of Literate Women\t%d", No_of_LiterateWomen);
        printf("\n8\tNumber of Illiterate Women\t%d\n", No_of_IllitrateWomen);

        printf("\n\n23CS037_Prince\n");
        return 0;
}
