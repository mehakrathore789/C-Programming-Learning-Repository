/*
 * Program: Double Pointers (Pointer to Pointer)
 * Description: A double pointer stores the address of another pointer.
 *              Useful when a function needs to modify a pointer itself
 *              (not just the value it points to).
 */

#include <stdio.h>

int main(void) {
    int value = 25;
    int *ptr = &value;     // ptr points to 'value'
    int **doublePtr = &ptr; // doublePtr points to 'ptr'

    printf("value:            %d\n", value);
    printf("*ptr:             %d\n", *ptr);          // dereference once -> value
    printf("**doublePtr:      %d\n", **doublePtr);   // dereference twice -> value

    **doublePtr = 99; // modifies 'value' through two levels of indirection
    printf("After **doublePtr = 99, value = %d\n", value);

    return 0;
}
