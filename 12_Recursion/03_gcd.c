/*
 * Program: GCD using Recursion (Euclidean Algorithm)
 * Description: GCD(a, b) = GCD(b, a % b), until b becomes 0.
 *              At that point, 'a' holds the greatest common divisor.
 */

#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) {     // base case
        return a;
    }
    return gcd(b, a % b); // recursive case
}

int main(void) {
    int a = 56, b = 98;
    printf("GCD of %d and %d is %d\n", a, b, gcd(a, b));
    return 0;
}
