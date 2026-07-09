/*
 * Program: Square Pattern
 * Description: Prints an n x n solid square of stars.
 *
 * Output for n = 5:
 * * * * * *
 * * * * * *
 * ...
 */

#include <stdio.h>

int main(void) {
    int n = 5;

    for (int i = 1; i <= n; i++) {        // controls rows
        for (int j = 1; j <= n; j++) {    // controls columns
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
