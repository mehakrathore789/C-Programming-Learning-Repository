/*
 * Project: Library Management System (File-Based)
 * Description: Manages book records and stores them permanently in a
 *              binary file (library.dat) so data is not lost between runs.
 */

#include <stdio.h>
#include <string.h>

#define FILENAME "library.dat"

struct Book {
    char title[50];
    char author[50];
    int year;
};

void addBook(void);
void viewAllBooks(void);

int main(void) {
    int choice;

    do {
        printf("\n===== Library Management System =====\n");
        printf("1. Add Book\n");
        printf("2. View All Books\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addBook(); break;
            case 2: viewAllBooks(); break;
            case 3: printf("Exiting. Goodbye!\n"); break;
            default: printf("Invalid choice, try again.\n");
        }
    } while (choice != 3);

    return 0;
}

void addBook(void) {
    struct Book newBook;

    printf("Enter title: ");
    scanf(" %49[^\n]", newBook.title);
    printf("Enter author: ");
    scanf(" %49[^\n]", newBook.author);
    printf("Enter publication year: ");
    scanf("%d", &newBook.year);

    // "ab" = append in binary mode -> adds to the file without erasing old data
    FILE *file = fopen(FILENAME, "ab");
    if (file == NULL) {
        printf("Error: could not open library file.\n");
        return;
    }

    fwrite(&newBook, sizeof(struct Book), 1, file);
    fclose(file);

    printf("Book added and saved to %s successfully!\n", FILENAME);
}

void viewAllBooks(void) {
    struct Book book;

    FILE *file = fopen(FILENAME, "rb"); // "rb" = read binary
    if (file == NULL) {
        printf("No books found yet. Add a book first.\n");
        return;
    }

    printf("\n%-30s %-25s %-6s\n", "Title", "Author", "Year");
    printf("---------------------------------------------------------------\n");

    // Keep reading one Book record at a time until the end of the file
    while (fread(&book, sizeof(struct Book), 1, file) == 1) {
        printf("%-30s %-25s %-6d\n", book.title, book.author, book.year);
    }

    fclose(file);
}
