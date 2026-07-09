/*
 * Program: Writing to a File
 * Description: Opens a file in write mode ("w") - creates it if it doesn't
 *              exist, or OVERWRITES it if it does - and writes text to it.
 */

#include <stdio.h>

int main(void) {
    FILE *filePointer = fopen("notes.txt", "w"); // "w" = write mode

    if (filePointer == NULL) { // Always check that the file opened successfully
        printf("Error: could not open file for writing.\n");
        return 1;
    }

    fprintf(filePointer, "Learning C programming.\n");
    fprintf(filePointer, "File handling is fun!\n");

    fclose(filePointer); // Always close the file when finished
    printf("Data written to notes.txt successfully.\n");

    return 0;
}
