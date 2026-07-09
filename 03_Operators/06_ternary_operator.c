/*
 * Program: Ternary (Conditional) Operator
 * Description: A compact one-line alternative to a simple if-else statement.
 *              Syntax: condition ? valueIfTrue : valueIfFalse
 */

#include <stdio.h>

int main(void) {
    int number = 7;

    // Instead of writing a full if-else block, use the ternary operator:
    const char *result = (number % 2 == 0) ? "Even" : "Odd";
    printf("%d is %s\n", number, result);

    int a = 15, b = 20;
    int max = (a > b) ? a : b; // Find the larger of two numbers
    printf("Maximum of %d and %d is %d\n", a, b, max);

    return 0;
}
