/*
 * Program: Pointer Arithmetic
 * Description: You can add/subtract integers to/from a pointer.
 *              The pointer moves by (integer * size of the pointed-to type),
 *              not just by 1 byte.
 */

#include <stdio.h>

int main(void) {
    int numbers[] = {10, 20, 30, 40, 50};
    int *ptr = numbers; // points to numbers[0] (array name decays to a pointer)

    for (int i = 0; i < 5; i++) {
        printf("Address: %p, Value: %d\n", (void *)(ptr + i), *(ptr + i));
        // *(ptr + i) is equivalent to numbers[i]
    }

    return 0;
}
