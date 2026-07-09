/*
 * Program: Nested Structures
 * Description: A structure can contain another structure as one of its members.
 *              Here, an "Employee" struct contains an "Address" struct.
 */

#include <stdio.h>
#include <string.h>

struct Address {
    char city[30];
    char state[30];
};

struct Employee {
    char name[50];
    int employeeId;
    struct Address address; // nested structure
};

int main(void) {
    struct Employee emp1;

    strcpy(emp1.name, "Rahul Sharma");
    emp1.employeeId = 2024;
    strcpy(emp1.address.city, "Bhopal");    // access nested member with chained dots
    strcpy(emp1.address.state, "Madhya Pradesh");

    printf("Employee: %s (ID: %d)\n", emp1.name, emp1.employeeId);
    printf("Location: %s, %s\n", emp1.address.city, emp1.address.state);

    return 0;
}
