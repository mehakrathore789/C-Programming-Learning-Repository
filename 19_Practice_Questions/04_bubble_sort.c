/*
 * Practice: Bubble Sort
 * Description: Repeatedly swaps adjacent elements if they are in the wrong
 *              order. After each pass, the largest unsorted element "bubbles"
 *              to its correct position. Time complexity: O(n^2)
 */

#include <stdio.h>

void bubbleSort(int arr[], int size);
void printArray(int arr[], int size);

int main(void) {
    int numbers[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    printf("Before sorting: ");
    printArray(numbers, size);

    bubbleSort(numbers, size);

    printf("After sorting:  ");
    printArray(numbers, size);

    return 0;
}

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int swapped = 0; // optimization: stop early if no swaps happen in a pass
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        if (!swapped) break; // array is already sorted, no need to continue
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) printf("%d ", arr[i]);
    printf("\n");
}
