/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// Question 02: Set, Clear, and Toggle Specific Register Bits.
#include <stdio.h>

unsigned char modify_register(unsigned char reg)           // Receives an 8-bit register value and returns its modified value.
{
    reg = (unsigned char)(reg | (1U << 2));                // Sets bit index 2 to 1 using the bitwise OR operator.
    reg = (unsigned char)(reg & ~(1U << 5));               // Clears bit index 5 to 0 using AND with the inverted bit mask.
    reg = (unsigned char)(reg ^ (1U << 0));                // Toggles bit index 0 using the bitwise XOR operator.
    return reg;                                            // Returns the updated 8-bit register value.
}

int main(void)                                             // Program execution begins here.
{
    unsigned int input;                                    // Temporarily stores the number entered by the user.

    printf("Enter an 8-bit register value (0 to 255): ");  // Asks for a decimal value that fits in an 8-bit register.
    if (scanf("%u", &input) != 1)                          // Checks whether the input was read successfully as an unsigned integer.
    {
        printf("Invalid input.\n");                        // Displays an error message when the input is not a valid integer.
        return 1;                                          // Stops the program because the input is invalid.
    }

    if (input > 255U)                                      // Checks that the entered value is within the 8-bit range.
    {
        printf("Enter a value from 0 to 255.\n");          // Explains the valid range for an 8-bit unsigned value.
        return 1;                                          // Stops because the value cannot fit in 8 bits.
    }

    unsigned char original = (unsigned char)input;         // Converts the validated value to an unsigned char register.
    unsigned char modified = modify_register(original);    // Calls the bitwise function and stores the returned register value.

    printf("Original register: %u (0x%02X)\n",             // Prints the original register in decimal and hexadecimal formats.
           (unsigned int)original,
           (unsigned int)original);                        // Supplies the original value for the hexadecimal format specifier.
    printf("Modified register: %u (0x%02X)\n",             // Prints the modified register in decimal and hexadecimal formats.
           (unsigned int)modified,
           (unsigned int)modified);                        // Supplies the modified value for the hexadecimal format specifier.

    return 0;                                              // Tells the operating system that the program finished successfully.
}
