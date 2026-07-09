/*
 * Program: Double Basics
 * Description: 'double' stores double-precision decimal numbers.
 *              It occupies 8 bytes and gives about 15-16 digits of precision,
 *              making it more accurate than 'float' for scientific calculations.
 */

#include <stdio.h>

int main(void) {
    double preciseValue = 3.14159265358979;
    double distanceInKm = 384400.0; // e.g., distance to the Moon

    printf("Precise value: %lf\n", preciseValue);
    printf("Distance: %.2f km\n", distanceInKm);
    printf("Size of double: %zu bytes\n", sizeof(double));

    return 0;
}
