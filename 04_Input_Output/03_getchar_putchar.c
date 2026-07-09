/*
 * Program: getchar() and putchar()
 * Description: getchar() reads a single character from input.
 *              putchar() writes a single character to output.
 */

#include <stdio.h>

int main(void) {
    printf("Enter a single character: ");
    char ch = getchar();   // Reads exactly one character

    printf("You entered: ");
    putchar(ch);           // Prints exactly one character
    putchar('\n');         // Prints a newline character

    return 0;
}
