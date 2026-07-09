/*
 * Program: free() and Dangling Pointers
 * Description: free() releases memory back to the system. After freeing,
 *              the pointer still holds the OLD address (a "dangling pointer")
 *              unless you explicitly set it to NULL. Using a dangling pointer
 *              is undefined behavior.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *data = (int *)malloc(5 * sizeof(int));
    if (data == NULL) {
        printf("Allocation failed!\n");
        return 1;
    }

    for (int i = 0; i < 5; i++) data[i] = i * i;

    printf("Data before freeing: ");
    for (int i = 0; i < 5; i++) printf("%d ", data[i]);
    printf("\n");

    free(data);   // Memory is released back to the system
    data = NULL;  // GOOD PRACTICE: prevents accidental use of the freed memory

    if (data == NULL) {
        printf("Pointer safely set to NULL after freeing.\n");
    }

    // Accessing data[0] here would be undefined behavior if we hadn't set data = NULL
    // and tried to dereference it - always avoid using memory after it's freed.

    return 0;
}
