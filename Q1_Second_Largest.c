/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// Question 01: Find the Second Largest Distinct Element.
#include <stdio.h>

#define MAX_SIZE 100

int second_largest(const int arr[], int size)              // Returns the second-largest distinct value without sorting the array.
{
    int largest = arr[0];                                  // Starts by treating the first array element as the largest value.
    int second = 0;                                        // Stores the second-largest value; its initial value is not used until found.
    int second_found = 0;                                  // Tracks whether a second distinct value has been found (0 = no, 1 = yes).

    for (int i = 1; i < size; i++)                         // Visits each remaining array element exactly once.
    {
        if (arr[i] > largest)                              // Checks whether the current element is larger than the largest so far.
        {
            second = largest;                              // Moves the previous largest value into the second-largest position.
            largest = arr[i];                              // Updates largest with the new maximum value.
            second_found = 1;                              // Confirms that a second distinct value is now available.
        }
        else if (arr[i] < largest &&                       // The current value must be smaller than largest; equal values are ignored.
                 (!second_found || arr[i] > second))       // Updates second when none exists yet or the current value is greater.
        {
            second = arr[i];                               // Stores the current element as the best second-largest candidate.
            second_found = 1;                              // Marks that the second-largest distinct value has been found.
        }
    }

    return second;                                         // Sends the second-largest distinct array value back to the caller.
}

int main(void)                                             // Program execution begins here.
{
    int size;                                              // Stores how many integers the user wants to enter.
    int arr[MAX_SIZE];                                     // Creates an integer array that can hold up to 100 values.

    printf("Enter array size (2 to 100): ");               // Asks the user to enter the number of array elements.
    if (scanf("%d", &size) != 1)                           // Checks whether the size was read successfully as an integer.
    {
        printf("Invalid input.\n");                        // Displays an error message when the size input is not an integer.
        return 1;                                          // Stops the program and reports an input error.
    }

    if (size < 2 || size > MAX_SIZE)                       // Ensures the array size is within the supported range.
    {
        printf("Enter a size from 2 to 100.\n");           // Explains the permitted array-size range.
        return 1;                                          // Stops because the entered size is not valid.
    }

    for (int i = 0; i < size; i++)                         // Repeats once for every array element that must be read.
    {
        printf("Enter element %d: ", i + 1);               // Displays the position of the element currently being entered.
        if (scanf("%d", &arr[i]) != 1)                     // Checks whether the current array element is a valid integer.
        {
            printf("Invalid input.\n");                    // Displays an error message for an invalid array element.
            return 1;                                      // Stops the program because the array input is incomplete.
        }
    }

    int answer = second_largest(arr, size);                // Calls the function and receives the second-largest distinct value.
    printf("Second largest element: %d\n", answer);        // Displays the result returned by the function.

    return 0;                                              // Tells the operating system that the program finished successfully.
}
