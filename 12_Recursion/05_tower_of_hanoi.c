/*
 * Program: Tower of Hanoi
 * Description: A classic puzzle: move n disks from the source rod to the
 *              destination rod, using an auxiliary rod, following two rules:
 *              1. Only one disk can be moved at a time.
 *              2. A larger disk may never be placed on top of a smaller one.
 *
 *              Minimum moves required = 2^n - 1
 */

#include <stdio.h>

void solveHanoi(int numDisks, char source, char auxiliary, char destination) {
    if (numDisks == 0) {
        return; // base case - nothing to move
    }

    // Step 1: Move (n-1) disks from source to auxiliary, using destination as helper
    solveHanoi(numDisks - 1, source, destination, auxiliary);

    // Step 2: Move the remaining largest disk from source to destination
    printf("Move disk %d from %c to %c\n", numDisks, source, destination);

    // Step 3: Move the (n-1) disks from auxiliary to destination, using source as helper
    solveHanoi(numDisks - 1, auxiliary, source, destination);
}

int main(void) {
    int numDisks = 3;
    printf("Steps to solve Tower of Hanoi with %d disks:\n", numDisks);
    solveHanoi(numDisks, 'A', 'B', 'C'); // A = source, B = auxiliary, C = destination
    return 0;
}
