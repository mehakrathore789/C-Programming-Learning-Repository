/*
 * Program: malloc() Basics
 * Description: malloc() allocates a block of memory of a given size (in bytes)
 *              on the heap, but does NOT initialize it (contains garbage values).
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n = 5;

    // Allocate memory for 'n' integers: n * sizeof(int) bytes
    int *numbers = (int *)malloc(n * sizeof(int));

    if (numbers == NULL) { // Always check for allocation failure
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Fill the dynamically allocated array
    for (int i = 0; i < n; i++) {
        numbers[i] = (i + 1) * 10;
    }

    printf("Dynamically allocated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    free(numbers); // Release the memory back to the system
    numbers = NULL; // Avoid a dangling pointer

    return 0;
}
