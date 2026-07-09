/*
 * Program: switch-case Statement
 * Description: Compares one variable against multiple constant values.
 *              'break' prevents fall-through to the next case.
 *              'default' runs when no case matches.
 */

#include <stdio.h>

int main(void) {
    int dayNumber = 3;

    switch (dayNumber) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
        case 7:
            // No break above -> both 6 and 7 share this block (weekend)
            printf("Weekend\n");
            break;
        default:
            printf("Invalid day number\n");
    }

    return 0;
}
