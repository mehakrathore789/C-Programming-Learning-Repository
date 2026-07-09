/*
 * Program: while Loop
 * Description: Calculates the sum of digits of a number.
 *              The while loop checks the condition BEFORE each iteration.
 */

#include <stdio.h>

int main(void) {
    int number = 12345;
    int sum = 0;

    while (number != 0) {
        int digit = number % 10;   // Extract the last digit
        sum += digit;
        number /= 10;               // Remove the last digit
    }

    printf("Sum of digits: %d\n", sum);

    return 0;
}
