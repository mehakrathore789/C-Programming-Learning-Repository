/*
 * Program: Logical Operators
 * Description: Used to combine multiple conditions. Result is 1 (true) or 0 (false).
 */

#include <stdio.h>

int main(void) {
    int age = 25;
    int hasID = 1; // 1 represents true, 0 represents false

    // && (AND): true only if BOTH conditions are true
    if (age >= 18 && hasID) {
        printf("Entry allowed (AND check passed)\n");
    }

    // || (OR): true if AT LEAST ONE condition is true
    int isMember = 0, isGuest = 1;
    if (isMember || isGuest) {
        printf("Access granted (OR check passed)\n");
    }

    // ! (NOT): reverses a boolean value
    int isBanned = 0;
    if (!isBanned) {
        printf("User is not banned\n");
    }

    return 0;
}
