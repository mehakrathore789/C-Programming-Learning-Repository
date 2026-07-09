/*
 * Program: Char Basics
 * Description: 'char' stores a single character, internally represented
 *              as its ASCII integer value (1 byte).
 */

#include <stdio.h>

int main(void) {
    char grade = 'A';
    char newline = '\n';   // Escape sequence representing a newline character

    printf("Grade: %c\n", grade);
    printf("ASCII value of 'A': %d\n", grade); // %d prints the underlying integer

    // Characters can be used in arithmetic since they are stored as numbers
    char nextGrade = grade + 1;   // 'A' + 1 = 'B'
    printf("Next Grade: %c\n", nextGrade);

    printf("Size of char: %zu byte\n", sizeof(char));

    return 0;
}
