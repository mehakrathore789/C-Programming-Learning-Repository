/*
 * Program: Reverse an Array
 * Description: Reverses the array in place using a two-pointer swap technique,
 *              without using any extra array.
 */

#include <stdio.h>

int main(void) {
    int numbers[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int start = 0;
    int end = size - 1;

    while (start < end) {
        // Swap numbers[start] and numbers[end]
        int temp = numbers[start];
        numbers[start] = numbers[end];
        numbers[end] = temp;

        start++;
        end--;
    }

    printf("Reversed array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
