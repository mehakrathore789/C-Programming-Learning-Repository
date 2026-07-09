/*
 * Program: Function Basics
 * Description: Shows how to declare (prototype), define, and call a function.
 */

#include <stdio.h>

void greetUser(void); // Function prototype/declaration - tells the compiler this function exists

int main(void) {
    greetUser();  // Function call
    greetUser();  // Functions can be called multiple times
    return 0;
}

// Function definition - the actual body of the function
void greetUser(void) {
    printf("Hello! Welcome to functions in C.\n");
}
