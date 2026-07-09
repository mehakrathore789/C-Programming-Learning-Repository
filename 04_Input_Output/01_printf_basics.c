/*
 * Program: printf() Basics
 * Description: printf() prints formatted text to the console.
 */

#include <stdio.h>

int main(void) {
    int age = 21;
    float height = 5.9f;
    char initial = 'J';

    printf("Age: %d\n", age);          // %d for integers
    printf("Height: %.1f ft\n", height); // %f for floats, .1 -> 1 decimal place
    printf("Initial: %c\n", initial);   // %c for a single character
    printf("Age is %d and height is %.1f\n", age, height); // multiple values

    return 0;
}
