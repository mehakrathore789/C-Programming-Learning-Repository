/*
 * Program: Pointer Basics
 * Description: A pointer stores the memory address of another variable.
 *              & gets the address of a variable.
 *              * (dereference) gets the value stored at that address.
 */

#include <stdio.h>

int main(void) {
    int number = 42;
    int *ptr = &number; // ptr now holds the ADDRESS of 'number'

    printf("Value of number:        %d\n", number);
    printf("Address of number:      %p\n", (void *)&number);
    printf("Value stored in ptr:    %p\n", (void *)ptr);   // same as &number
    printf("Value pointed to by ptr: %d\n", *ptr);           // dereferencing -> 42

    *ptr = 100; // Modifies 'number' indirectly, through the pointer
    printf("After *ptr = 100, number = %d\n", number);

    return 0;
}
