/*
 * Program: Floyd's Triangle
 * Description: Prints consecutive natural numbers arranged in a triangle.
 *
 * Output for n = 5:
 * 1
 * 2 3
 * 4 5 6
 * 7 8 9 10
 * 11 12 13 14 15
 */

#include <stdio.h>

int main(void) {
    int n = 5;
    int counter = 1; // Keeps track of the next number to print

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", counter);
            counter++;
        }
        printf("\n");
    }

    return 0;
}
