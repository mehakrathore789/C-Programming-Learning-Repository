/*
 * Program: Linear Search
 * Description: Searches for a target value by checking every element
 *              one by one until a match is found (or the array ends).
 *              Time complexity: O(n)
 */

#include <stdio.h>

int main(void) {
    int numbers[] = {10, 25, 3, 47, 89, 15};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int target = 47;
    int foundIndex = -1; // -1 means "not found"

    for (int i = 0; i < size; i++) {
        if (numbers[i] == target) {
            foundIndex = i;
            break; // stop as soon as we find it
        }
    }

    if (foundIndex != -1) {
        printf("%d found at index %d\n", target, foundIndex);
    } else {
        printf("%d not found in the array\n", target);
    }

    return 0;
}
