/*
 * Program: Float Basics
 * Description: 'float' stores single-precision decimal (real) numbers.
 *              It occupies 4 bytes and gives about 6-7 digits of precision.
 */

#include <stdio.h>

int main(void) {
    float pi = 3.14159f;      // 'f' suffix marks this literal as float, not double
    float temperature = -12.5f;

    printf("Value of pi: %f\n", pi);
    printf("Temperature: %.1f degrees\n", temperature); // %.1f -> 1 digit after decimal
    printf("Size of float: %zu bytes\n", sizeof(float));

    return 0;
}
