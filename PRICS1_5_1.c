/*This program is prepared by 23CS037 Prince Kirankumar Lad*/

#include <stdio.h>
int main()
{
    float amount, quantity, price; // Creating three variables

    // Managing the I/O for all the variables.
    printf("Enter the price of product:");
    scanf("%f", &price); // Scanning the value of price of one item.
    printf("Enter the quantity of purchase:");
    scanf("%f", &quantity); // Scanning the amount of items.

    amount = price * quantity; // Calculating the final amount of purchase.

    if (quantity > 1000) // Calculting discount of 10% if purchase is more than 1000 Rs.
    {
        amount = amount - amount * 0.1;
    }

    printf("The bill is:%.2f", amount); // Printing bill.

    printf("\n\n23CS037_Prince\n");
    return 0;
}