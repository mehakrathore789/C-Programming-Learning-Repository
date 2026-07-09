/*
 * Program: Fibonacci Series using Recursion
 * Description: Each number is the sum of the two preceding ones: 0,1,1,2,3,5,8...
 *              Base cases: fib(0) = 0, fib(1) = 1
 */

#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) return 0;      // base case 1
    if (n == 1) return 1;      // base case 2
    return fibonacci(n - 1) + fibonacci(n - 2); // recursive case
}

int main(void) {
    int terms = 10;

    printf("Fibonacci series (%d terms): ", terms);
    for (int i = 0; i < terms; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}
