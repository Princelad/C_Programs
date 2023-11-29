/*This program is prepared by 23CS037 Prince Kirankumar Lad*/

#include <stdio.h>

// Creating a structure for the employee credentials.
struct Credentials
{
    int age;
    char name[50];
    char address[100];
};

// Creating a structure for the employee.
struct Employee
{
    struct Credentials c1;
    float salary;
};

typedef struct Employee Info; // Renaming the structure Employee to Info.

int main()
{
    // Creating a member of Info.
    Info e1;

    // Scanning the employee info.
    printf("Enter the name and age of employee: ");
    scanf(" %[^\n] %d", e1.c1.name, &e1.c1.age);
    printf("Enter adderss: ");
    scanf(" %[^\n]", e1.c1.address);
    printf("Enter salary of employee:");
    scanf("%f", &e1.salary);

    // Printing the employee info.
    printf("\n\nname : %s\n", e1.c1.name);
    printf("age : %d\n", e1.c1.age);
    printf("address : %s\n", e1.c1.address);
    printf("salary : %.2f\n", e1.salary);
    printf("Process finished\n");

    printf("\n\n23CS037_Prince\n");
    return 0;
}