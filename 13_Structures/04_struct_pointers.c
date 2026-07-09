/*
 * Program: Pointers to Structures
 * Description: When accessing struct members through a POINTER, use the
 *              arrow operator (->) instead of the dot operator (.).
 *              structPtr->member  is shorthand for  (*structPtr).member
 */

#include <stdio.h>
#include <string.h>

struct Book {
    char title[50];
    float price;
};

int main(void) {
    struct Book book1;
    strcpy(book1.title, "The C Programming Language");
    book1.price = 499.0f;

    struct Book *bookPtr = &book1; // pointer to the struct

    printf("Using dot operator:   %s\n", book1.title);
    printf("Using arrow operator: %s\n", bookPtr->title);

    bookPtr->price = 399.0f; // modify the struct through the pointer
    printf("Updated price: %.2f\n", book1.price);

    return 0;
}
