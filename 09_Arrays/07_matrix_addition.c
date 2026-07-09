/*
 * Program: Matrix Addition
 * Description: Adds two 2x2 matrices element by element and stores the
 *              result in a third matrix.
 */

#include <stdio.h>

int main(void) {
    int a[2][2] = {{1, 2}, {3, 4}};
    int b[2][2] = {{5, 6}, {7, 8}};
    int result[2][2];

    for (int row = 0; row < 2; row++) {
        for (int col = 0; col < 2; col++) {
            result[row][col] = a[row][col] + b[row][col];
        }
    }

    printf("Sum of matrices:\n");
    for (int row = 0; row < 2; row++) {
        for (int col = 0; col < 2; col++) {
            printf("%d ", result[row][col]);
        }
        printf("\n");
    }

    return 0;
}
