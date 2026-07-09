/*
 * Program: Pointers and Functions
 * Description: Passing a pointer to a function allows the function to
 *              modify the original variable — commonly used to return
 *              multiple values from a single function.
 */

#include <stdio.h>

void swap(int *a, int *b);

int main(void) {
    int x = 5, y = 10;
    printf("Before swap: x = %d, y = %d\n", x, y);

    swap(&x, &y); // pass addresses of x and y

    printf("After swap:  x = %d, y = %d\n", x, y);

    return 0;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
