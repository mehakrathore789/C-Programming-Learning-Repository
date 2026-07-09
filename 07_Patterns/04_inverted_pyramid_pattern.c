/*
 * Program: Inverted Pyramid Pattern
 * Description: The reverse of a pyramid - starts wide, narrows to a point.
 *
 * Output for n = 5:
 * * * * * *
 *  * * * *
 *   * * *
 *    * *
 *     *
 */

#include <stdio.h>

int main(void) {
    int n = 5;

    for (int i = 1; i <= n; i++) {
        for (int space = 1; space <= i - 1; space++) {
            printf("  ");
        }
        for (int star = 1; star <= n - i + 1; star++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
