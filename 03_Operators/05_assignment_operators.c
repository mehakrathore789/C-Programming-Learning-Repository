/*
 * Program: Assignment Operators
 * Description: Shorthand operators that combine an operation with assignment.
 */

#include <stdio.h>

int main(void) {
    int x = 10;

    x += 5;  // same as: x = x + 5
    printf("After += 5: %d\n", x);

    x -= 3;  // same as: x = x - 3
    printf("After -= 3: %d\n", x);

    x *= 2;  // same as: x = x * 2
    printf("After *= 2: %d\n", x);

    x /= 4;  // same as: x = x / 4
    printf("After /= 4: %d\n", x);

    x %= 3;  // same as: x = x %% 3
    printf("After %%= 3: %d\n", x);

    return 0;
}
