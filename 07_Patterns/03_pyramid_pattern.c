/*
 * Program: Pyramid Pattern
 * Description: Prints a centered pyramid using spaces and stars.
 *
 * Output for n = 5:
 *         *
 *        * *
 *       * * *
 *      * * * *
 *     * * * * *
 */

#include <stdio.h>

int main(void) {
    int n = 5;

    for (int i = 1; i <= n; i++) {
        // Print leading spaces to center the pyramid
        for (int space = 1; space <= n - i; space++) {
            printf("  ");
        }
        // Print the stars for this row
        for (int star = 1; star <= i; star++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
