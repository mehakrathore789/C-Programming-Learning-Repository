/*
 * Program: Integer Variants and Range
 * Description: C offers multiple integer types of different sizes:
 *              short, int, long, long long — each signed or unsigned.
 *              limits.h provides the min/max values for each.
 */

#include <stdio.h>
#include <limits.h>   // Provides INT_MAX, INT_MIN, etc.

int main(void) {
    short shortVar = 100;
    long longVar = 100000L;
    long long longLongVar = 10000000000LL;
    unsigned int unsignedVar = 4000000000U; // Only non-negative values

    printf("short:      %d (size: %zu bytes)\n", shortVar, sizeof(short));
    printf("long:       %ld (size: %zu bytes)\n", longVar, sizeof(long));
    printf("long long:  %lld (size: %zu bytes)\n", longLongVar, sizeof(long long));
    printf("unsigned:   %u (size: %zu bytes)\n", unsignedVar, sizeof(unsigned int));

    printf("\nRange of int: %d to %d\n", INT_MIN, INT_MAX);

    return 0;
}
