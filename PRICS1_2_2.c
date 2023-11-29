/*This program is prepared by 23CS037 Prince Kirankumar Lad*/

#include <stdio.h>
float main()
{
        // Declaration of variables
        float Basic_Salary, TAX, Allowance_DA, Allowance_HRA, Allowance_MA, Allowance_TA, Deduction_PF, Gross_Salary, Net_Salary;

        // Managing I/O for all the variables
        printf("Enter Basic salary =");
        scanf("%f", &Basic_Salary); // sacanning the value of Basic salary
        printf("\nEnter TAX Deductions =");
        scanf("%f", &TAX); // scanning the value of TAX

        // Calculating the allowance and the dedutions according to the give values
        Allowance_DA = Basic_Salary * (0.70);
        Allowance_HRA = Basic_Salary * (0.07);
        Allowance_MA = Basic_Salary * (0.02);
        Allowance_TA = Basic_Salary * (0.04);
        Deduction_PF = Basic_Salary * (0.12);
        Gross_Salary = Basic_Salary + Allowance_DA + Allowance_HRA + Allowance_MA + Allowance_TA; // Calulating the value of Gross salary by adding the value of basic salary to all the allowance
        Net_Salary = Gross_Salary - TAX - Deduction_PF;                                           // caculating the Net salary by subtracting the value of the gross salary by TAX and the deducions

        // Printing all inputs and outputs
        printf("\nSr.No.\t\tInput/Output\t\tAmount");
        printf("\n1\t\tBasic Salary\t\t%.2f", Basic_Salary);
        printf("\n2\t\tDA of Basic Salary\t%.2f", Allowance_DA);
        printf("\n3\t\tHRA of Basic Salary\t%.2f", Allowance_HRA);
        printf("\n4\t\tMA of Basic Salary\t%.2f", Allowance_MA);
        printf("\n5\t\tTA of Basic Salary\t%.2f", Allowance_TA);
        printf("\n6\t\tPF of Basic Salary\t%.2f", Deduction_PF);
        printf("\n7\t\tGross salary\t\t%.2f", Gross_Salary);
        printf("\n8\t\tNet salary\t\t%.2f", Net_Salary);

        printf("\n\n23CS037_Prince\n");
        return 0;
}
