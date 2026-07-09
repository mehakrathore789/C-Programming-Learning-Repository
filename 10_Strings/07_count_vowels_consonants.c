/*
 * Program: Count Vowels and Consonants
 * Description: Iterates through a string, classifying each alphabetic
 *              character as a vowel or consonant.
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h> // for tolower()

int main(void) {
    char str[] = "Hello World";
    int vowels = 0, consonants = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]); // normalize to lowercase for easy comparison

        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
        // non-alphabetic characters (spaces, punctuation) are ignored
    }

    printf("String: \"%s\"\n", str);
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
