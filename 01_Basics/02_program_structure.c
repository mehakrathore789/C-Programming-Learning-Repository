/*
 * Program: Structure of a C Program
 * Description: Demonstrates the standard parts every C program has:
 *              1. Preprocessor directives (#include)
 *              2. Global declarations (optional)
 *              3. main() function
 *              4. Statements & expressions
 *              5. Return statement
 */

#include <stdio.h>     // 1. Preprocessor directive - includes I/O functions

int globalCounter = 0;  // 2. Global declaration - accessible anywhere in this file

int main(void) {        // 3. Entry point of every C program
    globalCounter = 1;              // 4. Statement - assignment
    printf("Counter: %d\n", globalCounter); // 4. Expression evaluated & printed

    return 0;            // 5. Returns exit status to the operating system
}
