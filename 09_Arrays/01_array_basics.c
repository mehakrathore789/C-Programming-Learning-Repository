/*
 * Program: Array Basics
 * Description: Declaring, initializing, and printing elements of a 1D array.
 */

#include <stdio.h>

int main(void) {
    int marks[5] = {90, 85, 76, 88, 95}; // Declaration + initialization

    // Indices go from 0 to 4 for an array of size 5
    printf("First element:  %d\n", marks[0]);
    printf("Third element:  %d\n", marks[2]);

    printf("All elements: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", marks[i]);
    }
    printf("\n");

    return 0;
}
