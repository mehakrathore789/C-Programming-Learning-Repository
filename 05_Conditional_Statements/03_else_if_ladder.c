/*
 * Program: else-if Ladder
 * Description: Checks multiple conditions in sequence; the first true
 *              condition's block executes and the rest are skipped.
 */

#include <stdio.h>

int main(void) {
    int marks = 72;
    char grade;

    if (marks >= 90) {
        grade = 'A';
    } else if (marks >= 75) {
        grade = 'B';
    } else if (marks >= 60) {
        grade = 'C';
    } else if (marks >= 40) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    printf("Marks: %d -> Grade: %c\n", marks, grade);

    return 0;
}
