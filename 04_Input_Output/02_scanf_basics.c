/*
 * Program: scanf() Basics
 * Description: scanf() reads formatted input from the keyboard.
 *              The & (address-of operator) tells scanf() WHERE in memory
 *              to store the value the user types.
 */

#include <stdio.h>

int main(void) {
    int age;
    float weight;

    printf("Enter your age: ");
    scanf("%d", &age);        // & gives scanf the memory address of 'age'

    printf("Enter your weight (kg): ");
    scanf("%f", &weight);

    printf("You are %d years old and weigh %.1f kg.\n", age, weight);

    return 0;
}
