/*
 * Program: break and continue
 * Description: 'break' immediately exits the loop.
 *              'continue' skips the rest of the current iteration and
 *              moves on to the next one.
 */

#include <stdio.h>

int main(void) {
    printf("Using break (stop at 5):\n");
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            break; // Loop stops completely once i reaches 5
        }
        printf("%d ", i);
    }
    printf("\n\n");

    printf("Using continue (skip even numbers):\n");
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            continue; // Skips printf for even numbers, loop continues
        }
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
