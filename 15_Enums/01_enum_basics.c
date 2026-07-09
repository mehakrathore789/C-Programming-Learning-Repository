/*
 * Program: Enum Basics
 * Description: An enum assigns readable names to a set of integer constants.
 *              By default, the first member is 0, and each subsequent one
 *              increases by 1 unless explicitly assigned.
 */

#include <stdio.h>

enum Weekday { MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY };
// MONDAY=0, TUESDAY=1, WEDNESDAY=2, THURSDAY=3, FRIDAY=4, SATURDAY=5, SUNDAY=6

enum StatusCode { SUCCESS = 200, NOT_FOUND = 404, SERVER_ERROR = 500 }; // custom values

int main(void) {
    enum Weekday today = WEDNESDAY;
    printf("Today's enum value: %d\n", today); // prints 2

    enum StatusCode response = NOT_FOUND;
    printf("HTTP Status: %d\n", response); // prints 404

    return 0;
}
