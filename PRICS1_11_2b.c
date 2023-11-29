#include <stdio.h>

// Function-pointer initialization.
char *copy(char *, char *);

void main()
{
    // Creating pointer and arrays.
    char *str;
    char source[] = "Kindness";
    char target[10];
    
    // Calling the function.
    str = copy(target, source);
    
    // Printing the output.
    printf("%s\n", str);

    printf("\n\n23CS037_Prince\n");
}

// Function-pointer definition
char *copy(char *t, char *s)
{
    char *r;
    
    r = t;
    
    // Copying until '\0'
    while (*s != '\0')
    {
        *t = *s;
        t++;
        s++;
    }
    
    // Adding '\0' at end.
    *t = '\0';
    
    return (r);
}