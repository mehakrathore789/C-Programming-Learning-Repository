/*
 * Program: Return Values
 * Description: A function can send a result back to the caller using 'return'.
 */

#include <stdio.h>

int square(int number); // returns an int

int main(void) {
    int result = square(6); // the returned value is stored in 'result'
    printf("Square of 6 is %d\n", result);

    // You can also use the return value directly in an expression
    printf("Square of 8 is %d\n", square(8));

    return 0;
}

int square(int number) {
    return number * number; // sends this value back to wherever the function was called
}
