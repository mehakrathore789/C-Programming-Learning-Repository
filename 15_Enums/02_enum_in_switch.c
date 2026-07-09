/*
 * Program: Enum with switch-case
 * Description: Enums pair naturally with switch statements, making
 *              state-based logic much more readable than raw numbers.
 */

#include <stdio.h>

enum TrafficLight { RED, YELLOW, GREEN };

void describeSignal(enum TrafficLight signal);

int main(void) {
    enum TrafficLight currentSignal = YELLOW;
    describeSignal(currentSignal);
    return 0;
}

void describeSignal(enum TrafficLight signal) {
    switch (signal) {
        case RED:
            printf("STOP\n");
            break;
        case YELLOW:
            printf("GET READY\n");
            break;
        case GREEN:
            printf("GO\n");
            break;
        default:
            printf("Unknown signal\n");
    }
}
