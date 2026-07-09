/*
 * Program: Appending to a File
 * Description: Opens a file in append mode ("a") - adds new content to the
 *              END of the file WITHOUT deleting existing data.
 */

#include <stdio.h>

int main(void) {
    FILE *filePointer = fopen("notes.txt", "a"); // "a" = append mode

    if (filePointer == NULL) {
        printf("Error: could not open file for appending.\n");
        return 1;
    }

    fprintf(filePointer, "This line was appended later.\n");
    fclose(filePointer);

    printf("New line appended to notes.txt.\n");
    return 0;
}
