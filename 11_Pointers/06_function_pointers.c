/*
 * Program: Function Pointers
 * Description: A function pointer stores the address of a function,
 *              allowing functions to be passed around and called indirectly.
 *              Commonly used for callbacks and building simple dispatch tables.
 */

#include <stdio.h>

int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }

int main(void) {
    // Declare a function pointer that matches the signature: int f(int, int)
    int (*operation)(int, int);

    operation = add; // point it to the 'add' function
    printf("Using function pointer for add:      %d\n", operation(10, 5));

    operation = subtract; // now point it to 'subtract' instead
    printf("Using function pointer for subtract:  %d\n", operation(10, 5));

    return 0;
}
