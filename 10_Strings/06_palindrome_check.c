/*
 * Program: Palindrome Check
 * Description: A palindrome reads the same forwards and backwards
 *              (e.g., "madam", "racecar"). This program checks a string
 *              without creating a reversed copy, by comparing from both ends.
 */

#include <stdio.h>
#include <string.h>

int main(void) {
    char str[] = "madam";
    int length = strlen(str);
    int isPalindrome = 1; // Assume true until proven otherwise

    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("\"%s\" is a palindrome.\n", str);
    } else {
        printf("\"%s\" is NOT a palindrome.\n", str);
    }

    return 0;
}
