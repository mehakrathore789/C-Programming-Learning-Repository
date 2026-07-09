/*
 * Program: Increment and Decrement Operators
 * Description: ++ increases a value by 1, -- decreases it by 1.
 *              Pre (++x) increments BEFORE the value is used.
 *              Post (x++) increments AFTER the value is used.
 */

#include <stdio.h>

int main(void) {
    int a = 5;
    printf("Pre-increment  ++a = %d (a is now %d)\n", ++a, a); // prints 6, a becomes 6

    int b = 5;
    printf("Post-increment b++ = %d (b is now %d)\n", b++, b); // prints 5, b becomes 6

    int c = 5;
    printf("Pre-decrement  --c = %d (c is now %d)\n", --c, c); // prints 4

    int d = 5;
    printf("Post-decrement d-- = %d (d is now %d)\n", d--, d); // prints 5, d becomes 4

    return 0;
}
