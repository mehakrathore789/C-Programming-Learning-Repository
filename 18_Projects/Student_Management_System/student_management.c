/*
 * Project: Student Management System (In-Memory)
 * Description: A menu-driven program to add, view, and search student
 *              records using an array of structures.
 */

#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 50

struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

struct Student students[MAX_STUDENTS];
int studentCount = 0;

void addStudent(void);
void viewAllStudents(void);
void searchStudentByRoll(void);

int main(void) {
    int choice;

    do {
        printf("\n===== Student Management System =====\n");
        printf("1. Add Student\n");
        printf("2. View All Students\n");
        printf("3. Search Student by Roll Number\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addStudent(); break;
            case 2: viewAllStudents(); break;
            case 3: searchStudentByRoll(); break;
            case 4: printf("Exiting. Goodbye!\n"); break;
            default: printf("Invalid choice, try again.\n");
        }
    } while (choice != 4);

    return 0;
}

void addStudent(void) {
    if (studentCount >= MAX_STUDENTS) {
        printf("Student list is full!\n");
        return;
    }

    struct Student newStudent;
    printf("Enter name: ");
    scanf(" %49[^\n]", newStudent.name); // reads a full line including spaces
    printf("Enter roll number: ");
    scanf("%d", &newStudent.rollNumber);
    printf("Enter marks: ");
    scanf("%f", &newStudent.marks);

    students[studentCount] = newStudent;
    studentCount++;

    printf("Student added successfully!\n");
}

void viewAllStudents(void) {
    if (studentCount == 0) {
        printf("No students found.\n");
        return;
    }

    printf("\n%-20s %-12s %-6s\n", "Name", "Roll No.", "Marks");
    printf("---------------------------------------\n");
    for (int i = 0; i < studentCount; i++) {
        printf("%-20s %-12d %-6.2f\n",
               students[i].name, students[i].rollNumber, students[i].marks);
    }
}

void searchStudentByRoll(void) {
    int roll;
    printf("Enter roll number to search: ");
    scanf("%d", &roll);

    for (int i = 0; i < studentCount; i++) {
        if (students[i].rollNumber == roll) {
            printf("Found -> Name: %s, Marks: %.2f\n", students[i].name, students[i].marks);
            return;
        }
    }
    printf("No student found with roll number %d.\n", roll);
}
