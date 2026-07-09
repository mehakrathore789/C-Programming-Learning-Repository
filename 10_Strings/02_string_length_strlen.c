/*
 * Program: String Length
 * Description: Shows both the built-in strlen() function and a manual
 *              implementation to understand how it works internally.
 */

#include <stdio.h>
#include <string.h>

int myStrlen(const char str[]); // manual implementation

int main(void) {
    char text[] = "Programming";

    printf("Using strlen():   %zu\n", strlen(text));
    printf("Using myStrlen(): %d\n", myStrlen(text));

    return 0;
}

int myStrlen(const char str[]) {
    int count = 0;
    while (str[count] != '\0') { // keep counting until the null terminator
        count++;
    }
    return count;
}
