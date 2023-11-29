/*This program is prepared by 23CS037 Prince Kirankumar Lad*/

#include <stdio.h>

int main()
{
    // Creating variables.
    int no_Sticks = 21, User, Computer, Round = 1;

    // Printing title and the rule of the game.
    printf("\n**************************The Match Sticks Game**************************");
    printf("\nRules\n[1]Pick 1, 2, 3 or 4 sticks!!\n[2]Therre are total 21 sticks and the last player to pick the stick is the loser.");

    while (no_Sticks != 1) // Looping until the value of the no_Sticks is equal to 1.
    {
    cheater: // Label for goto.

        printf("\n====================Round:%d====================", Round);

        // I/O for user.
        printf("\nYour pick: ");
        scanf("%d", &User);

        if (User <= 4 && User >= 1)
        {
            no_Sticks = no_Sticks - User; // Calculating the no of sticks after the user picking.

            // I/O for computer.
            Computer = 5 - User;
            printf("\nComputer's pick: %d", Computer);

            no_Sticks = no_Sticks - Computer; // Calculating the no of sticks after the computer picking.

            printf("\nNo of sticks remaining: %d", no_Sticks); // Prining no of remaining sticks.
            Round++;
        }
        else
        {
            printf("\nPlease maintain the sports-man sprit and pick only from 1 to 4."); // Printing when user picks no other than 1, 2, 3 or 4.
            goto cheater;                                                                // Transffering control
        }
    }
    printf("\nSince the the remaining sticks are 1 and the last pick is of the user thus the computer is the winner.");

    printf("\n\n23CS037_Prince\n");
    return 0;
}