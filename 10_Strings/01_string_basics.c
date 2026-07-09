/*
 * Program: String Basics
 * Description: A string in C is an array of characters ending with the
 *              null character '\0', which marks where the string ends.
 */

#include <stdio.h>

int main(void) {
    char greeting[] = "Hello"; // Compiler automatically adds '\0' at the end
    char name[20];              // Empty buffer with room for 19 chars + '\0'

    printf("Greeting: %s\n", greeting); // %s prints until it hits '\0'

    printf("Enter your name: ");
    scanf("%19s", name); // %s with scanf reads a single word (stops at whitespace)

    printf("Hello, %s!\n", name);

    return 0;
}
