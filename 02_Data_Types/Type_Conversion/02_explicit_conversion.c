/*
 * Program: Explicit Type Conversion (Type Casting)
 * Description: The programmer manually converts a value from one type
 *              to another using the cast operator: (type)value
 */

#include <stdio.h>

int main(void) {
    float price = 99.95f;

    // Explicitly cast float to int -> the decimal part is truncated (not rounded)
    int roundedDownPrice = (int)price;
    printf("Original price: %.2f\n", price);
    printf("Casted to int:  %d\n", roundedDownPrice);

    int total = 7, count = 2;

    // Without casting, integer division truncates: 7 / 2 = 3
    printf("Integer division: %d\n", total / count);

    // Casting one operand to float forces floating-point division
    float average = (float)total / count;
    printf("Float division:   %.2f\n", average);

    return 0;
}
