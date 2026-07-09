/*
 * Program: calloc() Basics
 * Description: calloc() allocates memory for an array AND initializes
 *              every byte to zero, unlike malloc() which leaves it uninitialized.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n = 5;

    // calloc(numberOfElements, sizeOfEachElement)
    int *numbers = (int *)calloc(n, sizeof(int));

    if (numbers == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("calloc initializes memory to zero:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", numbers[i]); // all zeros before we assign anything
    }
    printf("\n");

    free(numbers);
    numbers = NULL;

    return 0;
}
