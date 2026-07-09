/*
 * Program: Bitwise Operators
 * Description: Operate directly on the binary representation of integers.
 *              & AND, | OR, ^ XOR, ~ NOT, << left shift, >> right shift
 */

#include <stdio.h>

int main(void) {
    int a = 12; // binary: 1100
    int b = 10; // binary: 1010

    printf("a & b  = %d\n", a & b);   // AND  -> 1000 = 8
    printf("a | b  = %d\n", a | b);   // OR   -> 1110 = 14
    printf("a ^ b  = %d\n", a ^ b);   // XOR  -> 0110 = 6
    printf("~a     = %d\n", ~a);      // NOT  -> flips all bits (two's complement)
    printf("a << 1 = %d\n", a << 1);  // Left shift  -> multiplies by 2 -> 24
    printf("a >> 1 = %d\n", a >> 1);  // Right shift -> divides by 2   -> 6

    return 0;
}
