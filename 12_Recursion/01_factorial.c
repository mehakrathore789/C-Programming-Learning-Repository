/*
 * Program: Factorial using Recursion
 * Description: n! = n * (n-1) * (n-2) * ... * 1
 *              Base case: 0! = 1
 */

#include <stdio.h>

long factorial(int n) {
    if (n == 0) {          // Base case - stops the recursion
        return 1;
    }
    return n * factorial(n - 1); // Recursive case - calls itself with a smaller n
}

int main(void) {
    int number = 6;
    printf("%d! = %ld\n", number, factorial(number));
    return 0;
}
