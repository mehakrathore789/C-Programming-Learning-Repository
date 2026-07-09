/*
 * Program: Variables
 * Description: Shows how to declare, initialize, and use variables in C.
 *              A variable is a named location in memory that stores a value.
 */

#include <stdio.h>

int main(void) {
    int age;          // Declaration: reserves memory, no value assigned yet
    age = 21;          // Assignment: stores the value 21 in 'age'

    int marks = 95;     // Declaration + initialization in a single step
    float price = 49.99f; // A float variable storing a decimal value
    char grade = 'A';     // A char variable storing a single character

    printf("Age: %d\n", age);
    printf("Marks: %d\n", marks);
    printf("Price: %.2f\n", price);
    printf("Grade: %c\n", grade);

    // Variables can be updated after declaration
    age = age + 1;
    printf("Age after birthday: %d\n", age);

    return 0;
}
