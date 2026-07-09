/*
 * Program: do-while Loop
 * Description: Unlike while, do-while checks the condition AFTER running
 *              the loop body, so the body always executes at least once.
 *              This example simulates a simple repeating menu.
 */

#include <stdio.h>

int main(void) {
    int choice;

    do {
        printf("\n--- MENU ---\n");
        printf("1. Say Hello\n");
        printf("2. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Hello there!\n");
        }
    } while (choice != 2); // Loop continues until the user chooses to exit

    printf("Goodbye!\n");

    return 0;
}
