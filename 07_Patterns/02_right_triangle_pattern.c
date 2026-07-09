/*
 * Program: Right-Angled Triangle Pattern
 * Description: Each row prints one more star than the previous row.
 *
 * Output for n = 5:
 * *
 * * *
 * * * *
 * * * * *
 * * * * * *
 */

#include <stdio.h>

int main(void) {
    int n = 5;

    for (int i = 1; i <= n; i++) {   // row number
        for (int j = 1; j <= i; j++) { // print 'i' stars in row 'i'
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
