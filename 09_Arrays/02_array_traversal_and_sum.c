/*
 * Program: Array Traversal and Sum
 * Description: Loops through every element of an array to calculate the total sum.
 */

#include <stdio.h>

int main(void) {
    int numbers[6] = {12, 7, 25, 3, 9, 40};
    int size = sizeof(numbers) / sizeof(numbers[0]); // total bytes / bytes per element
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += numbers[i];
    }

    printf("Total elements: %d\n", size);
    printf("Sum of array elements: %d\n", sum);
    printf("Average: %.2f\n", (float)sum / size);

    return 0;
}
