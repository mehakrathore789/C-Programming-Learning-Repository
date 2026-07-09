/*
 * Practice: Leap Year Check
 * Description: A year is a leap year if:
 *              - it is divisible by 4, AND
 *              - it is NOT divisible by 100, UNLESS it is also divisible by 400.
 *              Examples: 2000 (leap), 1900 (not leap), 2024 (leap), 2023 (not leap)
 */

#include <stdio.h>

int isLeapYear(int year);

int main(void) {
    int year = 2024;

    if (isLeapYear(year)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is NOT a leap year.\n", year);
    }

    return 0;
}

int isLeapYear(int year) {
    if (year % 400 == 0) return 1;
    if (year % 100 == 0) return 0;
    if (year % 4 == 0) return 1;
    return 0;
}
