/*
 * Program: Format Specifiers Cheat Sheet
 * Description: A quick reference for the most commonly used format specifiers.
 */

#include <stdio.h>

int main(void) {
    int i = 42;
    float f = 3.14f;
    double d = 2.71828;
    char c = 'X';
    char str[] = "Hello";
    long l = 123456789L;
    unsigned int u = 4000000000U;

    printf("%%d (int):          %d\n", i);
    printf("%%f (float):        %f\n", f);
    printf("%%lf (double):      %lf\n", d);
    printf("%%c (char):         %c\n", c);
    printf("%%s (string):       %s\n", str);
    printf("%%ld (long):        %ld\n", l);
    printf("%%u (unsigned int): %u\n", u);
    printf("%%x (hexadecimal):  %x\n", i);
    printf("%%o (octal):        %o\n", i);

    return 0;
}
