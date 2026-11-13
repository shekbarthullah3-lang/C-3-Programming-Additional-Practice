/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// Question 03: Print a Left-Aligned Pyramid of Stars.
#include <stdio.h>

int main(void)                                             // Program execution begins here.
{
    int n;                                                 // Stores the number of rows requested by the user.

    printf("Enter the number of rows: ");                  // Asks the user how many rows of stars should be printed.
    if (scanf("%d", &n) != 1)                              // Checks whether the row count was read successfully as an integer.
    {
        printf("Invalid input.\n");                        // Displays an error message when the input is not an integer.
        return 1;                                          // Stops the program because the input is invalid.
    }

    if (n <= 0)                                            // Checks that the requested number of rows is positive.
    {
        printf("Enter a positive number of rows.\n");      // Explains that the number of rows must be greater than zero.
        return 1;                                          // Stops because a pyramid needs at least one row.
    }

    for (int i = 1; i <= n; i++)                           // Outer loop selects the current row, from row 1 through row n.
    {
        for (int j = 1; j <= (2 * i - 1); j++)             // Inner loop prints 2*i-1 stars for the current row.
        {
            printf("*");                                   // Prints one star without moving to the next line.
        }
        printf("\n");                                      // Moves to a new line after all stars in the current row are printed.
    }

    return 0;                                              // Tells the operating system that the program finished successfully.
}

