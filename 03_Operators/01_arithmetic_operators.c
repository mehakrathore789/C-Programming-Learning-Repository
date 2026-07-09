/*
 * Program: Arithmetic Operators
 * Description: Demonstrates +, -, *, /, and % (modulus) operators.
 */

#include <stdio.h>

int main(void) {
    int a = 17, b = 5;

    printf("a + b = %d\n", a + b);   // Addition
    printf("a - b = %d\n", a - b);   // Subtraction
    printf("a * b = %d\n", a * b);   // Multiplication
    printf("a / b = %d\n", a / b);   // Integer division -> truncates decimal part
    printf("a %% b = %d\n", a % b);  // Modulus -> remainder of division (%% prints a literal %)

    return 0;
}
