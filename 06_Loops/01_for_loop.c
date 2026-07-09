/*
 * Program: for Loop
 * Description: Prints numbers from 1 to 10. Best used when the number
 *              of iterations is known in advance.
 */

#include <stdio.h>

int main(void) {
    // initialization: i = 1 | condition: i <= 10 | update: i++
    for (int i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
