/*
 * Program: if-else Statement
 * Description: Chooses between two blocks of code based on a condition.
 */

#include <stdio.h>

int main(void) {
    int number = 7;

    if (number % 2 == 0) {
        printf("%d is even\n", number);
    } else {
        printf("%d is odd\n", number);
    }

    return 0;
}
