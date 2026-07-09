/*
 * Program: Safe String Input
 * Description: gets() is unsafe (no bounds checking) and removed from the
 *              C standard. fgets() is the recommended, safe alternative
 *              because it lets you limit how many characters are read.
 */

#include <stdio.h>
#include <string.h>

int main(void) {
    char name[50];

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin); // Reads up to 49 chars + null terminator

    // fgets() keeps the trailing newline character; this removes it if present
    name[strcspn(name, "\n")] = '\0';

    printf("Hello, %s! Welcome to C programming.\n", name);

    return 0;
}
