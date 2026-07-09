/*
 * Program: Implicit Type Conversion (Type Promotion)
 * Description: The compiler automatically converts one data type to another
 *              when different types are mixed in an expression.
 *              Smaller types are "promoted" to larger types to avoid data loss.
 */

#include <stdio.h>

int main(void) {
    int a = 10;
    float b = 3.5f;

    // 'a' is implicitly converted to float before the addition,
    // so the result is a float.
    float result = a + b;
    printf("int + float = %f\n", result);

    char ch = 'A';
    int charToInt = ch + 1;  // char implicitly promoted to int
    printf("'A' + 1 (as int) = %d\n", charToInt);

    return 0;
}
