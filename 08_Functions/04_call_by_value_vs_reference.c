/*
 * Program: Call by Value vs Call by Reference
 * Description: In "call by value", the function gets a COPY of the argument,
 *              so changes inside the function do NOT affect the original variable.
 *              In "call by reference" (using pointers), the function receives
 *              the variable's ADDRESS and can modify the original value directly.
 */

#include <stdio.h>

void tryToDoubleByValue(int num);       // Will NOT change the caller's variable
void doubleByReference(int *num);       // WILL change the caller's variable

int main(void) {
    int a = 10;
    tryToDoubleByValue(a);
    printf("After call by value:     a = %d (unchanged)\n", a);

    int b = 10;
    doubleByReference(&b);  // pass the ADDRESS of b using &
    printf("After call by reference: b = %d (changed)\n", b);

    return 0;
}

void tryToDoubleByValue(int num) {
    num = num * 2; // only modifies the local copy 'num'
}

void doubleByReference(int *num) {
    *num = *num * 2; // dereference the pointer to modify the original variable
}
