/*
 * Program: Storage Classes
 * Description: Storage classes control a variable's scope, lifetime, and default value.
 *              - auto:     default for local variables, exists only within its block
 *              - static:   retains its value between function calls
 *              - extern:   refers to a variable defined in another file/scope
 *              - register: hints the compiler to store the variable in a CPU register
 */

#include <stdio.h>

void countCalls(void);

int main(void) {
    countCalls();
    countCalls();
    countCalls(); // each call shows the counter increasing, proving 'static' persists

    auto int localVar = 5; // 'auto' is the default, rarely written explicitly
    printf("Local (auto) variable: %d\n", localVar);

    return 0;
}

void countCalls(void) {
    static int callCount = 0; // initialized only ONCE, retains value across calls
    callCount++;
    printf("This function has been called %d time(s)\n", callCount);
}
