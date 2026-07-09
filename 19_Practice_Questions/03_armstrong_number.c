/*
 * Practice: Armstrong Number Check
 * Description: A number is an Armstrong number if the sum of its own
 *              digits, each raised to the power of the number of digits,
 *              equals the number itself. Example: 153 = 1^3 + 5^3 + 3^3
 */

#include <stdio.h>
#include <math.h>

int main(void) {
    int number = 153;
    int original = number;
    int digitCount = 0;

    // Step 1: count the number of digits
    int temp = number;
    while (temp != 0) {
        digitCount++;
        temp /= 10;
    }

    // Step 2: sum each digit raised to the power of digitCount
    int sum = 0;
    temp = number;
    while (temp != 0) {
        int digit = temp % 10;
        sum += (int)pow(digit, digitCount);
        temp /= 10;
    }

    if (sum == original) {
        printf("%d is an Armstrong number.\n", original);
    } else {
        printf("%d is NOT an Armstrong number.\n", original);
    }

    return 0;
}
