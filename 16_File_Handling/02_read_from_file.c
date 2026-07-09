/*
 * Program: Reading from a File
 * Description: Opens a file in read mode ("r") and prints its contents
 *              line by line. Run 01_write_to_file.c first to create notes.txt.
 */

#include <stdio.h>

int main(void) {
    FILE *filePointer = fopen("notes.txt", "r"); // "r" = read mode

    if (filePointer == NULL) {
        printf("Error: could not open file. Did you run 01_write_to_file.c first?\n");
        return 1;
    }

    char line[100];
    printf("Contents of notes.txt:\n");
    while (fgets(line, sizeof(line), filePointer) != NULL) {
        printf("%s", line); // fgets keeps the newline, so no extra \n needed
    }

    fclose(filePointer);
    return 0;
}
