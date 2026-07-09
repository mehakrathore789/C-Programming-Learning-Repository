/*
 * Program: 2D Array Basics
 * Description: A 2D array is essentially a "table" or matrix of rows and columns.
 */

#include <stdio.h>

int main(void) {
    // 3 rows, 3 columns
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Matrix contents:\n");
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            printf("%d ", matrix[row][col]);
        }
        printf("\n");
    }

    printf("\nElement at row 1, col 2: %d\n", matrix[1][2]); // should be 6

    return 0;
}
