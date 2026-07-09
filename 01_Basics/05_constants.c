/*
 * Program: Constants
 * Description: Demonstrates two ways to define constants in C:
 *              1. Using the 'const' keyword (type-checked, preferred in modern C)
 *              2. Using #define (a preprocessor macro, simple text replacement)
 */

#include <stdio.h>

#define PI 3.14159        // Macro constant - replaced by the preprocessor before compilation

int main(void) {
    const int MAX_STUDENTS = 60;  // 'const' variable - value cannot change after this

    printf("Value of PI: %f\n", PI);
    printf("Maximum students allowed: %d\n", MAX_STUDENTS);

    // Uncommenting the next line would cause a compile-time error:
    // MAX_STUDENTS = 100; // Error: assignment of read-only variable

    return 0;
}
