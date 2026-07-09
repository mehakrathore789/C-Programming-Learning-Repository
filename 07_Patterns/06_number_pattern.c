/*
 * Program: Number Pattern
 * Description: Prints a triangle where each row repeats its row number.
 *
 * Output for n = 5:
 * 1
 * 2 2
 * 3 3 3
 * 4 4 4 4
 * 5 5 5 5 5
 */

#include <stdio.h>

int main(void) {
    int n = 5;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", i); // print the row number 'i' times
        }
        printf("\n");
    }

    return 0;
}
