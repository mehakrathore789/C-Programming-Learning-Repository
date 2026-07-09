/*
 * Program: Functions with Parameters
 * Description: Parameters let you pass data INTO a function so it can
 *              work with different values each time it's called.
 */

#include <stdio.h>

void printSum(int a, int b); // 'a' and 'b' are parameters

int main(void) {
    printSum(4, 6);    // 4 and 6 are arguments passed to the function
    printSum(10, -3);
    return 0;
}

void printSum(int a, int b) {
    int sum = a + b;
    printf("%d + %d = %d\n", a, b, sum);
}
