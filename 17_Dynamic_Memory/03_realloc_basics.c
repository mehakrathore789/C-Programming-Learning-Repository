/*
 * Program: realloc() Basics
 * Description: realloc() resizes a previously allocated memory block,
 *              preserving its existing contents (up to the new size).
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int originalSize = 3;
    int *numbers = (int *)malloc(originalSize * sizeof(int));

    if (numbers == NULL) {
        printf("Initial allocation failed!\n");
        return 1;
    }

    for (int i = 0; i < originalSize; i++) numbers[i] = i + 1; // {1, 2, 3}

    printf("Before resizing: ");
    for (int i = 0; i < originalSize; i++) printf("%d ", numbers[i]);
    printf("\n");

    // Grow the array to hold 6 integers instead of 3
    int newSize = 6;
    int *resized = (int *)realloc(numbers, newSize * sizeof(int));

    if (resized == NULL) {
        printf("Reallocation failed!\n");
        free(numbers); // original block is still valid if realloc fails
        return 1;
    }
    numbers = resized; // realloc may have moved the block to a new address

    for (int i = originalSize; i < newSize; i++) numbers[i] = (i + 1) * 10; // fill new slots

    printf("After resizing:  ");
    for (int i = 0; i < newSize; i++) printf("%d ", numbers[i]);
    printf("\n");

    free(numbers);
    numbers = NULL;

    return 0;
}
