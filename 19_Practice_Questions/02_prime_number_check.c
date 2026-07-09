/*
 * Practice: Prime Number Check
 * Description: A prime number is only divisible by 1 and itself.
 *              We only need to check divisibility up to sqrt(n) for efficiency.
 */

#include <stdio.h>
#include <math.h>

int isPrime(int n);

int main(void) {
    int number = 29;

    if (isPrime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is NOT a prime number.\n", number);
    }

    return 0;
}

int isPrime(int n) {
    if (n <= 1) return 0; // 0, 1, and negatives are not prime

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0; // divisible by something other than 1 and itself
        }
    }
    return 1;
}
