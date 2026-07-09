/*
 * Program: Nested if-else
 * Description: An if-else statement placed inside another if-else block,
 *              useful when a decision depends on more than one condition.
 */

#include <stdio.h>

int main(void) {
    int age = 20;
    int hasTicket = 1;

    if (age >= 18) {
        if (hasTicket) {
            printf("Entry allowed.\n");
        } else {
            printf("Please buy a ticket first.\n");
        }
    } else {
        printf("Entry denied: must be 18 or older.\n");
    }

    return 0;
}
