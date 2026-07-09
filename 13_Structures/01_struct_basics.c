/*
 * Program: Structure Basics
 * Description: A struct groups different data types together under one name.
 *              Here we model a single "Student" record.
 */

#include <stdio.h>
#include <string.h>

// Defining a structure blueprint
struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

int main(void) {
    struct Student student1; // Declare a variable of type 'struct Student'

    strcpy(student1.name, "Alice");   // Access members with the dot (.) operator
    student1.rollNumber = 101;
    student1.marks = 92.5f;

    printf("Name:  %s\n", student1.name);
    printf("Roll:  %d\n", student1.rollNumber);
    printf("Marks: %.1f\n", student1.marks);

    return 0;
}
