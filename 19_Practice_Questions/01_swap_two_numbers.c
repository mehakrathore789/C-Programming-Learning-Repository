/*
 * Practice: Swap Two Numbers
 * Description: Demonstrates two ways to swap values -
 *              1. Using a temporary variable (works for any data type)
 *              2. Without a temporary variable (arithmetic trick, ints only)
 */

#include <stdio.h>

int main(void) {
    int a = 5, b = 10;

    // Method 1: using a temporary variable
    int temp = a;
    a = b;
    b = temp;
    printf("After swap using temp variable: a = %d, b = %d\n", a, b);

    // Method 2: without a temporary variable (only safe for numeric types)
    int x = 3, y = 8;
    x = x + y; // x now holds the sum
    y = x - y; // y becomes the original x
    x = x - y; // x becomes the original y
    printf("After swap without temp variable: x = %d, y = %d\n", x, y);

    return 0;
}
