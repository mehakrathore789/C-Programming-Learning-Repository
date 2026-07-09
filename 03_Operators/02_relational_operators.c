/*
 * Program: Relational Operators
 * Description: Relational operators compare two values and result in
 *              1 (true) or 0 (false) in C.
 */

#include <stdio.h>

int main(void) {
    int a = 10, b = 20;

    printf("a == b : %d\n", a == b); // Equal to
    printf("a != b : %d\n", a != b); // Not equal to
    printf("a > b  : %d\n", a > b);  // Greater than
    printf("a < b  : %d\n", a < b);  // Less than
    printf("a >= b : %d\n", a >= b); // Greater than or equal to
    printf("a <= b : %d\n", a <= b); // Less than or equal to

    return 0;
}
