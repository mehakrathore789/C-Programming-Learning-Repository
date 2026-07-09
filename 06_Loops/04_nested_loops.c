/*
 * Program: Nested Loops
 * Description: Prints a multiplication table (1 to 5) using a loop inside
 *              another loop. The outer loop picks the number; the inner
 *              loop generates its multiplication table.
 */

#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 5; i++) {           // outer loop -> the number
        for (int j = 1; j <= 10; j++) {      // inner loop -> the multiplier
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("------------------\n");
    }

    return 0;
}
