/*
 * Program: Find Maximum and Minimum in an Array
 * Description: Iterates through the array, keeping track of the largest
 *              and smallest values seen so far.
 */

#include <stdio.h>

int main(void) {
    int numbers[] = {45, 12, 89, 3, 67, 24};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int max = numbers[0]; // Assume the first element is the max/min initially
    int min = numbers[0];

    for (int i = 1; i < size; i++) {
        if (numbers[i] > max) max = numbers[i];
        if (numbers[i] < min) min = numbers[i];
    }

    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);

    return 0;
}
