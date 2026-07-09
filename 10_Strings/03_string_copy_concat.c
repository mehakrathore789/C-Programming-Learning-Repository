/*
 * Program: String Copy and Concatenation
 * Description: strcpy() copies one string into another.
 *              strcat() appends one string to the end of another.
 */

#include <stdio.h>
#include <string.h>

int main(void) {
    char source[] = "Hello";
    char destination[50];

    strcpy(destination, source);       // destination now holds "Hello"
    printf("After strcpy: %s\n", destination);

    strcat(destination, ", World!");   // appends to the existing content
    printf("After strcat: %s\n", destination);

    return 0;
}
