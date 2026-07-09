/*
 * Program: String Comparison
 * Description: strcmp() compares two strings lexicographically.
 *              It returns 0 if equal, a negative value if str1 < str2,
 *              and a positive value if str1 > str2.
 */

#include <stdio.h>
#include <string.h>

int main(void) {
    char password[] = "secret123";
    char userInput[] = "secret123";

    if (strcmp(password, userInput) == 0) {
        printf("Access granted: passwords match.\n");
    } else {
        printf("Access denied: passwords do not match.\n");
    }

    printf("strcmp(\"apple\", \"banana\") = %d\n", strcmp("apple", "banana")); // negative

    return 0;
}
