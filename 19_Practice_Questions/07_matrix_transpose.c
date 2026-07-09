/*
 * Practice: Matrix Transpose
 * Description: The transpose of a matrix flips it over its diagonal,
 *              turning rows into columns and vice versa.
 */

#include <stdio.h>

int main(void) {
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    int transposed[3][2]; // rows and columns are swapped: 3x2 instead of 2x3

    for (int row = 0; row < 2; row++) {
        for (int col = 0; col < 3; col++) {
            transposed[col][row] = matrix[row][col];
        }
    }

    printf("Original matrix (2x3):\n");
    for (int row = 0; row < 2; row++) {
        for (int col = 0; col < 3; col++) printf("%d ", matrix[row][col]);
        printf("\n");
    }

    printf("\nTransposed matrix (3x2):\n");
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 2; col++) printf("%d ", transposed[row][col]);
        printf("\n");
    }

    return 0;
}
