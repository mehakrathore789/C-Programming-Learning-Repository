/*
 * Program: Integer Basics
 * Description: Demonstrates the 'int' data type used for whole numbers.
 */

#include <stdio.h>

int main(void) {
    int positiveNumber = 42;
    int negativeNumber = -17;
    int zero = 0;

    printf("Positive: %d\n", positiveNumber);
    printf("Negative: %d\n", negativeNumber);
    printf("Zero: %d\n", zero);

    // sizeof() returns the number of bytes an int occupies (usually 4 bytes)
    printf("Size of int: %zu bytes\n", sizeof(int));

    return 0;
}
