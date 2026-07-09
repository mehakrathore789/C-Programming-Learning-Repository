/*
 * Project: Simple Calculator
 * Description: A menu-driven calculator that performs addition, subtraction,
 *              multiplication, and division based on user choice.
 */

#include <stdio.h>

float add(float a, float b) { return a + b; }
float subtract(float a, float b) { return a - b; }
float multiply(float a, float b) { return a * b; }

int main(void) {
    int choice;
    float num1, num2;

    printf("===== Simple Calculator =====\n");
    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
    printf("Enter choice (1-4): ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    switch (choice) {
        case 1:
            printf("Result: %.2f\n", add(num1, num2));
            break;
        case 2:
            printf("Result: %.2f\n", subtract(num1, num2));
            break;
        case 3:
            printf("Result: %.2f\n", multiply(num1, num2));
            break;
        case 4:
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
            } else {
                printf("Result: %.2f\n", num1 / num2);
            }
            break;
        default:
            printf("Invalid choice. Please select between 1 and 4.\n");
    }

    return 0;
}
