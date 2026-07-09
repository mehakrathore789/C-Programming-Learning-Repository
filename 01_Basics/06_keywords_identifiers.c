/*
 * Program: Keywords vs Identifiers
 * Description: Keywords are reserved words with special meaning to the compiler
 *              (e.g., int, return, if, for). They cannot be used as variable names.
 *              Identifiers are names given by the programmer to variables,
 *              functions, arrays, etc.
 */

#include <stdio.h>

int main(void) {
    // 'int' and 'return' below are KEYWORDS - reserved by the C language.
    // 'studentAge' and 'totalMarks' are IDENTIFIERS - chosen by the programmer.

    int studentAge = 20;      // valid identifier: starts with a letter
    int totalMarks = 450;     // valid identifier: uses camelCase

    // Rules for identifiers:
    // - Can contain letters, digits, and underscores
    // - Cannot start with a digit
    // - Cannot be a keyword (e.g., you cannot write: int return = 5;)
    // - Case-sensitive (Marks and marks are different)

    printf("Student Age: %d\n", studentAge);
    printf("Total Marks: %d\n", totalMarks);

    return 0;
}
