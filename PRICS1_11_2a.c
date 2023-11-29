
#include <stdio.h>

// Function initialization.
void display();

void main()
{
    // Creating function-pointer.
    void (*func_ptr)();
    func_ptr = display;
    
    // Printing the address of the function-pointer.
    printf("Address of functions display is %u\n", func_ptr);
    
    // Calling the function-pointer i.e. calling display function.
    (*func_ptr)();

    printf("\n\n23CS037_Prince\n");
}

// Function definition
void display()
{
    // Printing.
    puts("By helping others, we help overselves!!");
}