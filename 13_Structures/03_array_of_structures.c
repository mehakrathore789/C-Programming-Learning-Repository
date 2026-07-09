/*
 * Program: Array of Structures
 * Description: Combines arrays and structures to store multiple records
 *              of the same type, e.g. a list of students.
 */

#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    float marks;
};

int main(void) {
    struct Student students[3] = {
        {"Alice", 92.5f},
        {"Bob", 85.0f},
        {"Charlie", 78.5f}
    };

    printf("Student Records:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d. %-10s Marks: %.1f\n", i + 1, students[i].name, students[i].marks);
    }

    return 0;
}
