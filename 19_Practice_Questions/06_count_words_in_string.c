/*
 * Practice: Count Words in a String
 * Description: Counts the number of words in a sentence by counting
 *              transitions from whitespace to a non-whitespace character.
 */

#include <stdio.h>

int main(void) {
    char sentence[] = "  C programming is fun to learn  ";
    int wordCount = 0;
    int insideWord = 0; // tracks whether we are currently inside a word

    for (int i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] != ' ' && !insideWord) {
            // We just entered a new word
            insideWord = 1;
            wordCount++;
        } else if (sentence[i] == ' ') {
            insideWord = 0; // we left a word (or are in a gap of spaces)
        }
    }

    printf("Sentence: \"%s\"\n", sentence);
    printf("Word count: %d\n", wordCount);

    return 0;
}
