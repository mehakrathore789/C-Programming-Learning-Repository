/*
 * Program: Sum of Digits using Recursion
 * Description: Recursively adds the last digit of a number to the sum
 *              of the digits of the remaining number.
 */

#include <stdio.h>

int sumOfDigits(int n) {
    if (n == 0) {                 // base case
        return 0;
    }
    return (n % 10) + sumOfDigits(n / 10); // last digit + sum of the rest
}

int main(void) {
    int number = 9875;
    printf("Sum of digits of %d is %d\n", number, sumOfDigits(number));
    return 0;
}
