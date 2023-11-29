/*This program is prepared by 23CS037 Prince Kirankumar Lad*/

#include <stdio.h>

void main()
{
    // Creating array, pointer and counter variables. 
    int marks[10], *m, Distinction = 0, First_class = 0, Pass = 0, Fail = 0;
    m = marks;

    // Scanning the marks of the students.
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the marks #%d : ", i + 1);
        scanf("%d", (m + i));
    }

    // Byfercating all the marks.
    for (int i = 0; i < 10; i++)
    {
        if (*(m + i) >= 70)
        {
            Distinction++;
        }
        else if (*(m + i) >= 60)
        {
            First_class++;
        }
        else if (*(m + i) >= 40)
        {
            Pass++;
        }
        else
        {
            Fail++;
        }
    }

    // Print the output.
    printf("DISTINCTION %d FIRST-CLASS %d PASS %d Fail %d", Distinction, First_class, Pass, Fail);

    printf("\n\n23CS037_Prince\n");
}
