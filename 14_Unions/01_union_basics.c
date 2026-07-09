/*
 * Program: Union Basics
 * Description: All members of a union share the same memory location.
 *              Only one member holds a valid value at any given time.
 */

#include <stdio.h>

union Data {
    int intValue;
    float floatValue;
    char charValue;
};

int main(void) {
    union Data data;

    data.intValue = 65;
    printf("After setting intValue:   %d\n", data.intValue);

    data.floatValue = 3.14f; // This OVERWRITES intValue because they share memory
    printf("After setting floatValue: %f\n", data.floatValue);
    printf("intValue is now garbage:  %d (undefined/meaningless)\n", data.intValue);

    printf("\nSize of union Data: %zu bytes (size of its largest member)\n", sizeof(data));

    return 0;
}
