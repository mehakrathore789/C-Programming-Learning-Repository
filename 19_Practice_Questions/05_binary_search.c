/*
 * Practice: Binary Search
 * Description: Efficiently searches a SORTED array by repeatedly dividing
 *              the search range in half. Time complexity: O(log n)
 */

#include <stdio.h>

int binarySearch(int arr[], int size, int target);

int main(void) {
    int sortedNumbers[] = {2, 5, 8, 12, 16, 23, 38, 45, 56, 72};
    int size = sizeof(sortedNumbers) / sizeof(sortedNumbers[0]);
    int target = 23;

    int result = binarySearch(sortedNumbers, size, target);

    if (result != -1) {
        printf("%d found at index %d\n", target, result);
    } else {
        printf("%d not found in the array\n", target);
    }

    return 0;
}

int binarySearch(int arr[], int size, int target) {
    int low = 0, high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2; // avoids potential overflow vs (low+high)/2

        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            low = mid + 1;   // search the right half
        } else {
            high = mid - 1;  // search the left half
        }
    }

    return -1; // not found
}
