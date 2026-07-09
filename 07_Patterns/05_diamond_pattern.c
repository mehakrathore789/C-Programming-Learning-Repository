/*
 * Program: Diamond Pattern
 * Description: Combines a pyramid and an inverted pyramid to form a diamond.
 */

#include <stdio.h>

int main(void) {
    int n = 5;

    // Top half - pyramid
    for (int i = 1; i <= n; i++) {
        for (int space = 1; space <= n - i; space++) printf("  ");
        for (int star = 1; star <= i; star++) printf("* ");
        printf("\n");
    }

    // Bottom half - inverted pyramid (starts from n-1 to avoid repeating middle row)
    for (int i = n - 1; i >= 1; i--) {
        for (int space = 1; space <= n - i; space++) printf("  ");
        for (int star = 1; star <= i; star++) printf("* ");
        printf("\n");
    }

    return 0;
}
