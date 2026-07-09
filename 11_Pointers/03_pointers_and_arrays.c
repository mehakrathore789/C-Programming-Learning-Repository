/*
 * Program: Pointers and Arrays
 * Description: An array name, when used in most expressions, decays into
 *              a pointer to its first element. This means array[i] and
 *              *(array + i) are equivalent.
 */

#include <stdio.h>

int main(void) {
    int scores[] = {5, 10, 15, 20};

    printf("Using array indexing:\n");
    for (int i = 0; i < 4; i++) {
        printf("scores[%d] = %d\n", i, scores[i]);
    }

    printf("\nUsing pointer notation:\n");
    for (int i = 0; i < 4; i++) {
        printf("*(scores + %d) = %d\n", i, *(scores + i));
    }

    return 0;
}
