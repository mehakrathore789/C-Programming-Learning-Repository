/*
 * Program: Binary File I/O
 * Description: Writes a struct directly to a file in binary format using
 *              fwrite(), then reads it back using fread(). Binary I/O is
 *              faster and more compact than text I/O for structured data.
 */

#include <stdio.h>
#include <string.h>

struct Record {
    char name[30];
    int id;
};

int main(void) {
    struct Record outgoing = {"Neha Gupta", 7};

    // --- Write in binary mode ---
    FILE *out = fopen("record.bin", "wb"); // "wb" = write binary
    if (out == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }
    fwrite(&outgoing, sizeof(struct Record), 1, out); // write 1 record
    fclose(out);
    printf("Record written in binary format.\n");

    // --- Read it back in binary mode ---
    struct Record incoming;
    FILE *in = fopen("record.bin", "rb"); // "rb" = read binary
    if (in == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }
    fread(&incoming, sizeof(struct Record), 1, in);
    fclose(in);

    printf("Record read back -> Name: %s, ID: %d\n", incoming.name, incoming.id);

    return 0;
}
