/*
 * Program: Reverse a String
 * Description: Reverses a string in place using a two-pointer technique,
 *              similar to reversing an array.
 */

#include <stdio.h>
#include <string.h>

int main(void) {
    char str[] = "Hello World";
    int start = 0;
    int end = strlen(str) - 1;

    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}
